#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://thehuxley.com/problem/1032?quizId=8317

void contarTocas(int buracos[], int i, int cont, int n)
{
    int proximoBuraco;

    if (buracos[i] != -1)
    {
        proximoBuraco = buracos[i];
        buracos[i] = -1;
    }
    else
    {
        cont++;
        proximoBuraco = buracosNaoVisitados(buracos, 0, n);
        if (proximoBuraco == -1)
        {
            printf("%d\n", cont);
            return;
        }
    }
    contarTocas(buracos, proximoBuraco, cont, n);
}

void lerArray(int array[], int i, int n)
{

    if (i == n)
    {
        return;
    }
    scanf("%d", &array[i]);
    return lerArray(array, i + 1, n);
}

int procurarBuraco(int buracos[], int i, int n)
{
    if (i == n)
    {
        return -1;
    }
    if (buracos[i] == 0)
    {
        return i;
    }
    else
    {
        return procurarBuraco(buracos, i + 1, n);
    }
}

int buracosNaoVisitados(int buracos[], int i, int n)
{
    if (i == n)
    {
        return -1;
    }
    if (buracos[i] != -1)
    {
        return i;
    }
    else
    {
        return buracosNaoVisitados(buracos, i + 1, n);
    }
}

int main()
{
    int totalBuraco;
    scanf("%d", &totalBuraco);
    int buraco[totalBuraco];
    lerArray(buraco, 0, totalBuraco);
    contarTocas(buraco, 0, 0, totalBuraco);
    //[^\n]
    //(((i("+ 2") % n) + n) % n )
    // colocando i + 1 um numero aqui ele vai pular ate um certo numero do array

    return 0;
}