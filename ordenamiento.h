#ifndef ORDENAMIENTO_H
#define ORDENAMIENTO_H

#include "contenedores.h"

void intercambiar(Contenedor *a, Contenedor *b);
void bubbleSort(Contenedor *arreglo, int n, int ascendente);
void selectionSort(Contenedor *arreglo, int n, int ascendente);
void insertionSort(Contenedor *arreglo, int n, int ascendente);

#endif
