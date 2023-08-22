#include <iostream>
#include "FechaAct.h"
#include "Horario.h"
#include "FechaHorario.h"
#include "Reunion.h"
using namespace std;

void cargardatos(Reunion *vec,int tam){

 // integrantes
    Persona vecper[5];
    vecper[0]= Persona("Brian " , "Lara");
    vecper[1]= Persona("Angel " , "Simon");
    vecper[2]= Persona("Maxi " , "Werner");
    vecper[3]= Persona("Laura " , "Velez");
    vecper[4]= Persona("Maxi " , "Sar");


 //reuniones
     //reunion 1
    vec[0].setFecha(1,10,2023);
    vec[0].setHorario(0,0,19); // verificar esto
    vec[0].setLugar(" Buenos Aires");
    vec[0].setTema (" Programacion en C++");
    vec[0].setDuracion(90);
    vec[0].setIntegrante(vecper[0]);
    vec[0].setIntegrante(vecper[1]);
    //reunion 2
    vec[1].setFecha(1,4,2023);
    vec[1].setHorario(0,0,19); // verificar esto
    vec[1].setLugar(" Internet");
    vec[1].setTema (" Estadistica y programacion");
    vec[1].setDuracion(100);
    vec[1].setIntegrante(vecper[2]);
    //reunion 3
    vec[2].setFecha(20,11,2023);
    vec[2].setHorario(0,0,23); // verificar esto
    vec[2].setLugar(" Discord");
    vec[2].setTema (" Goto gamejan 2023");
    vec[2].setDuracion(0);
    vec[2].setIntegrante(vecper[0]);
    //reunion4
    vec[3].setFecha(1,3,2024);
    vec[3].setHorario(0,0,18); // verificar esto
    vec[3].setLugar("  Buenos Aires");
    vec[3].setTema (" Base de datos con SQL");
    vec[3].setDuracion(60);
    vec[3].setIntegrante(vecper[3]);
    vec[3].setIntegrante(vecper[1]);
        //reunion5
    vec[4].setFecha(1,10,2023);
    vec[4].setHorario(0,0,18); // verificar esto
    vec[4].setLugar(" Discord");
    vec[4].setTema (" C#");
    vec[4].setDuracion(50);
    vec[4].setIntegrante(vecper[4]);
    //reunion6
    vec[5].setFecha(5,11,2023);
    vec[5].setHorario(0,0,21); // verificar esto
    vec[5].setLugar(" Steam");
    vec[5].setTema (" Torneo de Age of Empires");
    vec[5].setDuracion(50);
    vec[5].setIntegrante(vecper[0]);
    vec[5].setIntegrante(vecper[1]);
    vec[5].setIntegrante(vecper[4]);
    vec[5].setIntegrante(vecper[2]);
}


void reunionmaslarga(Reunion *vec,int tam){
        int maximo=vec[0].getDuracion();
        int posmaximo=0;

        for(int x=0;x<tam;x++){

            if(vec[x].getDuracion()>maximo){

                maximo=vec[x].getDuracion();
                posmaximo=x;
            }

        }
        int participantes =vec[posmaximo].cantidadIntegrantes();

        for(int y=0;y<participantes;y++){
            Persona mostrar;
            mostrar=vec[posmaximo].obtenerIntegrante(y);
            if(mostrar.getnombre()!= ""){
                cout << "Nombre : "<<mostrar.getnombre() << " Apellido : "<< mostrar.getapellido()<<endl;
            }

        }

}

void temas2023_temas2024 (Reunion *vec,int tam){
        cout << "TEMAS 2023" <<endl;
            for(int x= 0;x<tam;x++){
                FechaHorario most2023 = vec[x].getFecha();
                if(most2023.getfecha().getAnio()== 2023){
                    cout << vec[x].getTema()<< endl;
                }
            }
            cout << endl;
        cout << "TEMAS 2024" <<endl;
            for(int x= 0;x<tam;x++){
                FechaHorario most2023 = vec[x].getFecha();
                if(most2023.getfecha().getAnio()== 2024){
                    cout << vec[x].getTema()<< endl;
                }

            }

}

void reuniones_dsps_20hs (Reunion *vec,int tam){

        for(int x= 0;x<tam;x++){

            FechaHorario mostrar = vec[x].getHorario();
            if(mostrar.gethorario().Gethora()>20){
                cout << endl;
                cout << " se realziara despues de las 20 la reunion" <<endl;
                    cout << vec[x].getTema()<< endl;


            }

        }


}

int main()
{
    int tam=6;
    Reunion vecreu[6];
    cargardatos(vecreu,tam);
    reunionmaslarga(vecreu,tam);
    temas2023_temas2024(vecreu,tam);
    reuniones_dsps_20hs (vecreu,tam);


    return 0;
}
