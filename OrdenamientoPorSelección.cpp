#include <iostream>
using namespace std;


// Recibe como parámetros el arreglo original y su tamaño 'n'
void selectionSort(int arr[], int n) {
    // Ciclo externo que se mueve por la posición donde colocaremos el número menor encontrado (hasta n - 1)
    for (int i = 0; i < n - 1; i++) {
        // Suponemos inicialmente que el elemento más pequeño está en la posición actual 'i'
        int minIdx = i;

        // Ciclo interno que recorre el resto del arreglo (desde i + 1 hasta el final) buscando un valor menor
        for (int j = i + 1; j < n; j++) {
            // Si encontramos un elemento en 'j' que sea menor al que teníamos guardado en 'minIdx'...
            if (arr[j] < arr[minIdx]) {
                // Actualizamos el índice del elemento más pequeño con la posición 'j'
                minIdx = j;
            }
        }

        // Después de revisar todo el resto del arreglo, intercambiamos el elemento de la posición
        // inicial 'i' con el elemento más pequeño que encontramos en 'minIdx'
        swap(arr[i], arr[minIdx]);
    }
}

int main() {
    // Declaramos e inicializamos el arreglo con valores desordenados
    int arr[] = {64, 25, 12, 22, 11};
    
    // Calculamos de forma dinámica el tamaño total del arreglo ('n')
    int n = sizeof(arr) / sizeof(arr[0]);

    // Ejecutamos la función para ordenar el arreglo mediante el método de selección
    selectionSort(arr, n);

    // Ciclo de una sola línea para imprimir en consola cada elemento del arreglo ya ordenado de menor a mayor
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    
    return 0;
}
