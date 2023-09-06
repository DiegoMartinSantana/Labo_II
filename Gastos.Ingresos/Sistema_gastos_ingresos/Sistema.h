#pragma once
#include <string>

#include "Transaccion.h"
#include "Gasto.h"
#include "Ingreso.h"
class Sistema
{
public:
	void cargartransacciones();
	Ingreso cargarIngreso();
	Gasto cargarGasto();
	void saldototal() ;
	void mejoringreso()const ;
	void mostrargastos(int mes)const ;
private:
	Gasto _gasto[5];
	Ingreso _ingreso[5];
	/* todos gastos */
	

	/*ingreso mas redituable */
	Ingreso _mejorIngreso;

	/*saldo total , deficit o superavit 
	 SI MAS GASTO DEFICIT
	 SI MAS INGRESO SUPERAVIT
	*/
	float _saldoTotal=0;

};

