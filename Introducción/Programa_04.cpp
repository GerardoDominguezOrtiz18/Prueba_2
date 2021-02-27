// OTRA FORMA DE HACER EL PROGRAMA ANTERIOR
#include<iostream>
#include<stdlib.h>

using namespace std;

int mayor (int a, int b);

int main()
{
    int numero1, numero2, numero3;
        cout << " ESCRIBE EL VALOR DEL PRIMER VALOR A COMPARAR : " << std::endl;
        cin >> numero1;
        cout << " ESCRIBE EL VALOR DEL SEGUNDO VALOR A COMPARAR : " << std::endl;
        cin >> numero2;
        cout << " ESCRIBE EL VALOR DEL TERCER VALOR A COMPARAR : " << std::endl;
        cin >> numero3;
        int Mayor = mayor(mayor(numero1,numero2),numero3);
        cout << "EL NUMERO MAYOR ES : " << Mayor << std::endl;
        return 0;
}

int mayor (int a, int b)
{
    int c;
    if (a>b){ return a;}
    else { return b;}
}
