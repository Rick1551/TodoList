#include "../include/TodoList.hpp"
#include <iostream>


void TodoList::agregarTarea(const std::string& descripcion, Prioridad prio){
        Tarea nueva{siguiente_id_++,descripcion,prio,false};

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
            case Prioridad::Media: std::cout << "Media"; break;
            case Prioridad::Alta: std::cout << "Alta"; break;
        }

        std::cout << "| Completada: " << (tarea.completada ? "Si" : "No") <<"\n";
    }
    
}

void TodoList::marcarCompletada(int id){
    tareas_[id+1].completada = true;
}