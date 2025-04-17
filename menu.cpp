#include <iostream>
#include "menu.h"

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

        switch (opcion) {
            case 1:
                break;
            case 2:
                break;
            case 3:
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
