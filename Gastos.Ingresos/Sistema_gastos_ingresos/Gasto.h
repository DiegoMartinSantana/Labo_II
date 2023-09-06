#pragma once
#include "Transaccion.h"

class Gasto : public Transaccion
{

public:
	Gasto();
	Gasto(int idTransaccion, const std::string& descripcion, const Fecha& fecha, int idCategoria, int idMetodoPago, const std::string& establecimiento, float monto, bool estado);
	void setmetodopago(int idmetodopago);
	void setestablecimiento(const std::string &establecimiento);

	int getmetodopago() const ;
	std:: string getestablecimiento() const;
	std::string Tostring() const;
private:

	int _idmetodopago;
	std::string _establecimiento;

};

