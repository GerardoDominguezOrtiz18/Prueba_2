//REALIZAR LA SUMA DE DOS NUMEROS ENTEROS
#include<iostream>

using namespace std;

void suma(int a, int b)
{
    int c = a + b;
    cout << "EL RESULTADO DE SUMAR : " << a << " + " << b << " = " << c << std::endl;
}


int main()
{
   int a, b;
   cout << "DAME EL VALOR DEL PRIMER NUMERO A SUMAR : " << std::endl;
   cin >> a;
   cout << "DAME EL VALOR DEL SEGUNDO NUMERO A SUMAR : " << std::endl;
   cin >> b;
   suma(a,b);
   return 0;
}

