#ifndef FECHAHORARIO_H
#define FECHAHORARIO_H
#include <string>
#include "FechaAct.h"
#include "Horario.h"


class FechaHorario
{
    public:
        //cons de sistema
        FechaHorario();

        // cons que recibe TODO
        FechaHorario( int seg,int minuto , int hora, int dia, int mes , int anio);
        FechaHorario( FechaAct fecha , Horario horario);


        //gets y set

        void setFecha(int dia, int mes , int anio );
        void setHorario(int seg,int minuto , int hora);

        std::string ToString();


        void setFecha( FechaAct fecha);
        void setHorario(Horario horario);

        FechaAct getfecha ();
        Horario gethorario();
   // protected:

    private:

        FechaAct _fecha;
        Horario _horario;

};

#endif // FECHAHORARIO_H
