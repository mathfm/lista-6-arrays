#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://thehuxley.com/problem/1858?quizId=8317

void ler(int conta[], int stop, int start)
{
    if (start <= stop)
    {
        return;
    }
    else
    {
        scanf("%d", &conta[start - 1]);
        return ler(conta, stop, start - 1);
    }
}

int maior(int v[], int tam, int aux)
{
    if (tam == 0)
        return v[aux]; // maior
    else
    {
        if (v[tam - 1] > v[aux]) // compara��o
            return maior(v, tam - 1, tam - 1);
        else
            return maior(v, tam - 1, aux);
    }
}

int menor(int v[], int tam, int indice)
{

    if (tam == 0)
    {
        return v[indice];
    }
    else
    {
        if (v[tam] < v[indice])
        {
            return menor(v, tam - 1, tam);
        }
        else
        {
            return menor(v, tam - 1, indice);
        }
    }
}

int main()
{
    int conta[6];
    int aux = 0;
    ler(conta, 0, 6);
    int n2 = maior(conta, 6, 0);
    int n3 = menor(conta, 5, 0);
    printf("%d\n", n3);
    printf("%d", n2);

    return 0;
}