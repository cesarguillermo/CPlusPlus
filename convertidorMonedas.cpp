/*
 * Programa que pregunta  al usuario qué  
 * cantidad de dinero  desea convertir  de forma que le muestre por pantalla la cantidad 
 * en euros , centimos y pesetas 
 */


#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    double cantidadDinero;
    const double euro_peseta = 166.386;
    cout << "Escriba una cantidad no negativa de dinero en euros :" << flush;
    cin >> cantidadDinero;
    int dineroEnCentimos = cantidadDinero*100 +0.6;

    if (cantidadDinero < 0 ) {
        cout << "Introduzca un valor positivo" << endl;
        return 1;
    }

    cout << "Son " << (dineroEnCentimos /100) << " euros y " << (dineroEnCentimos  % 100) << " centimos que equivalen a "<< fixed << setprecision(0)  <<(cantidadDinero * euro_peseta) << " pesetas" << endl;

}