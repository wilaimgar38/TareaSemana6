#include <iostream>
using namespace std;

// Recibe como parámetros el arreglo original y su tamaño 'n'
void bubbleSort(int arr[], int n) {
    // Ciclo externo que controla cuántas pasadas completas se le darán al arreglo (n - 1 veces)
    for (int i = 0; i < n - 1; i++) {
        // Ciclo interno para comparar los elementos adyacentes.
        // Restamos 'i' porque en cada pasada el número más grande ya "flota" hasta su posición correcta al final, 
        // así que no necesitamos volver a revisarlo.
        for (int j = 0; j < n - i - 1; j++) {
            // Si el elemento actual es mayor que el elemento de la derecha...
            if (arr[j] > arr[j + 1]) {
                // ...los intercambiamos de lugar usando la función estándar 'swap' de C++
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

//FUNCIÓN PARA IMPRIMIR EL ARREGLO
// Recibe el arreglo y su tamaño 'n' para recorrerlo secuencialmente
void printArray(int arr[], int n) {
    // Ciclo que pasa por cada índice imprimiendo su valor seguido de un espacio
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    // Al finalizar la impresión de todos los elementos, agrega un salto de línea
    cout << endl;
}

int main() {
    // Declaramos e inicializamos el arreglo desordenado
    int arr[] = {5, 2, 9, 1, 5, 6};
    
    // Calculamos dinámicamente la cantidad de elementos ('n') dividiendo el peso en bytes
    // de todo el arreglo entre el tamaño en bytes de la primera posición
    int n = sizeof(arr) / sizeof(arr[0]);

    // Llamamos a la función para ordenar el arreglo utilizando el método de burbuja
    bubbleSort(arr, n);
    
    // Llamamos a la función para mostrar en consola el arreglo ya ordenado de forma ascendente
    printArray(arr, n);

    // Finalizamos la ejecución del programa con éxito
    return 0;
}
