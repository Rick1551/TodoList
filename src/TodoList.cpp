#include "../include/TodoList.hpp"
#include <iostream>


void TodoList::agregarTarea(const std::string& descripcion, Prioridad prio){
        Tarea nueva{1,descripcion,prio,false};

		tareas_.push_back(nueva);
        std::cout << "Tarea agregada con ID: " << nueva.id << "\n";
}

void TodoList::listarTareas() const{
    for (const auto& tarea : tareas_){
        std::cout << "ID: " <<tarea.id
                  << " | Descripcion: " << tarea.descripcion
                  << " | Prioridad: "; 
                  
        switch (tarea.prioridad) {
            case Prioridad::Baja: std::cout << "Baja"; break;
            case Prioridad::Media: std::cout << "Baja"; break;
            case Prioridad::Alta: std::cout << "Baja"; break;
        }
    }
    
}

void TodoList::marcarCompletada(int id){
    tareas_[id].completada = true;
}