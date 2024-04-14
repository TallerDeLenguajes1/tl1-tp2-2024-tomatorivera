#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Variables
const int N = 5;

// Estructuras
typedef struct compu {
    int velocidad;
    int anio;
    int cantidad;
    char *tipoCpu;
} Compu;

// Funciones
void mostrar(Compu lista[]);
void pcVieja(Compu lista[]);
void pcRapida(Compu lista[]);

int main() {
    srand(time(NULL));

    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

    // Cargo datos aleatorios para las 5 computadoras
    Compu computadoras[N];
    for (int i=0 ; i<N ; i++)
    {
        computadoras[i].velocidad = 1 + rand() % 3;
        computadoras[i].anio = 2015 + rand() % (2023 - 2015 + 1);
        computadoras[i].cantidad = 1 + rand() % 8;
        computadoras[i].tipoCpu = tipos[rand() % 6];
    }

    mostrar(computadoras);
    printf("\n");
    pcVieja(computadoras);
    printf("\n");
    pcRapida(computadoras);

    return 0;
}

/**
 * Función para mostrar la lista de computadoras que cree en main
 */
void mostrar(Compu lista[]) {
    for (int i=0 ; i<N ; i++)
    {
        printf("Velocidad: %d - Anio: %d - Cantidad: %d - Tipo CPU: %s \n",
            lista[i].velocidad,
            lista[i].anio,
            lista[i].cantidad,
            lista[i].tipoCpu
        );
    }
}

/**
 * Función para mostrar todas las pc's con el menor año de fabricación
 */
void pcVieja(Compu lista[]) {
    // Detecto el año menor registrado entre la lista de 5 computadoras
    int anioMenor = 3000;
    for (int i=0 ; i<N ; i++)
    {
        if (lista[i].anio < anioMenor) anioMenor = lista[i].anio;
    }

    // Muestro las pcs con el año de fabricación más viejo
    printf("Pc's mas viejas:\n");
    for (int i=0 ; i<N ; i++)
    {
        if (lista[i].anio == anioMenor)
        {
            printf("\tVelocidad: %d - Anio: %d - Cantidad: %d - Tipo CPU: %s \n",
                lista[i].velocidad,
                lista[i].anio,
                lista[i].cantidad,
                lista[i].tipoCpu
            );
        }
    }
}

/**
 * Función para mostrar todas las pc's con la mayor velocidad de procesamiento 
 */
void pcRapida(Compu lista[]) {
    // Detecto la velocidad máxima registrada en la lista de 5 computadoras
    int velocidadMax = 0;
    for (int i=0 ; i<N ; i++)
    {
        if (lista[i].velocidad > velocidadMax) velocidadMax = lista[i].velocidad;
    }

    // Muestro las pcs con la mayor velocidad de procesamiento
    printf("Pc's mas rapidas:\n");
    for (int i=0 ; i<N ; i++)
    {
        if (lista[i].velocidad == velocidadMax)
        {
            printf("\tVelocidad: %d - Anio: %d - Cantidad: %d - Tipo CPU: %s \n",
                lista[i].velocidad,
                lista[i].anio,
                lista[i].cantidad,
                lista[i].tipoCpu
            );
        }
    }
}