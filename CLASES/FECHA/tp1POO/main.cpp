#include <iostream>
#include <string>
#include "Fecha.h"
using namespace std;

int main()
{

    Fecha cumpleanos(29,3,2019);

     cumpleanos.ToString();
    cout << cumpleanos.ToString()<<endl;

        cumpleanos.AgregarDias(-1666);
            cout << cumpleanos.ToString();


    return 0;
}
