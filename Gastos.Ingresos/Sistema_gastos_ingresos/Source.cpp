#include <iostream>
#include "Sistema.h"
using namespace std;

int main() {
	Sistema Mysistem;
	bool a = true;
	int opcion;
	while (a) {
		
		cout <<  " 1 - CARGAR TODO " << endl;
		cout << "2 - TODOS GASTOS MES EN CURSO  " << endl;
		cout << "3 - INGRESO MAS REDITUABLE " << endl;
		cout << " 4 - SALDO TOTAL ENTRE TODOS LOS REGISTROS" << endl;
		cout << " 0 - SALIR DEL SISTEMA  " << endl;
		cin >> opcion;

		if (opcion == 1) {
			Mysistem.cargartransacciones();

		}
		if (opcion == 2) {
			int mes;
			cout << "INGRESE MES EN CURSO " << endl;
			cin >> mes;
			Mysistem.mostrargastos(mes);
		}
		if (opcion == 3){
			Mysistem.mejoringreso();

		}
		if (opcion == 4) {
			Mysistem.saldototal();

		}
		if (opcion == 0){
			a = false;
		}
		

	}
  return 0;
}