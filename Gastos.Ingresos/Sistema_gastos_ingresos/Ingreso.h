#pragma once
#include "Transaccion.h"
#include "Fecha.h"
class Ingreso : public Transaccion
{
public:
	 Ingreso();

	Ingreso(int idTransaccion, const std::string& descripcion, const Fecha& fecha, int idCategoria, int tipoingreso, const std::string &refexterna, float monto, bool estado);	
	
	void settipoingreso(int tipoingreso);
	void setrefexterna(const std::string& refexterna);

	int gettipoingreso()const;
	std::string getrefexterna()const;

	std::string Tostring() const ;




private:
	int _tipoingreso;
	std::string _refexterna;

};

