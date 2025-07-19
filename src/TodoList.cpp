#include "TodoList.hpp"
#include <iostream>


void agregarTarea(const std::string& descripcion, Prioridad prio){
        Tarea nueva{
        1,
        "Estudiar C++",
        Prioridad::Alta,
        false
    };
    //tareas_.pushback(nueva);
}

void listarTareas(){
    switch (Prioridad::Baja)
    {
    case Prioridad::Baja:
        std::cout << "[B]";
        break;
    
    default:
        break;
    }
}