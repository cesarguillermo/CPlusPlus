#include <iostream>
#include <iomanip>
using namespace std;

/*
 * Programa que pregunta  al usuario qué  
 * fecha desea escribir y la escribe a continuación, de forma que represente una fecha válida con
 * formato aaaammdd
 */

int main () {
    int fecha;
    cout << "Escriba una fecha con formato de 8 cifras [aaaammdd]:" << flush;
    cin >> fecha;
    int anno = fecha/10000;
    int mes = (fecha /100) % 100;
    int dia = fecha % 100;
    cout << "La fecha escrita es: " << setfill ('0') << setw (2) << dia << "/" << setw(2) << mes << "/" << anno << endl;	
}