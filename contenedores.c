#include <stdio.h>
#include <string.h>
#include "contenedores.h"

void registrarContenedor(Contenedor *c) {
    printf("Codigo unico: ");
    scanf("%19s", c->codigo);

    printf("Peso (toneladas): ");
    scanf("%f", &(c->peso));

    printf("Tipo de mercancia: ");
    scanf("%49s", c->tipoMercancia);

    printf("Bahia de asignacion: ");
    scanf("%19s", c->bahia);
}

void imprimirContenedor(const Contenedor *c) {
    printf("| %-12s | %10.2f t | %-18s | %-10s |\n",
           c->codigo, c->peso, c->tipoMercancia, c->bahia);
}

void mostrarPatio(const Contenedor *arreglo, int cantidad) {
    if (cantidad <= 0) {
        printf("\nEl patio no tiene contenedores registrados.\n");
        return;
    }

    printf("\n+--------------+---------------+--------------------+------------+\n");
    printf("| Codigo       | Peso (Ton)    | Tipo Mercancia     | Bahia      |\n");
    printf("+--------------+---------------+--------------------+------------+\n");
    for (int i = 0; i < cantidad; i++) {
        imprimirContenedor(arreglo + i);
    }
    printf("+--------------+---------------+--------------------+------------+\n");
}
