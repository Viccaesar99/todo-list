#include <iostream>
#include <string>
#include "menu.h"
#include "tareas.h"

using std::cout;
using std::endl;
using std::cin;

void Menu::borrar_pantalla(){
    cout << "\033[2J\033[1;1H";
}

void Menu::pausar_borrar() {
    cout << "Pulse enter para continuar...";
    cin.ignore();
    cin.get();
    Menu::borrar_pantalla();
}

void Menu::mostrar_menu() {
    int opcion = 0;
    while (opcion != 4) {
        cout << "╔═══════════════════╗" << endl;
        cout << "║  Menu principal   ║" << endl;
        cout << "╠═══════════════════╣" << endl;
        cout << "║[1] Agregar tarea  ║" << endl;
        cout << "║[2] Eliminar tarea ║" << endl;
        cout << "║[3] Mostrar tareas ║" << endl;
        cout << "║[4] Salir          ║" << endl;
        cout << "╚═══════════════════╝" << endl;
        cout << "Ingrese una opcion (1-4): ";
        cin >> opcion;
        cin.ignore(); 
        Menu::borrar_pantalla();
        if (cin.fail()){
                    cout << "[Error] se esperaba un numero entero" << endl;
                    cin.clear();
                    cin.ignore();
                    Menu::pausar_borrar();
                    continue;
        }else{
             switch (opcion) { 
                case 1:
                    cout << "Ingrese su tarea: ";
                    std::getline(cin, Tareas::titulo);
                    Tareas::agregar_tarea(Tareas::tareas, Tareas::titulo);
                    Menu::pausar_borrar();
                    break;
                case 2:
                    Tareas::mostrar_tareas(Tareas::tareas);
                    if (Tareas::tareas.size() > 0) {
                        cout << "Ingrese el numero de tarea a eliminar: ";
                        cin >> Tareas::indice;
                        if (cin.fail()){
                            cout << "[Error] se esperaba un numero entero" << endl;
                            cin.clear();
                            cin.ignore();
                            Menu::pausar_borrar();
                            break;
                        }else{
                            Tareas::eliminar_tarea(Tareas::tareas, Tareas::indice);
                            cin.clear();
                            cin.ignore();
                            Menu::pausar_borrar();
                            break;
                        }
                    }else{
                        cout << "No hay tareas para eliminar" << endl;
                        Menu::pausar_borrar();
                        break;
                    }
                case 3:
                    Tareas::mostrar_tareas(Tareas::tareas);
                    Menu::pausar_borrar();
                    break;
                case 4:
                    cout << "See you later..." << endl;
                    break;
                default:
                    cout << "Ingrese una opcion valida" << endl;
                    Menu::pausar_borrar();
                    break;
            }           
        }                        
    }
}
