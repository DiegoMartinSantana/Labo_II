#include <iostream>
#include <string>
using namespace std;

 bool validaryvender(float *vbidones,int *vventas,int codbat ,float *vvaso,int tipvaso){

          switch(codbat){
          case 1 :
              if(vbidones[0]>=0.150){
                    vbidones[codbat-1]-=vvaso[tipvaso-1];
                    vventas[codbat-1]++;
                    return true;
              } else{return false;}
                    break;
        case 2 :
              if(vbidones[1]>=0.200){
                    vbidones[codbat-1]-=vvaso[tipvaso-1];
                    vventas[codbat-1]++;
                    return true;
               }else{return false;}
                    break;

        case 3 :
              if(vbidones[2]>=0.300){
                    vbidones[codbat-1]-=vvaso[tipvaso-1];
                    vventas[codbat-1]++;
                    return true;
              } else{return false;}
                    break;

          }

 }

void mostrar(float *vbidones,int  *vventas){
string vsabores[3]{" DE BANANA " ," DE ANANA "," DE SANDIA "};

   for( int x=0;x<3;x++){

    cout << vbidones[x] << vsabores[x]<<endl;
    cout << "y se vendieron .. " << vventas[x] << "batidos " << endl;
   }
}
int main()
{

    //3 BATIDOS*
    //20 L BANANA - 35 L ANANA - 44  L SANDIA <--- BIDONES*
    //VASO 1 150 ML - 2-200 ML - 3-300ML*
    // X VENTA INGRESA COD BAT Y TIP VASO *
    // X VENTA SE DESCUENTA DEL TOTAL DEL BIDON *
    // SI NO HAY ML NO HAY VENTA.*
    //FINALIZA CON COD BAT= 0 . AL FINAL MOSTRAR LO QUE QUEOD EN RECIPIENTES*
    // Y CUANTOS BAT VENDIO DE CADA SABOR*



    int codbat,tipvaso;
    int vventas[3]{};
    float vbidones[3]{20.00,35.00,44.00};
    float vvaso[3]{0.150,0.200,0.300};

        cout << "Ingrese codigo de batido" << endl;
        cin >>codbat;

    while(codbat!=0){

     cout << "Ingrese tipo de vaso" << endl;
        cin >>tipvaso;

        if(!validaryvender(vbidones,vventas,codbat,vvaso,tipvaso)){
           cout << "no tenemos mas de ese sabor, escoja otro porfavor o regrese mañana." << endl;
        }


         cout << "Ingrese codigo de batido" << endl;
        cin >>codbat;

    }

    mostrar(vbidones,vventas);

    return 0;
}
