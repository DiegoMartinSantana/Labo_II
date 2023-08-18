
#include "VASO.h"
#include<iostream>
using namespace std;



float VASO::GetCapacidad(){return _capacidad;}
int VASO::GetCodigo(){return _codigo;}

void VASO::SetCapacidad(float litros){
_capacidad=litros;

}

void VASO::SetCodigo(int  codigo){
_codigo=codigo;

}
