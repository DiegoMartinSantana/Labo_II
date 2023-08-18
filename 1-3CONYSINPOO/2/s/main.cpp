#include <iostream>
#include <cstring>
using namespace std;
/*
Hacer una función que reciba un vector de enteros de N elementos llamado A y
un vector de enteros de M elementos llamado B. El programa debe generar un vector de enteros llamado C (de manera dinámica)
 y almacenar secuencialmente en él los elementos que se encuentran en el vector A pero no en el vector B y viceversa.
  Luego, mostrar el vector C si es que contiene datos.


*/
void mostrarvec(int  *vec, int tot){

 for(int x=0;x<tot;x++){

   cout <<  "- "  << vec[x] ;
 }

}
void unirvec (int *a, int n ,int *b,int m ){


    int *c = new int [n+m]{};

    int manipularvec=0;
    // en a pero no en b
    for(int x =0;x<n;x++){

            bool d=true;

            for(int y=0;y<m;y++){

                if(a[x]==b[y]){
                    d=false;
                }
            }

     if(d){
        c[manipularvec]=a[x];
        manipularvec++;
     }

    }
    // en b pero no en a
            for(int x =0;x<m;x++){

            bool d=true;

            for(int y=0;y<n;y++){

                if(b[x]==a[y]){
                    d=false;
                }
            }

     if(d){
        c[manipularvec]=b[x];
        manipularvec++;
     }

    }

mostrarvec(c,manipularvec);
}

using namespace std;

int main()


{
     int  n = 10,m=5;
        int *a = new int [n]{};
                int *b = new int [m]{};
                    cout << "ingrse nros para vec a " << endl;
                    for(int x=0;x<n;x++){

                    cin >> a[x];
                    }
                    cout << "ingrse nros para vec b " << endl;
                    for(int x=0;x<m;x++){

                    cin >> b[x];
                    }



        unirvec(a,n,b,m);

    return 0;
}
