
#include <string>
#include "Gasto.h"


Gasto::Gasto() {

}
Gasto::Gasto(int idTransaccion, const std::string& descripcion, const Fecha& fecha, int idCategoria, int idMetodoPago, const std::string& establecimiento, float monto, bool estado) {

	setidUnico(idTransaccion);
	setdescripcion(descripcion);
	setfecha(fecha.getDia(), fecha.getMes(), fecha.getAnio());
	setidCategoria(idCategoria);
	setmetodopago(idMetodoPago);
	setestablecimiento(establecimiento);
	setimporte(monto);
	setestado(estado);

}


void Gasto::setmetodopago(int idmetodopago) {
	_idmetodopago = idmetodopago;
}

void Gasto::setestablecimiento(const std::string& establecimiento) {
	_establecimiento = establecimiento;
}

int Gasto::getmetodopago() const {
	return _idmetodopago;
}
std::string Gasto::getestablecimiento() const {
	return _establecimiento;
}
std::string Gasto::Tostring() const
{
	std::string gastostr;
	gastostr += "ID : " + std::to_string(getid()) + " Fecha : " + getFechastring() + " DESCRIPCION : " + getdescripcion() + " CATEGORIA : " + std::to_string(getidCategoria()) + " IMPORTE : " + std::to_string(getimporte()) + " ESTADO " + std::to_string(getestado()) + " ESTABLECIMIENTO : " + getestablecimiento() + " METODO DE PAGO :   " + std::to_string(getmetodopago());

	return  gastostr;




}