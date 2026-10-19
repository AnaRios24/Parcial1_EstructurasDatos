#include <stdio.h>
#include <stdlib.h>
#include "contenedores.h"
#include "ordenamiento.h"

#define CAPACIDAD_MAX 100

int main() {
    Contenedor patio[CAPACIDAD_MAX];
    int totalContenedores = 0;
    int opcion;

    do {
        printf("\n=========================================\n");
        printf("  CONTROL PORTUARIO - PUERTO BUENAVENTURA\n");
        printf("=========================================\n");
        printf("1. Registrar contenedor\n");
        printf("2. Mostrar estado actual del patio\n");
        printf("3. Ordenar patio por peso (Bubble Sort)\n");
        printf("4. Ordenar patio por peso (Selection Sort)\n");
        printf("5. Ordenar patio por peso (Insertion Sort)\n");
        printf("0. Salir\n");
        printf("Seleccione una opcion: ");
        if (scanf("%d", &opcion) != 1) {
            while (getchar() != '\n');
            continue;
        }

        if (opcion >= 3 && opcion <= 5) {
            if (totalContenedores == 0) {
                printf("\nNo hay contenedores registrados para ordenar.\n");
                continue;
            }

            int criterio;
            printf("\nSeleccione el sentido:\n1. Menor a Mayor (Ascendente)\n2. Mayor a Menor (Descendente)\nOpcion: ");
            scanf("%d", &criterio);
            int ascendente = (criterio == 1);

            printf("\n--- Patio ANTES del ordenamiento ---");
            mostrarPatio(patio, totalContenedores);

            switch (opcion) {
                case 3:
                    bubbleSort(patio, totalContenedores, ascendente);
                    printf("\n>> Ordenado mediante BUBBLE SORT <<\n");
                    break;
                case 4:
                    selectionSort(patio, totalContenedores, ascendente);
                    printf("\n>> Ordenado mediante SELECTION SORT <<\n");
                    break;
                case 5:
                    insertionSort(patio, totalContenedores, ascendente);
                    printf("\n>> Ordenado mediante INSERTION SORT <<\n");
                    break;
            }

            printf("\n--- Patio DESPUES del ordenamiento ---");
            mostrarPatio(patio, totalContenedores);

        } else if (opcion == 1) {
            if (totalContenedores < CAPACIDAD_MAX) {
                printf("\n--- Registro de Contenedor (%d/%d) ---\n", totalContenedores + 1, CAPACIDAD_MAX);
                registrarContenedor(&patio[totalContenedores]);
                totalContenedores++;
                printf("Contenedor registrado correctamente.\n");
            } else {
                printf("\nEl patio se encuentra al maximo de capacidad.\n");
            }
        } else if (opcion == 2) {
            mostrarPatio(patio, totalContenedores);
        } else if (opcion == 0) {
            printf("\nFinalizando sistema portuario...\n");
        } else {
            printf("\nOpcion invalida.\n");
        }

    } while (opcion != 0);

    return 0;
}
