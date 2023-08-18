#include <iostream>
#include <cstring>
#include <VASO.h>
#include <BIDONES.h>
using namespace std;

void crearvasos(VASO *vecvaso){

    vecvaso[0].SetCapacidad(0.150);
    vecvaso[0].SetCodigo(1);
    vecvaso[1].SetCapacidad(0.200);
    vecvaso[1].SetCodigo(2);
    vecvaso[2].SetCapacidad(0.300);
    vecvaso[2].SetCodigo(3);

}
void crearbidones(BIDONES *vecbid){

   vecbid[0].SetCapacidad(20.00);
     vecbid[0].SetCodigo(1);
     char  sbanana[30]="BANANA";
      vecbid[0].SetSabor(sbanana);
      vecbid[1].SetCapacidad(35.00);
      vecbid[1].SetCodigo(2);
       char  sanana[30]="ANANA";
      vecbid[1].SetSabor(sanana);
      vecbid[2].SetCapacidad(44.00);
      vecbid[2].SetCodigo(3);
      char ssandia[30]="SANDIA";
      vecbid[2].SetSabor(ssandia);
}

void mostrar(BIDONES *vec){

    for(int x=0;x<3;x++){

        cout << " SE VENDIERON " << vec[x].GetVendidos() << " DEL SABOR " << vec[x].GetSabor() << endl;
        cout << " Y QUEDAN DISPONIBLES " << vec[x].GetCapacidad() << " DE LITROS " << endl;

    }


}
int main()
{

        //creo los 3 tipos de bidones y de vasos.
    BIDONES vecbin[3];
    VASO vecvaso[3];
    crearbidones( vecbin );
    crearvasos(vecvaso);


    //programa--

    int codbat,tipova;
    cout << "INGRESE CODIGO DE BATIDO " << endl;
    cin >>codbat;

    while(codbat!=0){

        cout << "INGRESE QUE VASO QUIERE" << endl;
        cin >>tipova;

        if(vecbin[codbat-1].GetCapacidad()>=vecvaso[tipova-1].GetCapacidad()){ //valido que haya suficiente capacidad!
        vecbin[codbat-1].vender(vecvaso[tipova-1].GetCapacidad());
        vecbin[codbat-1].SetVendidos();
        } else{

          if(vecbin[codbat-1].GetCapacidad()<0.150){
             cout << "NO QUEDA DISPONIBLE DE SABOR " << vecbin[codbat-1].GetSabor() << endl;
             cout << "ESCOJA OTRO SABOR " << endl;
          } else{
          cout << "ESCOJA OTRO VASO" << endl; // aca habria que validar vaso x vaso y sabor x sabor en otra funcion..
          }
        }

if(vecbin[0].GetCapacidad()<0.150 && vecbin[1].GetCapacidad()<0.150 && vecbin[2].GetCapacidad()<0.150){

        cout << "NO QUEDAN BATIDOS DISPONIBLES. REGRESE MAÑANA " << endl;

    } else{
     cout << "INGRESE CODIGO DE BATIDO " << endl;
    cin >>codbat;
    }

    }

    mostrar(vecbin);





    return 0;
}
