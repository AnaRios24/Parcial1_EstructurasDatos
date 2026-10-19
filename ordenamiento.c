#include "ordenamiento.h"

void intercambiar(Contenedor *a, Contenedor *b) {
    Contenedor temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(Contenedor *arreglo, int n, int ascendente) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (ascendente) {
                if ((arreglo + j)->peso > (arreglo + j + 1)->peso) {
                    intercambiar(arreglo + j, arreglo + j + 1);
                }
            } else {
                if ((arreglo + j)->peso < (arreglo + j + 1)->peso) {
                    intercambiar(arreglo + j, arreglo + j + 1);
                }
            }
        }
    }
}

void selectionSort(Contenedor *arreglo, int n, int ascendente) {
    for (int i = 0; i < n - 1; i++) {
        int indiceExtremo = i;
        for (int j = i + 1; j < n; j++) {
            if (ascendente) {
                if ((arreglo + j)->peso < (arreglo + indiceExtremo)->peso) {
                    indiceExtremo = j;
                }
            } else {
                if ((arreglo + j)->peso > (arreglo + indiceExtremo)->peso) {
                    indiceExtremo = j;
                }
            }
        }
        if (indiceExtremo != i) {
            intercambiar(arreglo + i, arreglo + indiceExtremo);
        }
    }
}

void insertionSort(Contenedor *arreglo, int n, int ascendente) {
    for (int i = 1; i < n; i++) {
        Contenedor clave = *(arreglo + i);
        int j = i - 1;

        if (ascendente) {
            while (j >= 0 && (arreglo + j)->peso > clave.peso) {
                *(arreglo + j + 1) = *(arreglo + j);
                j--;
            }
        } else {
            while (j >= 0 && (arreglo + j)->peso < clave.peso) {
                *(arreglo + j + 1) = *(arreglo + j);
                j--;
            }
        }
        *(arreglo + j + 1) = clave;
    }
}
