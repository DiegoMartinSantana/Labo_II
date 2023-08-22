#include "FechaHorario.h"
#include "FechaAct.h"
#include "Horario.h"

#include<iostream>
using namespace std;


FechaHorario::FechaHorario()
{
     _fecha = FechaAct();
     _horario = Horario();
     // poner por sistema!
    //ctor
}
// uno que reciba todo por separado!
FechaHorario::FechaHorario( int seg,int minuto , int hora, int dia, int mes , int anio){

        _fecha.setDia(dia);
        _fecha.setMes(mes);
        _fecha.setAnio(anio);
        _horario.Setseg(seg);
        _horario.Setminuto(minuto);
        _horario.Sethora(hora);


}
//otro que reciba los onjetos..
FechaHorario::FechaHorario( FechaAct fecha , Horario horario){

        setHorario(horario);
        setFecha(fecha);


}


        std::string FechaHorario::ToString(){
        string fecha, horario,devolver;

        fecha = _fecha.ToString();
        horario = _horario.ToString();
        devolver = "LA FECHA ES " + fecha + "  Y LA HORA ES : " + horario;
        return devolver;

        }

        void FechaHorario::setFecha(int dia, int mes , int anio ){
                _fecha.setDia(dia);
                _fecha.setMes(mes);
                _fecha.setAnio(anio);

        }
        void FechaHorario::setHorario(int seg,int minuto , int hora){
                _horario = Horario(seg,minuto,hora);


        }

        void FechaHorario::setFecha( FechaAct fecha){

        _fecha.setDia(fecha.getDia());
        _fecha.setMes(fecha.getMes());
        _fecha.setAnio(fecha.getAnio());



        }

        void FechaHorario::setHorario(Horario horario){
        _horario.Cargar(horario.Getseg(),horario.Getminuto(),horario.Gethora());
        }

        FechaAct FechaHorario::getfecha (){return _fecha;}
        Horario FechaHorario::gethorario(){return _horario;}

