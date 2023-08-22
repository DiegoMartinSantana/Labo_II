#include "Persona.h"
#include <string>
#include<iostream>
using namespace std;



Persona::Persona()
{
        _nombre="";

}

        Persona::Persona (string nombre, string apellido){
         setnombre(nombre);
         setapellido(apellido);
        }

        void Persona::setapellido(string apellido){

                _apellido=apellido;

        }

        void Persona::setnombre(string nombre){
                _nombre=nombre;
        }

        string Persona::getapellido(){ return _apellido;}
        string Persona::getnombre(){return _nombre;}


