
#include <iostream>
#include "Transaccion.h"
#include <string>
void Transaccion::setidUnico(int idunico) {
	_idunico = idunico;
}
void Transaccion::setdescripcion(const std::string &descripcion){
	/* Recibe un string constante por parametro  */
	_descripcion =descripcion;
}
void Transaccion::setfecha(int dia, int mes, int anio) {
	_Fecha.setDia(dia);
	_Fecha.setMes(mes);
	_Fecha.setAnio(anio);
}
void Transaccion::setidCategoria(int idcategoria){
	_idCategoria = idcategoria;
}
void Transaccion::setimporte(float importe) {
	_importe = importe;
}
void Transaccion::setestado(bool estado){
	_estado = estado;
}
std::string Transaccion::getFechastring() const {
	return _Fecha.ToString();

}
int Transaccion::getid()const { return _idunico; }
std::string Transaccion::getdescripcion()const { return _descripcion; }
Fecha Transaccion::getFecha()const { return _Fecha; }

int Transaccion::getidCategoria()const { return _idCategoria; }
float Transaccion::getimporte()const { return _importe; }
bool Transaccion::getestado() const { return _estado; }