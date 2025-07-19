#include <iostream>
#include "TodoList.hpp"

int main(){
    TodoList lista;
    int opcion;

    do{
        std::cout << "\n--- To Do List ---\n"
                  << "1. Añadir tarea\n"
                  << "2. Listar tareas\n"
                  << "3. Maracar como completada\n"
                  << "4. Salir\n"
                  << "Opcion: ";
        std::cin >> opcion;

        //Switch

    } while (opcion != 4);

    lista.agregarTarea("Estudiar C++", Prioridad::Alta);
 
    lista.listarTareas();

    return 0;
}