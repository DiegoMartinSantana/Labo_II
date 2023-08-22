#include "Reunion.h"
#include "FechaHorario.h"
#include "Persona.h"
#include<iostream>
using namespace std;



Reunion::Reunion()
{
    //constructor
}


        //metodos

        void Reunion::agregarIntegrante(Persona agregar){

            setIntegrante(agregar);

        }

        Persona Reunion::obtenerIntegrante(int nropersona){

            for(int x =0;x<5;x++){

                if(x==nropersona){

                    return  _integrantes[x];
                }
            }
        }

        int Reunion::cantidadIntegrantes(){
                int con=0;
                for(int x =0;x<5;x++){

                if(_integrantes[x].getnombre()!= "" ){
                    con++;
                }
            }
            return con;
        }
        //metodos de las props

        void Reunion::setDuracion ( int duracion){
            if(duracion >=0){
            _duracion=duracion;
            }else{
            duracion = -1;
            }

        }

        int Reunion::getDuracion(){ return _duracion;}

        void Reunion::setLugar (string lugar){
            _lugar = lugar;
        }

        string Reunion::getLugar(){ return _lugar;}
        void Reunion::setTema( string tema){
            _tema=tema;
        }
        string Reunion::getTema(){ return _tema;}


        void Reunion::setIntegrante(Persona integrante){ //recibe el persona que ya contiene nombre y apellido.

            _integrante.setnombre(integrante.getnombre());
            _integrante.setapellido(integrante.getapellido());
            bool a=false;

            for(int x =0;x<5;x++){

                if(_integrantes[x].getnombre()== "" && a==false){

                    _integrantes[x].setnombre(integrante.getnombre());
                    _integrantes[x].setapellido(integrante.getapellido());
                    a=true; // validar si es cada vez que se ingresa..

                }

            }

        }


        Persona  Reunion::getIntegrante(){ return _integrante;}


        void Reunion::setFecha (int dia, int mes, int anio){
            _fecha.setFecha(dia,mes,anio);
        }
        FechaHorario Reunion::getFecha(){ return _fecha;} //despues llamo a su get fecha..

        void Reunion::setHorario (int seg, int minuto , int hora){
            _horario.setHorario(seg,minuto,hora);
        }
        FechaHorario Reunion::getHorario(){return _horario;}
















