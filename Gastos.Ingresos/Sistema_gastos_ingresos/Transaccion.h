#pragma once
#include <iostream>
#include <string>
#include "Fecha.h"

class Transaccion
{
public :
		
	void setidUnico(int idunico) ;
	/* Recibe un string constante por parametro  */
	void setdescripcion(const std::string &descripcion) ;
	void setfecha(int dia, int mes, int anio);
	void setidCategoria(int idcategoria);
	void setimporte(float importe);
	void setestado(bool estado);

	int getid()const;
	std::string getFechastring()const ;
	std::string getdescripcion()const;
	Fecha getFecha()const;
	int getidCategoria()const;
	float getimporte()const;
	bool getestado()const;



private : 
	int _idunico;
	std::string _descripcion;
	Fecha  _Fecha;
	int _idCategoria;
	float _importe;
	bool _estado;

};

