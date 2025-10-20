#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main() {

    vector<int> numeros = {12, 7, 5, 18, 3, 21, 10, 14, 8, 6};

    //Cuenta números pares usando lambda
    int countPares = count_if(numeros.begin(), numeros.end(), [](int n) {
        return n % 2 == 0;
    });
    cout << "Cantidad de números pares: " << countPares << endl;

    //Calcula la suma total usando lambda y for_each
    int sumaTotal = 0;
    for_each(numeros.begin(), numeros.end(), [&sumaTotal](int n) {
        sumaTotal += n;
    });
    cout << "Suma total: " << sumaTotal << endl;

    //Muestra números mayores que 10
    int valor = 10;
    cout << "Números mayores que " << valor << ": ";
    for_each(numeros.begin(), numeros.end(), [valor](int n) {
        if (n > valor) cout << n << " ";
    });
    cout << endl;

    //Ordena el vector con lambda de mayor a menor
    sort(numeros.begin(), numeros.end(), [](int a, int b) {
        return a > b; 
    });

    cout << "Vector ordenado de mayor a menor: ";
    for (int n : numeros) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}