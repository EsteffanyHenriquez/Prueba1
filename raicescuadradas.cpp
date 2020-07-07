#include <iostream>
#include <locale.h>
#include <string>
//libreria matematicas para todas funciones
#include <math.h>
using namespace std;
int main(){
    setlocale(LC_ALL, "Spanish");
    int numero, raiz = 0, potencia = 0;
    cout << "ingrese el numero:";
    cin >> numero;
    raiz =sqrt(numero);
    potencia = pow(numero,2);
    cout << "la raiz de cuadrada " << numero << " es:" << raiz << endl;
    cout << "La potencia de " << numero << " es: " << potencia << endl;
    return 0;


}
 