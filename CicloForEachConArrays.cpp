#include <iostream>
#include <vector>

using namespace std;
int main() {
    // Declaramos e inicializamos un vector de enteros con 5 elementos
    vector<int> numeros = {1, 2, 3, 4, 5};

    //PRIMERA IMPRESIÓN
    cout << "Elementos del vector: ";
    // Recorremos el vector por referencia constante (const auto&). 
    // Al usar 'const' evitamos modificar los datos por accidente, y con '&' evitamos hacer copias innecesarias en memoria.
    for (const auto& num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    //MODIFICACIÓN DE ELEMENTOS
    // Recorremos el vector por referencia (auto&). 
    // Al usar el símbolo '&', 'num' se convierte en un alias directo de cada elemento original en memoria, 
    // lo que nos permite alterar su valor real dentro del vector.
    for (auto& num : numeros) {
        num += 1; // Sumamos 1 a cada elemento original
    }

    //SEGUNDA IMPRESIÓN
    cout << "Elementos modificados: ";
    // Volvemos a recorrer por referencia constante para mostrar los nuevos valores (ahora del 2 al 6)
    for (const auto& num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
