#include "../include/TodoList.hpp"
#include <iostream>


void TodoList::agregarTarea(const std::string& descripcion, Prioridad prio){
        Tarea nueva{1,descripcion,prio,false};

		tareas_.push_back(nueva);
        std::cout << "Tarea agregada con ID: " << nueva.id << "\n";
}

void TodoList::listarTareas() const{

}

void TodoList::marcarCompletada(int id){
    tareas_[id].completada = true;
}