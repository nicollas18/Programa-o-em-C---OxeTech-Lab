#include <stdio.h>

int elementoMaisRepetido(int arr[], int n) {
    int maxCount = 0; // Armazena o maior número de repetições
    int elementoRepetido; // Armazena o elemento mais repetido

    // Percorrer o array para cada elemento
    for (int i = 0; i < n; i++) {
        int count = 0;

        // Comparar o elemento arr[i] com todos os outros elementos
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // Se o elemento arr[i] se repetiu mais vezes que maxCount
        if (count > maxCount) {
            maxCount = count;
            elementoRepetido = arr[i];
        }
    }

    return elementoRepetido;
}

int main() {
    int arr[] = {1, 3, 2, 3, 4, 5, 3, 6, 7, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int resultado = elementoMaisRepetido(arr, n);
    printf("O elemento que mais se repete é: %d\n", resultado);

    return 0;
}
