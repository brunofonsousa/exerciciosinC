#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int matriz1[5][5];
    int matriz2[5][5];
    int i, j;

    printf("MATRIZ nº 1 \n");
    printf("-------------- \n");
    for (i=0;i<5;i++){
            printf("\n");
        for (j=0;j<5;j++){
            printf("Informe a linha %d da coluna %d: ", i+1, j+1);
            scanf("%d", &matriz1[i][j]);
            fflush(stdin);
        }
    }

    system("cls");

    printf("MATRIZ nº 2 \n");
    printf("-------------- \n");
    for (i=0;i<5;i++){
        printf("\n");
        for (j=0;j<5;j++){
            printf("Informe a linha %d da coluna %d: ", i+1, j+1);
            scanf("%d", &matriz2[i][j]);
            fflush(stdin);
        }
    }

    system("cls");


    printf("\nSOMANDO (Matriz nº 1 + Matriz nº 2)\n");
    printf("--------------------------------------- \n");
    for (i=0;i<5;i++){
        printf("| \t");
        for (j=0;j<5;j++){
            printf("%d \t", matriz1[i][j]+matriz2[i][j]);
        }
        printf("|\n");
    }

    printf("\n\n");

    printf("\nSUBTRAINDO (Matriz nº 1 - Matriz nº 2)\n");
    printf("--------------------------------------- \n");
    for (i=0;i<5;i++){
        printf("|\t");
        for (j=0;j<5;j++){
            printf("%d \t", matriz1[i][j]-matriz2[i][j]);
        }
        printf("|\n");
    }

    return(0);
}
