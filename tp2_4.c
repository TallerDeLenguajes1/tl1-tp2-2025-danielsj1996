#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct compu
{
    int velocidad;        // Velocidad de procesamiento en GHz (valor entre 1 y 3)
    int anio;             // Año de fabricación (valor entre 2015 y 2024)
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
    char *tipo_cpu;       // Tipo de procesador (apuntador a cadena de caracteres)
} compu;

struct compu CargarDatos();

void mostrarLista(compu listaCompus);
void computadoraVieja(compu compu[5]);
void computadoraRapida(compu compu[5]);

int main()
{

    // Definicion del arreglo de estructuras para 5 PC
    compu pcs[5];
    srand(time(NULL));
    // carga de datos de las 5 pcs
    for (int i = 0; i < 5; i++)
    {
        pcs[i] = CargarDatos();
    }

    // muestro las pc generadas random
    printf("Datos de las 5 PC: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("\t\t\t ----------------- Computadora Numero %d ----------------- \n", i + 1);
        mostrarLista(pcs[i]);
    }
    // Muestro la pc mas vieja
    printf("\t\t\t ----------------- Computadora Mas vieja ----------------- \n");
    computadoraVieja(pcs);
    printf("\t\t\t ----------------- Computadora Con mas Velocidad ----------------- \n");
    computadoraRapida(pcs);

    return 0;
}

compu CargarDatos()
{
    compu aux;
    char *tipos[6] = {"intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    int rand();
    // Genero los datos random
    aux.velocidad = rand() % 4;
    aux.anio = rand() % 8 + 2015;
    aux.tipo_cpu = tipos[rand() % 6];
    aux.cantidad_nucleos = rand() % 8 + 1;
    return aux;
}

void mostrarLista(compu pcs)
{
    // Muestro los datos de las 5 PC
    printf("\t\t\t\t Tipo de Procesador: %s\n", pcs.tipo_cpu);
    printf("\t\t\t\t Cantidad de nucleos (entre 1 y 8): %d\n", pcs.cantidad_nucleos);
    printf("\t\t\t\t Velocidad de procesamiento en Ghz(entre 1 y 3): %d\n", pcs.velocidad);
    printf("\t\t\t\t Anio de fabricacion(entre 2015 y 2023): %d\n", pcs.anio);
}

void computadoraVieja(compu pcs[5])
{
    compu aux = pcs[0];
    for (int i = 0; i < 5; i++)
    {
        if (aux.anio > pcs[i].anio)
        {
            aux = pcs[i];
        }
    }
    printf("\t\t\t\t Tipo de Procesador: %s\n", aux.tipo_cpu);
    printf("\t\t\t\t Cantidad de nucleos (entre 1 y 8): %d\n", aux.cantidad_nucleos);
    printf("\t\t\t\t Velocidad de procesamiento en Ghz(entre 1 y 3): %d\n", aux.velocidad);
    printf("\t\t\t\t Anio de fabricacion(entre 2015 y 2023): %d\n", aux.anio);
    printf("\n\n");
}
void computadoraRapida(compu pcs[5])
{
    compu aux = pcs[0];
    for (int i = 0; i < 5; i++)
    {
        if (aux.velocidad < pcs[i].velocidad)
        {
            aux = pcs[i];
        }
    }
    printf("\t\t\t\t Tipo de Procesador: %s\n", aux.tipo_cpu);
    printf("\t\t\t\t Cantidad de nucleos (entre 1 y 8): %d\n", aux.cantidad_nucleos);
    printf("\t\t\t\t Velocidad de procesamiento en Ghz(entre 1 y 3): %d\n", aux.velocidad);
    printf("\t\t\t\t Anio de fabricacion(entre 2015 y 2023): %d\n", aux.anio);
}
