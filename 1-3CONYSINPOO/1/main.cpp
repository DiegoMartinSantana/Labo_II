#include <iostream>
#include <cstring>
using namespace std;
/*
Problema 1
Un profesor desea poder cargar la cantidad de alumnos que tiene en su materia y que un programa le solicite
el Apellido y Nombres de cada uno de ellos así como también sus correspondientes notas finales del semestre.
De ese procesamiento de datos desea poder conocer:
La cantidad de alumnos que hayan obtenido un puntaje final que exceda el promedio general del curso.
Un listado con los apellidos y nombres de aquellos alumnos cuya puntaje final exceda el promedio general
 de los aprobados (se aprueba con nota final mayor a 6).
*/
 void limpiarbuff(){
 cin.clear();
 cin.ignore();
  }
  void libmemo(char **mat,int cantalum){  // libero la memoria pedida

     for(int x=0;x<cantalum;x++){
         delete[] mat [x];  // para cada fila..
     }
               delete []mat;
    }
 void cargaralumnos(char **matnom,char **matape,int *vecnotas ,int cantalum){ //dos punteros para las mat.

 cout << "Para finalizar la carga ingrese una nota negativa" << endl;
 bool a=true;
 int  x=0;

char vec[30];
for(x;x<cantalum;x++){

   limpiarbuff();
        cout << "ingrese nom " << endl;
        cin.getline(vec,30);
        strcpy(matnom[x], vec);



        cout << "ingrese ape " << endl;
        cin.getline(vec,30);
        strcpy(matape[x], vec);

        cout << "ingrese nota " << endl;
        cin >> vecnotas[x];

 }



 }
void mayordelprom (int *vec,int cantalum, int &promapro){
int acu=0,con=0;
    for(int x=0;x<cantalum;x++){
        acu+=vec[x];
        if(vec[x]>6){
            promapro++;
        }
    }
  int promedio = acu/cantalum;

    for(int x=0;x<cantalum;x++){
        if(vec[x]> promedio){
            con++;
        }
    }
    cout << "LA CANTIDAD MAYOR QUE EL PROMEDIO ES DE  " << con << endl;
}

void mayorpromapro(int cantalum ,int *vecnotas, char **matnom , char **matape ,int promapro){
//Un listado con los apellidos y nombres de aquellos alumnos cuya puntaje final exceda el promedio general
 //de los aprobados (se aprueba con nota final mayor a 6).
cout <<  "CANT ALUMNOS MAYORES AL PROMEDIO DE APROBADOS" <<endl;
for(int x =0 ; x<cantalum;x++){

        if(vecnotas[x]>promapro){
                cout<< x+1 << "_" << *(matnom+x) <<  *(matape+x) << "Y SU NOTA ES " <<   endl; // PARA MOSTRAR UNA MATRIZ SU FILA ENTERA :D
        }
}
}

int main()
{

    int cantalum;
    cout << "Ingrese cantidad de alumnos" << endl;
    cin >>cantalum;
    int *vecnotas = new int [cantalum]; // pido espacio para el vector de ntoas de tamaño cantaum;
    char **matnom = new char *[cantalum]; //array de punteros par las filas
    char **matape = new char *[cantalum];
    for(int x=0;x<cantalum;x++){  // for para cargar las filas :D

        matnom[x] = new char [30]; // 30 = espacio de las mismas ( columnas)
        matape[x] = new char [30]; // 30 = espacio de las mismas ( columnas)
    }
    int promapro=0;

    cargaralumnos(matnom,matape,vecnotas, cantalum);
    mayordelprom(vecnotas,cantalum,promapro);
    promapro=promapro/cantalum;
    mayorpromapro(cantalum,vecnotas,matnom,matape,promapro);


    libmemo(matnom,cantalum);
    libmemo(matape,cantalum);
    return 0;
}
