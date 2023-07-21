#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://thehuxley.com/problem/247?quizId=8317

void inverterString(char string[], int esquerda, int direita)
{
    if (esquerda >= direita)
        return;

    char aux = string[esquerda];
    string[esquerda] = string[direita];
    string[direita] = aux;

    inverterString(string, esquerda + 1, direita - 1);
}

int main()
{
    char palavra[20];
    scanf("%s", palavra);
    inverterString(palavra, 0, strlen(palavra) - 1);
    printf("%s\n", palavra);

    return 0;
}