#include <iostream>
#include <string>
using namespace std;

class Empleado {
private:
    string nombre;
    int edad;
    double salario;

public:
   
    Empleado(string n, int e, double s) : nombre(n), edad(e), salario(s) {}

    void mostrarDatos() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Salario: " << salario << endl;

        cout << "No se puede modificar ningún atributo desde esta función const" << endl;
    }
};

int main() {
    Empleado emp1("Juan Perez", 28, 2500.50);
    Empleado emp2("Maria Gomez", 35, 3200.75);

    emp1.mostrarDatos();
    cout << " " << endl;
    emp2.mostrarDatos();

    return 0;
}