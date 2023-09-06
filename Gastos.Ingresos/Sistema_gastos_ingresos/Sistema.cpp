
#include <iostream>
#include <string>
#include "Sistema.h"


using namespace std;



void Sistema::cargartransacciones() {


	for (int x = 0;x < 5;x++) {
		_gasto[x] = cargarGasto();

	}
	for (int x = 0;x < 5;x++) {
		_ingreso[x] = cargarIngreso();

	}


}
void Sistema::saldototal() {
	float acugastos = 0;
	for (int x = 0;x < 5;x++) {
		acugastos += _gasto[x].getimporte();

		

		_saldoTotal += _gasto[x].getimporte();

		_saldoTotal -= _ingreso[x].getimporte();
	}
	if (_saldoTotal > acugastos) {
		std::cout << "USTED POSEE  UN SUPERAVIT  DE : " << _saldoTotal << std::endl;


	}
	else if (_saldoTotal < acugastos) {
		std::cout << "USTED POSEE  UN DEFICIT DE : " << _saldoTotal << std::endl;

	}
	else {

		std::cout << "SU CUENTA ESTA EN 0  " << std::endl;

	}

}

void Sistema::mejoringreso() const{
	float mejoringreso = _ingreso[0].getimporte();
	int pos = 0;
	for (int x = 0;x < 5;x++) {
		
		if (_ingreso[x].getimporte() > mejoringreso) {
			mejoringreso = _ingreso[x].getimporte();
			pos = x;
		}

	}
	cout << "SU MEJOR INGRESO FUE : " << endl;
	cout << _ingreso[pos].Tostring() << endl;
		
}
void Sistema::mostrargastos(int mes)const {
	for (int x = 0;x < 5;x++) {
		std::cout << "ESTOS SON LOS GASTOS DEL MES CORRIENTE " << endl;
		if (mes == _gasto[x].getFecha().getMes()) { /* VERIFICAR EL SEGUNDO GET! DEBERIA PDOER ACCEDER , ALQ UE NO ES AL SET.*/
			
			cout << _gasto[x].Tostring() << endl;

		}

	}
}

Gasto Sistema::cargarGasto()
		{
			int idTransaccion, dia, mes, anio, idCategoria, idMetodoPago;
			std::string descripcion, establecimiento;
			float importe;
			bool estado = true;

			cout << "Ingrese ID de transaccion: ";
			cin >> idTransaccion;

			cout << "Ingrese descripcion: ";
			cin.ignore();
			getline(cin, descripcion);

			cout << "Ingrese dia: ";
			cin >> dia;

			cout << "Ingrese mes: ";
			cin >> mes;

			cout << "Ingrese anio: ";
			cin >> anio;

			cout << "Ingrese categoria: ";
			cin >> idCategoria;

			cout << "Ingrese forma de pago: ";
			cin >> idMetodoPago;

			cout << "Ingrese establecimiento: ";
			cin.ignore();

			getline(cin, establecimiento);

			cout << "Ingrese importe: ";
			cin >> importe;

		

			return Gasto(idTransaccion, descripcion, Fecha(dia, mes, anio), idCategoria, idMetodoPago, establecimiento, importe, estado);
		}

Ingreso Sistema::cargarIngreso() {

	int idTransaccion, dia, mes, anio, idCategoria, tipoingreso;
	std::string descripcion, refexterna;
	float importe;
	bool estado = true;
	
	cout << "Ingrese ID de transaccion: ";
	cin >> idTransaccion;

	cout << "Ingrese descripcion: ";
	cin.ignore();
	getline(cin, descripcion);

	cout << "Ingrese dia: ";
	cin >> dia;

	cout << "Ingrese mes: ";
	cin >> mes;

	cout << "Ingrese anio: ";
	cin >> anio;

	cout << "Ingrese categoria: ";
	cin >> idCategoria;

	cout << "Ingrese Tipo de Ingreso : ";
	cin >> tipoingreso;

	cout << "Ingrese Referencia Externa : ";
	cin.ignore();     

	getline(cin, refexterna);

	cout << "Ingrese importe: ";
	cin >> importe;

	return Ingreso(idTransaccion, descripcion, Fecha(dia, mes, anio), idCategoria, tipoingreso, refexterna, importe, estado);
}
