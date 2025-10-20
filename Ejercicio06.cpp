#include <iostream>
using namespace std;

class Fecha {
private:
    int dia,meses, anio;

public:
    Fecha(int dia, int mes, int anio) {
        if (dia < 1 || dia > 31) dia = 1;
        if (mes < 1 || mes > 12) mes = 1;

        this->dia = dia;
        this->meses = mes;
        this->anio = anio;
    }

    friend ostream& operator<<(ostream& salida, const Fecha& f);
};

ostream& operator<<(ostream& salida, const Fecha& f) {
    if (f.dia < 10) salida << "0";
    salida << f.dia << "/";

    if (f.meses < 10) salida << "0";
    salida << f.meses << "/" << f.anio;

    return salida;
}

int main() {
    Fecha f1(12, 2, 2025);
    Fecha f3(18, 05, 2022);
    Fecha f2(69, 33, 2020);

    cout << "Fecha 1 -> " << f1 << endl;
    cout << "Fecha 2 -> " << f2 << endl;
    cout << "Fecha 3 -> " << f3 << endl;

    return 0;
}
