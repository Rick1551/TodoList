#pragma once
#include <string>
#include <vector>

enum class Prioridad {Baja, Media, Alta};

struct Tarea{
    int id;
    std::string descripcion;
    Prioridad prioridad;
    bool completada;
};

class TodoList {
    private:
        std::vector<Tarea> tareas_;
        int siguiente_id_ = 1;

    public:
        void agregarTarea(const std::string& descripcion, Prioridad prio);
        void listarTareas() const;
        void marcarCompletada(int id);

};