#ifndef FECHAACT_H
#define FECHAACT_H
#include <string>

class FechaAct
{
   private:
  int _dia;
  int _mes;
  int _anio;
   void AgregarDia();
      void RestarDia();



 public:
    int getDia();
    int getMes();
    int getAnio();
    int setDia(int dia);
    int setMes(int mes);
    int setAnio(int anio);


    FechaAct(int dia , int mes, int anio);

//definicion constructor sin parametros
// si no le paso parametros muestra la hora del sistema
    FechaAct();
    //metodo publico

void AgregarDias(int diasagre);


std::string ToString();





};

#endif // FECHAACT_H
