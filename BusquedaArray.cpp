#include <iostream>
using namespace std;

int main() {
    // Declaramos e inicializamos un arreglo desordenado de enteros
    int arreglo[] = {1, 5, 8, 2, 3, 9, 4};
    int clave;                 // Variable para guardar el número que el usuario desea buscar
    bool encontrado = false;   // Bandera tipo booleana para registrar si se halló el número

    //ENTRADA DE DATOS
    cout << "Ingresa un número a buscar: ";
    cin >> clave;

    // Calculamos el número de elementos del arreglo dividiendo su tamaño total en bytes
    // entre el tamaño en bytes que ocupa su primer elemento (un entero)
    int tamano = sizeof(arreglo)/sizeof(arreglo[0]);

    // ALGORITMO DE BÚSQUEDA SECUENCIAL
    // Recorremos el arreglo posición por posición, desde el índice 0 hasta tamano - 1
    for(int i = 0; i < tamano; i++) {
        // Comparamos si el elemento en la posición actual 'i' es igual a la clave buscada
        if(arreglo[i] == clave) {
            // Si coincide, imprimimos la posición inmediatamente
            cout << "Número encontrado en la posición: " << i << endl;
            encontrado = true; // Cambiamos el estado de la bandera a verdadero
            break;             // Rompemos el ciclo 'for' para no seguir buscando innecesariamente
        }
    }

    // MANEJO DE CASO NO ENCONTRADO
    // Si al terminar el ciclo la bandera sigue siendo falsa (!encontrado significa 'si no fue encontrado')
    if(!encontrado) {
        cout << "Número no encontrado en el array" << endl;
    }

    // Finalizamos la ejecución del programa de forma correcta
    return 0;
}
