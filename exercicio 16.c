#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    char nome[10];

    strcpy(nome, "linguagem C");

    printf("%s", nome);
    return (0);

}
