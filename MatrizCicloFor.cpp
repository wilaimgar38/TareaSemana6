using namespace std;
int main() {
    // Definimos el tamaño de la matriz
    int filas = 3, columnas = 4;

    // Declaramos e inicializamos una matriz bidimensional
    // Se crea con el número de filas indicado, y cada fila contiene un vector con el tamaño de las columnas
    vector<vector<int>> matriz(filas, vector<int>(columnas));

    // LLENADO DE LA MATRIZ
    // Bucle externo para recorrer cada fila (desde 0 hasta filas - 1)
    for (int i = 0; i < filas; i++) {
        // Bucle interno para recorrer cada columna dentro de la fila actual (desde 0 hasta columnas - 1)
        for (int j = 0; j < columnas; j++) {
            // Asignamos un valor a la posición actual basado en sus índices (i + 1) * (j + 1)
            matriz[i][j] = (i + 1) * (j + 1);
        }
    }

    // IMPRESIÓN DE LA MATRIZ
    // Usamos un ciclo for basado en rangos para recorrer cada fila de la matriz por referencia constante
    for (const auto& fila : matriz) {
        // Recorremos cada elemento (valor entero) que se encuentra dentro de la fila actual
        for (int valor : fila) {
            // Imprimimos el valor seguido de un tabulador para dar formato de tabla
            cout << valor << "\t";
        }
        // Al terminar de imprimir una fila completa, hacemos un salto de línea
        cout << endl;
    }

    // Finalizamos la función principal retornando 0
    return 0;
}//Matriz con el ciclo for:
