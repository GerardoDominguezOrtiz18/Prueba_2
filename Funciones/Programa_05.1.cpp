// PROGRAMA PARA OBTENER EL FACTORIAL DE UN NUMERO
#include<iostream>
#include<stdlib.h>

using namespace std;

int factorial (int a);

int main()
{
    int n1;
    cout << "ESCRIBE EL VALOR DEL NUMERO PARA SABER SU FACTORIAL : ";
    cin >> n1;
    int fact = factorial(n1);
    cout << " EL " << n1 << "!" << " ES : " << fact << std::endl;

    return 0;
}

int factorial (int a)
{
    int i;
    int resultado = 1;
        for (i = 1; i <= a; i++ ){
            resultado *= i;
        }
        return resultado;
}

