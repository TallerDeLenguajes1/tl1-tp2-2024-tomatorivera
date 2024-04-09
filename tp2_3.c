#include <stdio.h>
#include <time.h>

#define N 5
#define M 7

int main()
{
    // Genero la semilla
    srand(time(NULL));

    int i, j;
    int mt[N][M];
    int *ptr = mt;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M ; j++)
        {
            *(ptr + j) = 1+rand()%100;
            printf("%d ", *(ptr + j));
        }
        ptr++;
        printf("\n");
    }

    return 0;
}