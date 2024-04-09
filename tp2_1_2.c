#include <stdio.h>
#include <time.h>

#define N 20

int main() {
    // Genero la semilla
    srand(time(NULL));

    int i;
    double vt[N];
    double *puntero = vt;
    for(i = 0; i<N ; i++)
    {
        puntero[i]=0+rand()%100;
        printf("%.2f ", puntero[i]);
    }

    return 0;
}