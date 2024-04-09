#include <stdio.h>
#include <time.h>

#define N 20

int main() {
    // Genero la semilla
    srand(time(NULL));

    int i;
    double vt[N];
    for(i = 0; i<N ; i++)
    {
        vt[i]=0+rand()%100;
        printf("%.2f ", vt[i]);
    }

    return 0;
}