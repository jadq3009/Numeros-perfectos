#include<iostream>

using namespace std;

int main() {
    int limit = 100000;  // Límite hasta donde queremos buscar números perfectos

    for (int j = 1; j <= limit; j++) {
        int sum = 0;
        
        // Encontrar divisores propios de j
        for (int k = 1; k < j; k++) {
            if (j % k == 0) {
                sum += k;  // Sumar los divisores
            }
        }

        // Verificar si la suma de divisores es igual a j
        if (sum == j) {
            cout << j << " es un número perfecto" << endl;
        }
    }

    return 0;
}

