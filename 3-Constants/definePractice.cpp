#include <iostream>

using namespace std;

#define SI if
#define PARA for
#define ENTERO int
#define IMPRIMIR cout
#define LEER cin

int main()
{
    ENTERO cont;
    IMPRIMIR << "Ingrese Cantidad de numeros a ver : " << endl;
    LEER >> cont;
    PARA(ENTERO n = 1; n <= cont; n++)
    {
        SI(n % 2 ==0 )
        {
            IMPRIMIR << n << endl;
        } 
    }
    return 0;
}