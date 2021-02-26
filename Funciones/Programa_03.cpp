// COMPARACION ENTRE 3 NUMEROS Y SABER CUAL ES EL MAYOR
#include<iostream>
#include<stdlib.h>

using namespace std;

int mayor (int a, int b);

int main()
{
    int numero1, numero2, numero3;
    cout << " ESCRIBE EL PRIMER VALOR A COMPARAR : " << std::endl;
    cin >> numero1;
    cout << " ESCRIBE EL SEGUNDO VALOR A COMPARAR : " << std::endl;
    cin >> numero2;
    cout << " ESCRIBE EL TERCER VALOR A COMPARAR : " << std::endl;
    cin >> numero3;
    int mayor1 = mayor(numero1,numero2);
    int mayor2 = mayor(mayor1,numero3);
    cout << " EL NUMERO MAYOR ES : " << mayor2 << std::endl;
    return 0;
}

int mayor (int a, int b)
{
    int c;
    if (a>b){ c = a;}
    else {c = b;}
    return c;
}
