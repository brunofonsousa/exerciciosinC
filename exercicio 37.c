#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int somaPar(int x){
    int cont=0, i=1, par=0;
    while (cont<x){
        if (i%2==0){
            par += i;
            cont++;
        }
        i++;
    }
    return par;
}

void main(){
    setlocale(LC_ALL, "Portuguese");
    int numpar, soma;
    printf("Quantos pares somar? R: ");
    scanf("%d", &numpar);
    soma = somaPar(numpar);
    printf("\nRESULTADO (par + par): %d \n", soma);
    return(0);
}
