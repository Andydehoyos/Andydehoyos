#include <iostream>
#include <windows.h>
#include <locale.h>

using namespace std;


void ordenamiento_burbuja(int vector[], int n) {
    int i = 0, j = 0, aux = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n ; j++) { 
            if (vector[i] < vector[j]) {
                aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
            }
        }
    }
}

// Función para mostrar el vector
void mostrar_vector(int vector[], int n) {
    cout << "+-------------------------------------------------+" << endl;
    cout << "\t El Vector Ingresado y Ordenado es " << endl;
    cout << "+-------------------------------------------------+" << endl;
    for (int i = 0; i < n; i++) {
        cout << "\t" << vector[i];
    }
    cout << endl;
    cout << "+-------------------------------------------------+" << endl;
}

int main() {
    setlocale(LC_CTYPE, "Spanish");

    int n = 0;
    cout << "+-------------------------------------------------+" << endl;
    cout << "\t Ingrese el tamaño del vector: ";
    cin >> n;
    cout << "+-------------------------------------------------+" << endl;

    int vector[n]; 

    cout << "\t Ingrese los Elementos del Vector " << endl;
    cout << "+-------------------------------------------------+" << endl;
    for (int i = 0; i < n; i++) {
        cout << "[" << i << "] = \t";
        cin >> vector[i];
        cout << endl;
    }

    // Llamar a las funciones con los parámetros
    ordenamiento_burbuja(vector, n);
    mostrar_vector(vector, n);

    return 0;
}
