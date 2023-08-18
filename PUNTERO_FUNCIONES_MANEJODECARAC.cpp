#include <iostream>
#include "funciones.h"
#include <cstring>
using namespace std;

#include <iostream>

int main() {

/*char cadena1[51], cadena2[50];

cargarCadena(cadena1,51);
cargarCadena(cadena2,50);
bool a;
a= ejer9(cadena1,cadena2);
if(a){
    cout << "ok";
}else{
cout <<"no ok " ;
}
    return 0;

*/

//punto 10

char mat[10][15];
char vecabece[26];
cargarvecabece(vecabece,26);
int vecpuntoa[26]{};
char c,linea[15];
for(int x=0;x<10;x++){
cout << "Usted esta cargando la palabra nro " << x+1 << endl;
     cin.getline(linea,sizeof(linea)); // //ingresa la linea, size of = tamañno que me pasa

    for(int y=0;y<strlen(linea);y++){ // mide todo lo ingresadooo :DDD

        c=linea[y]; // desglozo caracter x caracter y lo meto uno x uno en la mat  linea 40.

        mat[x][y] = tolower(c);

        if(c=='\0'){

                break; // si es 0 corta!
        } // validar si es break o return..
        }
}

// poiint a
for(int x=0;x<10;x++){

    for(int y=0;y<15;y++){


      for(int z=0;z<26;z++){
     if( vecabece[z]==mat[x][y]){
      vecpuntoa[z]++; // es la posicion relativa en el vecabece.. que tiene las letras
      }


        }

       }


}

        cout << "       LETRA :                 CANTIDAD DE VECES " ;
for(int x=0;x<26;x++){

            cout <<  vecabece[x] << "           " << vecpuntoa[x]<< endl;




}

//punto b un vec de con para cada.. a la par del a iria
int maximo= vecpuntoa[0];
char letramax=vecabece[0];
for(int x=0;x<26;x++){

    if(vecpuntoa[x]>maximo){
        maximo=vecpuntoa[x];
        letramax=vecabece[x];  // mostrar esto  punto b
    }

    if(vecpuntoa[x]==0){

       cout << "ESTA LETRA NO APARECIO NUNCA : " <<

       vecabece[x] << endl;
    }

}

cout << " LA LETRA QUE MAS APARECIO ES LA :  " << letramax << endl;


}
