#ifndef HORARIO_H
#define HORARIO_H
#include <string>

class Horario
{
    public:
        Horario();
        Horario (int seg,int minu,int hora);


        int Getseg();
        void Setseg(int seg);
        int Getminuto();
        void Setminuto(int minu);
        int Gethora();
        void Sethora(int hora);
        void Cargar(int seg, int minuto,int hora);
        std::string ToString();

  //  protected:

    private:
        int _seg;
        int _minuto;
        int _hora;
};

#endif // HORARIO_H
