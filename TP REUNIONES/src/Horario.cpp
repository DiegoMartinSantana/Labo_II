
#include "Horario.h"
#include<iostream>
#include<string>
#include <ctime>
using namespace std;



Horario::Horario()
{
         time_t tiempo = time(NULL);// crea una marca de tiempo que representa una fecha yhora!
        // TM TIENE SEGM MINUTOS TODO..
        struct tm *fecha = localtime(&tiempo); // psa x direccion a local time que devuelve un struct.. y le creo un puntero(*fecha)
        _seg = fecha->tm_sec; //ASIGNO AL DIA , EL STRUTC FECHA  SU PROP DIA!
        _minuto = fecha->tm_min; // SU MES.. Y ASI.!
        _hora= fecha ->tm_hour;


}
Horario::Horario(int seg,int minu,int hora)
{
   _seg=seg;
   _minuto=minu;
   _hora=hora;

}

        int Horario::Getseg() { return _seg; }

        void Horario::Setseg(int seg) {
            if(seg>=0 && seg <60){
             _seg = seg;
            }else{
            _seg=-1;
            }

             }

        int Horario::Getminuto() { return _minuto; }

        void Horario::Setminuto(int minu) {
            if(minu>=0 && minu<60){

             _minuto = minu;

              } else {
              _minuto = -1;
              }
            }
        int Horario::Gethora() { return _hora; }

        void Horario::Sethora(int hora) {
                if(hora>=0 && hora<24){
             _hora = hora;
                }else{
                hora=-1;
                }
              }


        string Horario::ToString(){

        string seg,minuto,hora,devolver;

        seg= to_string(_seg);
        minuto = to_string(_minuto);
        hora = to_string(_hora);

        devolver = hora + ":" + minuto + ":"+seg;
        return devolver;

        }


        void Horario::Cargar(int seg, int minuto,int hora){

            Setminuto(minuto);
            Setseg(seg);
            Sethora(hora);
        }

        //Posible const para mostrar dias horas seg en formato  : "SON LAS
        //HORAS , TREINTER.. MINUTOS.. Y VEINTED SEGUNDOS....
        //void Horario::Mostrar(){}



















