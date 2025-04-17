#ifndef TAREAS
#define TAREAS

#include <vector>
#include <string>

namespace Tareas {
    extern std::vector<std::string> tareas;
    extern std::string titulo;

    void agregar_tarea(std::vector<std::string>& tareas, std::string& titulo);
    void eliminar_tarea(std::vector<std::string>& tareas, int& indice);
    void mostrar_tareas(std::vector<std::string>& tareas);
}

#endif
