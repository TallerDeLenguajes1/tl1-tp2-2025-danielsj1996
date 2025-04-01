#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// codigo a completar
#define N 20

int main()
{

    int i;
    int rand();
    srand(time(NULL));
    double vt[N];
    double *p;
    p=&vt[0];
    for (i = 0; i < N; i++)
    {
        *p = 1 + rand() % 100;
        printf("%.2f - ",*p++);
    }
    return 0;
}