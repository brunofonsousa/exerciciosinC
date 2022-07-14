#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int valor, soma=0;

    do{
        printf("Informe um valor: ");
        scanf("%d", &valor);
        soma = soma+valor;
    } while (valor!=0);

    printf("\n SOMA: %d", soma);

    return(0);
}
