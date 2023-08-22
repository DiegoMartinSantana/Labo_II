#ifndef REUNION_H
#define REUNION_H
#include "FechaHorario.h"
#include "Persona.h"
#include <string>


class Reunion
{
    public:
        //constructores..
        Reunion();

        //metodos

        void agregarIntegrante(Persona agregar);

        Persona obtenerIntegrante(int nropersona);

        int cantidadIntegrantes();

        //metodos de las props

        void setDuracion ( int duracion);
        int getDuracion();

        void setLugar (std::string lugar);
        std::string getLugar();

        void setTema( std::string tema);
        std::string getTema();

        void setIntegrante(Persona integrante);
        Persona getIntegrante();

        void setFecha (int dia, int mes , int anio);
        FechaHorario getFecha();

        void setHorario ( int seg, int minuto , int hora);
        FechaHorario getHorario();



   // protected:

    private:

        FechaHorario _fecha; // aca va fecha
        FechaHorario _horario;
        std::string _lugar;
        std::string _tema;
        int _duracion;
        Persona _integrante;
        Persona _integrantes[5];












};

#endif // REUNION_H
