
#include "Ingreso.h"
#include "Fecha.h"


Ingreso::Ingreso() {

}

Ingreso::Ingreso (int idTransaccion, const std::string& descripcion, const Fecha& fecha, int idCategoria, int tipoingreso, const std::string& refexterna, float monto, bool estado) {
	setidUnico(idTransaccion);
	setdescripcion(descripcion);
	setfecha(fecha.getDia(), fecha.getMes(), fecha.getAnio());
	setidCategoria(idCategoria);
	settipoingreso(tipoingreso);
	setrefexterna(refexterna);
	
	setimporte(monto);
	setestado(estado);
}


void Ingreso::settipoingreso(int tipoingreso) {
	_tipoingreso = tipoingreso;
}
void Ingreso::setrefexterna(const std::string& refexterna) {
	_refexterna = refexterna;
}

int Ingreso::gettipoingreso()const {
	return _tipoingreso;
}
std::string Ingreso::getrefexterna()const {
	return _refexterna;

}



int _idCategoria;
float _importe;
bool _estado;
std::string Ingreso::Tostring( ) const
{
	std::string ingresostr;
	ingresostr += "ID : " + std::to_string(getid()) + " Fecha : " + getFechastring() + " DESCRIPCION : " + getdescripcion() + " CATEGORIA : " + std::to_string(getidCategoria()) + " IMPORTE : " + std::to_string(getimporte()) + " ESTADO " + std::to_string(getestado()) + " REFERENCIA EXTERNA : " + getrefexterna() + " TIPO INGRESO  " + std::to_string(gettipoingreso());
		 
	return  ingresostr;




}
