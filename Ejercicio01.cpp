#include <iostream>
using namespace std;

const double pi = 3.14;

inline double areaCuadrado(double lado) {
    return lado * lado;
}

inline double areaRectangulo(double base, double altura) {
    return base * altura;
}

inline double areaCirculo(double radio) {
    return pi * radio * radio;
}

int main() {
    double lado;
    double base, altura;
    double radio;
    int n;

    cout << "Elija una figura para hallar su area" << endl;
    cout << "1. Cuadrado\n";
    cout << "2. Rectangulo\n";
    cout << "3. Circulo\n";
    cout << "Opcion: ";
    cin >> n;

    switch (n) {
        case 1:
            cout << "Ingrese lado:";
            cin >> lado;
            cout << "El area del cuadrado es: " << areaCuadrado(lado) << endl;
            break;

        case 2:
            cout << "Ingrese base:";
            cin >> base;
            cout << "Ingrese altura:";
            cin >> altura;
            cout << "El area del rectangulo es: " << areaRectangulo(base, altura) << endl;
            break;

        case 3:
            cout << "Ingrese radio:";
            cin >> radio;
            cout << "El area del circulo es: " << areaCirculo(radio) << endl;
            break;

        default:
            cout << "Opcion no valida." << endl;
            break;
    }

    return 0;
}
