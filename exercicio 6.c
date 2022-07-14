#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define max 5

int main(){
    int i,j;
    int vetor[max];

    i=0;
    while (i<5){
        printf("Informe o indice %d no vetor: ", i);
        scanf("%d", &vetor[i]);
        fflush(stdin);
        i++;
    }

    j=4;
    printf("\n\nVETOR em ordem decrescente: ");
    while (j>=0){
        printf("%d - ", vetor[j]);
        j--;
    }

    printf("\n\n");
    return(0);
}


