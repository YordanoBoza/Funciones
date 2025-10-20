#include <iostream>
using namespace std;

class Vector2D {
private:
    double x;
    double y;

public:

    Vector2D(double x_1, double y_1) {
        x = x_1;
        y = y_1;
    }

    Vector2D operator+(const Vector2D& otro) const {
        return Vector2D(x + otro.x, y + otro.y);
    }

    bool operator==(const Vector2D& otro) const {
        return (x == otro.x) && (y == otro.y);
    }

    void mostrar() const {
        cout << "(" << x << ", " << y << ")";
    }
};

int main() {
    Vector2D v1(3.5, 2.0);
    Vector2D v2(1.5, 4.0);

    cout << "Vector 1: ";
    v1.mostrar();
    cout << endl;

    cout << "Vector 2: ";
    v2.mostrar();
    cout << endl;

    Vector2D suma = v1 + v2;
    cout << "Suma de vectores: ";
    suma.mostrar();
    cout << endl;

    if (v1 == v2)
        cout << "Los vectores son iguales." << endl;
    else
        cout << "Los vectores son diferentes." << endl;

    return 0;
}
