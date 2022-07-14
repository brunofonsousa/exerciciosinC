#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    struct boletim {
        char nome[30];
        float nota;
        float media;
    };

    int i, j, z, soma;
    int aux;
    float aux2;
    struct boletim aluno[3];
    for (i=0;i<3;i++){
        soma = 0;
        printf("Nome do aluno: ");
        gets(aluno[i].nome);
        fflush(stdin);
        for (j=0;j<4;j++){
            printf("Nota %d: ", j+1);
            scanf("%f", &aluno[j].nota);
            fflush(stdin);
            soma += aluno[j].nota;
        }
        aluno[i].media= soma/4;
        system("cls");
    }

    for (i=0;i<=3;i++){
        aux = i;
        for (j=i+1;j<=4;j++){
            if (aluno[j].media > aluno[aux].media){
                aux = j;
        aux2 = aluno[aux].media;
        aluno[aux].media = aluno[i].media;
        aluno[i].media = aux2;
             }
        }
    }

    for (z=0;z<3;z++){
        printf("%0.1f \n\n", aluno[z].media);
    }

   return(0);
};
