#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[10];
    printf("Digite o seu nome: ");
    scanf("%s", nome);
    printf("Bem vindo a disciplina de Algoritmos e L�gica de Programa��o II, %s", nome);
    return(0);
}
