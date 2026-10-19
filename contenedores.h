#ifndef CONTENEDORES_H
#define CONTENEDORES_H

#define MAX_CODIGO 20
#define MAX_TIPO 50
#define MAX_BAHIA 20

typedef struct {
    char codigo[MAX_CODIGO];
    float peso;
    char tipoMercancia[MAX_TIPO];
    char bahia[MAX_BAHIA];
} Contenedor;

void registrarContenedor(Contenedor *c);
void imprimirContenedor(const Contenedor *c);
void mostrarPatio(const Contenedor *arreglo, int cantidad);

#endif
