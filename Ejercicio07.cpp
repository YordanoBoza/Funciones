#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

inline float calcularDescuento(float precio, float porcentaje) {
    return precio - (precio * porcentaje / 100.0f);
}

class Producto {
private:
    string nombre;
    float precio;
    int cantidad;

public:
    
    Producto(string n = "", float p = 0.0f, int c = 0)
        : nombre(n), precio(p), cantidad(c) {}

    void mostrar() const {
        cout << "Producto: " << nombre
             << " | Precio: " << precio
             << " | Cantidad: " << cantidad << endl;
    }

    float getPrecio() const { return precio; }

    int getCantidad() const { return cantidad; }

    Producto operator+(const Producto &otro) const {
        return Producto(nombre + " & " + otro.nombre,
                        precio + otro.precio,
                        cantidad + otro.cantidad);
    }

    friend bool compararPrecios(const Producto &p1, const Producto &p2);
};

bool compararPrecios(const Producto &p1, const Producto &p2) {
    return p1.precio < p2.precio;
}

int main() {
    
    Producto p1("Laptop", 3500.0f, 5);
    Producto p2("Mouse", 80.0f, 20);
    Producto p3("Monitor", 900.0f, 10);
    Producto p4("Teclado", 120.0f, 15);

    vector<Producto> productos = {p1, p2, p3, p4};

    cout << "Lista de productos" << endl;
    for (const auto &p : productos)
        p.mostrar();

    // uso de funcion inline
    cout << "\nDescuento" << endl;
    float precioDesc = calcularDescuento(p1.getPrecio(), 10);
    cout << "Precio con 10% de descuento en " << "Laptop: " << precioDesc << endl;

    // uso de funcion friend
    cout << "\nComparar precios" << endl;
    if (compararPrecios(p2, p3))
        cout << "El producto " << "Mouse" << " es más barato que " << "Monitor" << endl;
    else
        cout << "El producto " << "Monitor" << " es más barato que " << "Mouse" << endl;

    // uso de lambda para filtrar productos por precio
    cout << "\nFiltrar productos mayores a 500" << endl;
    float umbral = 500.0f;
    auto filtrar = [umbral](const Producto &p) { return p.getPrecio() > umbral; };

    for (const auto &p : productos)
        if (filtrar(p))
            p.mostrar();

    // uso de operador sobrecargado +
    cout << "\nCombinar Productos:" << endl;
    Producto combinado = p3 + p4;
    combinado.mostrar();

    return 0;
}
