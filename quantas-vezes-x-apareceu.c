#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://thehuxley.com/problem/696?quizId=8317
void ler(int v[], int start, int stop)
{
    if (start <= stop)
    {
        return;
    }
    else
    {
        scanf("%d", &v[start - 1]);
        return ler(v, start - 1, stop);
    }
}

void repetir(int v[], int start, int stop, int repet, int acumulador)
{
    if (start <= stop)
    {
        printf("%d", acumulador);
        return;
    }
    else
    {
        if (v[start - 1] == repet)
        {
            acumulador++;
            return repetir(v, start - 1, stop, repet, acumulador);
        }

        return repetir(v, start - 1, stop, repet, acumulador);
    }
}

int main()
{
    int cont[10], rep;
    int acumular = 0;
    ler(cont, 10, 0);
    scanf("%d", &rep);
    repetir(cont, 10, 0, rep, acumular);
    return 0;
}