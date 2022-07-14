#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define num 2

int main(){
    setlocale(LC_ALL, "Portuguese");

    struct agenda{
        char nome[30];
        char telefone[20];
        char email[30];
    };

    int i;
    struct agenda contato[num];
    for (i=0;i<num;i++){
        printf("\nAGENDA - Cadastro nº %d", i+1);
        printf("\n------------------------\n");
        printf("\nInforme o NOME do contato ................... : ");
        gets(contato[i].nome);
        fflush(stdin);
        printf("\nInforme o TELEFONE do contato (apenas números): ");
        gets(contato[i].telefone);
        fflush(stdin);
        printf("\nInforme o EMAIL do contato .................. : ");
        gets(contato[i].email);
        fflush(stdin);
        system("cls");
    }

    for (i=0;i<num;i++){
        printf("\nAGENDA - Contato nº %d", i+1);
        printf("\n------------------------\n");
        printf("Nome :  %s", contato[i].nome);
        printf("\nFone :  %s", contato[i].telefone);
        printf("\nEmail:  %s", contato[i].email);
        printf("\n\n\n\n");
    }
return(0);
}
