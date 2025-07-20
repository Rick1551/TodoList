#include <iostream>
#include "../include/TodoList.hpp"

int main(){
    TodoList lista;
    int opcion;

    do{
        std::cout << "\n--- To Do List ---\n"
                  << "1. Añadir tarea\n"
                  << "2. Listar tareas\n"
                  << "3. Marcar como completada\n"
                  << "4. Salir\n"
                  << "Opcion: ";
        std::cin >> opcion;

        switch(opcion) {
            case 1: {
            std::string descripcion;
            int prio;
            Prioridad prioridad;

            std::cin.ignore(); //Limpiar el buffer antes de gettline
            std::cout << "Descripcion: ";
            std::getline(std::cin, descripcion);

            std::cout << "Prioridad (0: Baja, 1: Media, 2: Alta: )";
            std::cin >> prio;

            //Validar prioridad
            if(prio < 0 || prio > 2){
                std::cout << "Prioridad invalidad. Usando prioridad baja por defecto. \n";
                prioridad = Prioridad::Baja;
            }else {
                prioridad = static_cast<Prioridad>(prio);
            }
                lista.agregarTarea(descripcion, prioridad);
                break;
            }

            case 2:
                lista.listarTareas();
                break;

            case 3: {
                int id;
                std::cout << "ID de la tarea a marcar como completada: ";
                std::cin >> id;
                lista.marcarCompletada(id);
                break;
            }

            case 4:
                std::cout << "Saliendo...\n";
                break;

            default:
                std::cout<< "Opcion invalida. \n";    
        }

    } while (opcion != 4);

    return 0;
}