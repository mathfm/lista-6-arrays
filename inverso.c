#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://thehuxley.com/problem/72?quizId=8317

void ler_valores(int array[], int i, int n)
{
    if (i >= n)
    {
        printa(array, n);
        return;
    }
    else
    {
        scanf("%d", &array[i]);
        return ler_valores(array, i + 1, n);
    }
}

void printa(int array[], int n1)
{

    if (n1 == 0)
    {
        return;
    }
    else
    {
        printf("%d ", array[n1 - 1]);
        return printa(array, n1 - 1);
    }
}

int main()
{
    int n1;
    scanf("%d", &n1);
    int array[n1];
    ler_valores(array, 0, n1);

    return 0;
}