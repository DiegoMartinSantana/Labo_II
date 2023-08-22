
#include "FechaAct.h"
#include<iostream>
#include <ctime>
#include<string>
using namespace std;



//CONSTRUCTOR
FechaAct::FechaAct(int dia, int mes, int anio){
 if(dia>0 && dia <32 && mes>0 && mes <13 && anio >0  ){

   switch(mes){
   case 1 :
         _dia= dia;
    _mes= mes;
    _anio=anio;

       break;

   case 2 :
       if(dia<=28&& anio %4 != 0){
        _dia= dia;
        _mes= mes;
        _anio=anio;
       }

        if(anio%4==0 && dia<=29){
        _dia= dia;
        _mes= mes;
        _anio=anio;
        }

       break;

       case 3 :
        _dia= dia;
        _mes= mes;
        _anio=anio;

       break;
       case 4 :
        if(dia<=30){

        _dia= dia;
        _mes= mes;
        _anio=anio;
           }

       break;
       case 5 :

        _dia= dia;
        _mes= mes;
        _anio=anio;
       break;
       case 6 :
           if(dia<=30){

        _dia= dia;
        _mes= mes;
        _anio=anio;
           }

       break;
       case 7 :
        _dia= dia;
        _mes= mes;
        _anio=anio;
       break;
       case 8 :
           _dia= dia;
        _mes= mes;
        _anio=anio;
       break;
       case 9 :
           if(dia<=30){

        _dia= dia;
        _mes= mes;
        _anio=anio;
           }
       break;
       case 10 :
           _dia= dia;
        _mes= mes;
        _anio=anio;
       break;

       case 11 :
        if(dia<=30){

        _dia= dia;
        _mes= mes;
        _anio=anio;
           }
        break;

       case 12 :
        _dia= dia;
        _mes= mes;
        _anio=anio;
        break;

       default :
       cout<< "FECHA INVALIDA , ASIGNACION POR DEFECTO : 1/1/2023";
         _dia=01;
        _mes=01;
        _anio=2023;
    break;
   }

} else{
        _dia=01;
        _mes=01;
        _anio=2023;


    }
}
//constructor x defecto!
FechaAct::FechaAct(){ // por defecto la del sistema.

        time_t tiempo = time(NULL);// crea una marca de tiempo que representa una fecha yhora!
        // TM TIENE SEGM MINUTOS TODO..
        struct tm *fecha = localtime(&tiempo); // psa x direccion a local time que devuelve un struct.. y le creo un puntero(*fecha)
        _dia= fecha -> tm_mday;  //ASIGNO AL DIA , EL STRUTC FECHA  SU PROP DIA!
        _mes = fecha->tm_mon +1; // SU MES.. Y ASI.!
        _anio= fecha ->tm_year +1900;

        //   -> ES EL OPERADOR DE INDIRECCION!! INDIREECIONA FECHA Y ACCEDE A TM.

}
//METODOS PRIVADOS

void FechaAct::AgregarDia(){
    //AL FIN FUNCIONAAAAAA
    if(getMes()== 1 || getMes()== 3  || getMes()== 5  || getMes()== 7  || getMes()== 8  || getMes()== 10  ) {
        if(_dia==31){
            _mes++;
            _dia=1;
        }else{
        _dia++;
        }

    }
    if(  getMes()== 12){
         if(_dia==31){
            _mes=1;
            _dia=1;
            _anio++;
        }else if(_dia!=31){
        _dia++;
        }

    }
     if(getMes()== 2 ){
        if( _anio%4==0 && _anio %100!=0){
            if(_dia==29){
            _mes++;
            _dia=1;

        }else{
        _dia++;
        }
        }
            if(_dia==28){
            _mes++;
            _dia=1;
            } else{
            _dia++;
            }


    }
     if (  getMes()== 4  || getMes()== 6  || getMes()== 9  || getMes()== 11 ){
        if(_dia==30){
            _mes++;
            _dia=1;

        }else{
        _dia++;
        }
    }
}
void FechaAct::RestarDia(){
      //LOS DIAS DE 31
        if(getMes()== 2 || getMes()== 4 || getMes()== 6  || getMes()== 8  || getMes()== 9  || getMes()== 11  ) {
        if(_dia==1){
            _dia=31;
            _mes--;
        }else{
        _dia-=1;

        }
        }
        //LOS DIAS DE 30
        if(getMes()== 5 || getMes()== 7 || getMes()== 10  || getMes()== 12  ) {
        if(_dia==1){

        _dia=30;
        _mes--;
        }else{
        _dia-=1;
        }
        }
        // 1 CAMBIO AÑO --
        if(getMes()==1){
          if(_dia==1){
            _dia=31;
            _mes=12;
            _anio--;
        } else{
        _dia-=1;
        }
        }
        //3
        if(getMes()== 3 ){
        if( _anio%4==0 && _anio %100!=0){
            if(_dia==1){
            _dia-=1;
            _dia=29;

        }else{
        _dia-=1;
        }
        }else{
            if(_dia==1){
            _mes--;
            _dia=28;
            } else{
            _dia-=1;
            }
        }

        }
        }

        // metodos LECTURAS Y SET
int FechaAct::getDia(){ //  :: USA DE FECHA EL GET DIA , ES UN MEOTDO ASI QUE VA CON ()..
return _dia; //dia es privado asique lo accedemos x aca.!

}

int FechaAct::setMes(int mes){
  _mes=mes;

}

int FechaAct::setAnio( int anio){
    _anio=anio;

}

int FechaAct::setDia( int dia){
    _dia=dia;

}

int FechaAct::getMes(){
  return _mes;

}

int FechaAct::getAnio(){
    return _anio;

}

//metood publico ( act6)

void FechaAct::AgregarDias(int diasagre){

        if(diasagre==0){
            cout << "NO SE HA MODIFICADO LA FECHA" << endl;

        }else if(diasagre<0){

             for(int x=0; x > diasagre; x--) {

                RestarDia();
             }
        }else{

                for(int y=0;y<diasagre;y++){

                AgregarDia();
            }

        }
}

//meotdo string (7)

string FechaAct::ToString(){


string dia,mes,devolver,anio;

if(_dia<10){

     dia= "0" + to_string(_dia);

}else{
    dia= to_string(_dia);
}
if(_mes<10){

    mes= "0" + to_string(_mes);
}else{

mes= to_string(_mes);

}
anio=to_string(_anio);

devolver = dia+ "/" + mes + "/" + anio;
return devolver;

}
