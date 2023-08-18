#include "BIDONES.h"
#include<iostream>
#include <cstring>





void BIDONES::vender(float milim){

  _capacidad-=milim; // recibe milimetros y resta a su propiedad capacidad

}

int BIDONES::GetVendidos(){return _vendidos ; }

void BIDONES::SetVendidos(){
_vendidos++;

}

//metodos set y get

void BIDONES::SetCapacidad(float litros){
_capacidad=litros;

}

void BIDONES::SetCodigo(int  codigo){
_codigo=codigo;

}
void BIDONES::SetSabor (char *sabor){
   strcpy(_sabor , sabor);

}

char* BIDONES::GetSabor(){ // devuelve todo por eso el *
return _sabor;
}


float BIDONES::GetCapacidad(){
return _capacidad;
}





