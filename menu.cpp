#include <iostream>
#include <string>
#include "menu.h"
#include "tareas.h"

using std::cout;
using std::endl;
using std::cin;

void Menu::mostrar_menu() {
    int opcion = 0;
    while (opcion != 4) {
        cout << "---Menu principal---" << endl;
        cout << "--------------------" << endl;
        cout << "1) Agregar tarea" << endl;
        cout << "2) Eliminar tarea" << endl;
        cout << "3) Mostrar tareas" << endl;
        cout << "4) Salir" << endl;
        cout << "--------------------" << endl;
        cout << "Ingrese una opcion (1-4): ";
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1:
                cout << "Ingrese su tarea: ";
                std::getline(cin, Tareas::titulo);
                Tareas::agregar_tarea(Tareas::tareas, Tareas::titulo);
                break;
            case 2:
                Tareas::mostrar_tareas(Tareas::tareas);
                cout << "Ingrese el numero de tarea a eliminar: ";
                cin >> Tareas::indice;
                cin.ignore();
                Tareas::eliminar_tarea(Tareas::tareas, Tareas::indice);
                break;
            case 3:
                Tareas::mostrar_tareas(Tareas::tareas);
                break;
            case 4:
                cout << "See you later..." << endl;
                break;
            default:
                cout << "Ingrese una opcion valida" << endl;
                break;
        }                             
    }
}
