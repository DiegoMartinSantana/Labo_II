#pragma once

#include <string>
class Fecha
{



public:
    int getDia()const;
    int getMes() const;
    int getAnio() const;
    void setDia(const int dia);
    void  setMes(const int mes);
    void  setAnio(const int anio);


    Fecha(int dia, int mes, int anio);

    //definicion constructor sin parametros
    // si no le paso parametros muestra la hora del sistema
    Fecha();
    //metodo publico

    void AgregarDias(int diasagre);


    std::string ToString()  const;

private:
    int _dia;
    int _mes;
    int _anio;
    void AgregarDia();
    void RestarDia();



};

