#include <iostream>
using namespace std;

class Caja {
private:
    int peso;

public:
    Caja(int p = 0) : peso(p) {}

    friend void comparar(Caja c1, Caja c2);
    friend void comparar(Caja c1, Caja c2, Caja c3);
};

void comparar(Caja c1, Caja c2) {
    if (c1.peso > c2.peso)
        cout << "caja 1 es mas pesada "<< endl;
    else if (c2.peso > c1.peso)
        cout << "caja 2 es mas pesada " << endl;
    else
        cout << "peso igual "<< endl;
}

void comparar(Caja c1, Caja c2, Caja c3) {
    if (c1.peso >= c2.peso && c1.peso >= c3.peso)
        cout << "caja 1 es mas pesada "<< endl;
    else if (c2.peso >= c1.peso && c2.peso >= c3.peso)
        cout << "caja 2 es mas pesada "<< endl;
    
    else
        cout << "caja 3 es mas pesada "<< endl;
}

int main() {
    int p1, p2, p3;

    cout << "peso de la caja 1 -> ";
    cin >> p1;
    cout << "peso de la caja 2 -> ";
    cin >> p2;

    Caja c1(p1), c2(p2);
    comparar(c1, c2);

    cout << "\npeso de la caja 3 -> ";
    cin >> p3;
    Caja c3(p3);

    comparar(c1, c2, c3);

    return 0;
}
