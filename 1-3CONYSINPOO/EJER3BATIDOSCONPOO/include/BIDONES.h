#include <cstring>

class BIDONES
{
    public:

        //constructor


        //metodos
        void vender (float milim);


        //set y get props
        void SetCodigo(int cod);
        void SetCapacidad(float litros);
        void SetSabor(char *sabor);
        void SetVendidos();
        int GetVendidos();
        char *GetSabor ();
        float GetCapacidad();




    private:
        int _vendidos=0;
         char _sabor[30];
          float _capacidad;
          int _codigo;

};


