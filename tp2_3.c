#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// codigo a completar
#define N 5
#define M 7

int main()
{
    int i, j;
    int mt[N][M];

    int rand();
    srand(time(NULL));
    int *puntero;
    puntero = &mt[0][0];
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            mt[i][j] = 1 + rand() % 100;
            //*(mt+formula) = 1 + rand() % 100; se puede escribir de otra manera como en la teoria
            printf("| %2d |", *puntero);
            puntero++;
        }
        printf("\n");
    }
}