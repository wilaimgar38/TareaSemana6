#include <iostream>
#include <algorithm> // Para usar sort

using namespace std;

int main() {
    // Declaramos e inicializamos el arreglo desordenado
    int arreglo[] = {1, 5, 8, 2, 3, 9, 4};
    int clave;                 // Variable para almacenar el número que el usuario quiere buscar
    bool encontrado = false;   
    int indice = -1;           // Almacenará la posición del número si es encontrado

    // Calculamos el tamaño del arreglo dividiendo el peso total en bytes entre el peso del primer elemento
    int tamano = sizeof(arreglo)/sizeof(arreglo[0]);
    
    // La búsqueda binaria requiere obligatoriamente que el arreglo esté ordenado
    sort(arreglo, arreglo + tamano);

    // MOSTRAR ARREGLO ORDENADO 
    cout << "Array ordenado: ";
    for(int n : arreglo) cout << n << " ";
    cout << endl;

    cout << "Ingresa un número a buscar: ";
    cin >> clave;

    // CONFIGURACIÓN DE PUNTEROS PARA BÚSQUEDA BINARIA
    int izquierda = 0;          // Límite inferior del rango de búsqueda
    int derecha = tamano - 1;   // Límite superior del rango de búsqueda

    // El ciclo se ejecuta mientras el rango de búsqueda sea válido (izquierda no supere a derecha)
    while (izquierda <= derecha) {
        // Calculamos la posición media de forma segura para evitar desbordamiento de memoria
        int medio = izquierda + (derecha - izquierda) / 2; // Evitar desbordamiento

        // El elemento del medio es el que estamos buscando
        if (arreglo[medio] == clave) {
            encontrado = true;
            indice = medio; // Guardamos la posición actual
            break;          // Salimos del ciclo inmediatamente
        }
        // El elemento del medio es menor que la clave, buscamos en la mitad derecha
        else if (arreglo[medio] < clave) {
            izquierda = medio + 1; // Buscar en la mitad derecha
        }
        // El elemento del medio es mayor que la clave, buscamos en la mitad izquierda
        else {
            derecha = medio - 1; // Buscar en la mitad izquierda
        }
    }

    // REPORTE DE RESULTADOS
    if(encontrado) {
        cout << "Numero encontrado en la posicion: " << indice << endl;
    } else {
        cout << "Numero no encontrado" << endl;
    }

    return 0;
}
