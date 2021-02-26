// INDICADOR DEL NUMERO MAYOR
#include<iostream>
#include<stdlib.h>

using namespace std;

void mayor (int a, int b);

int main()
{
    int numero1, numero2;

    cout << " ESCRIBE EL PRIMER NUMERO A COMPARAR : " << std::endl;
    cin >> numero1;
    cout << " ESCRIBE EL SEGUNDO NUMERO A COMPARAR : " << std::endl;
    cin >> numero2;
    mayor( numero1, numero2);
    return 0;
}
void mayor (int a, int b)
{
    if ( a > b){
        cout << a << " ES MAYOR " << std::endl;

    }
    else if ( a < b ){
        cout << b << " ES MAYOR " << std::endl;
    }
    else
        cout << " HAY UN ERROR " << std::endl;
}
