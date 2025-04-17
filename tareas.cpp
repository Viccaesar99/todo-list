#include <iostream>
#include <vector>
#include <string>
#include "tareas.h"

using std::cout;
using std::endl;

namespace Tareas {
    std::vector<std::string> tareas;
    std::string titulo;
    int indice;

    void agregar_tarea(std::vector<std::string> &tareas, std::string &titulo) {
        tareas.push_back(titulo);
        cout << "Tarea agregada con exito" << endl;
    } 
    void eliminar_tarea(std::vector<std::string> &tareas, int &indice) {
        if (indice > 0 && indice < tareas.size()){
            tareas.erase(tareas.begin() + (indice - 1));
            cout << "Tarea eliminada con exito" << endl;

        }else{
            cout << "Esta tarea no existe dentro de las tareas" << endl;

        }
    }
    void mostrar_tareas(std::vector<std::string> &tareas) {
        if (tareas.size() > 0) {
            for (int i = 0; i < tareas.size(); i++) {
                cout << "["<<i+1<<"] - "<< tareas[i] << endl;
            }
        }else{
            cout << "Empiece a agregar tareas" << endl;
        
        }
    }
}



