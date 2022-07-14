#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define max 20

int main(){
    setlocale(LC_ALL, "Portuguese");

    typedef struct biblioteca {
        char titulo[30], autor[30], editora[20];
        int ano, edicao;
      };

    int i;
    struct biblioteca cadastro[max];
    for (i=0;i<max;i++){
        printf("\nCADASTRO - LIVRO nº %d", i+1);
        printf("\n---------------------- \n");
        printf("\nInforme o Título: ");
        gets(cadastro[i].titulo);
        printf("\nInforme o Autor: ");
        gets(cadastro[i].autor);
        printf("\nInforme a Editora: ");
        gets(cadastro[i].editora);
        printf("\nInforme a Edição: ");
        scanf("%d", &cadastro[i].edicao);
        printf("\nInforme o Ano: ");
        scanf("%d", &cadastro[i].ano);
        fflush(stdin);
        system("cls");
    }

    for (i=0;i<max;i++){
        printf("BIBLIOTECA DE CADASTROS - Livro nº %d", i+1);
        printf("\n-----------------\n");
        printf("Título: %s", cadastro[i].titulo);
        printf("\nAutor: %s", cadastro[i].autor);
        printf("\nEditora: %s", cadastro[i].editora);
        printf("\nEdição: %d", cadastro[i].edicao);
        printf("\nAno: %d", cadastro[i].ano);
        printf("\n\n\n\n");
    }
    return(0);
}
