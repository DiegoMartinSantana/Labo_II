#pragma once //  resuelve este problema asegurándose de que un archivo de encabezado solo sea incluido una vez en un mismo archivo fuente
#include <string>
using namespace std;
#define FECHA_H


class Fecha
{


//props y metodos privados.

 private:
  int _dia;
  int _mes;
  int _anio;
   void AgregarDia();
      void RestarDia();





//metodos leer a esas props
 public:
    int getDia();
    int getMes();
    int getAnio();
    int setDia(int dia);
    int setMes(int mes);
    int setAnio(int anio);
 //definicion CONSTRUCTOR publicoo

    Fecha(int dia , int mes, int anio);

//definicion constructor sin parametros

    Fecha();

//metodo publico

void AgregarDias(int diasagre);


string ToString();



};


