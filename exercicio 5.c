#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int numero, i;
    float resposta, divisor;
    resposta = 0;
    printf ("\nDigite um numero: ");
    scanf ("%d", &numero);
    for (i=1; i <= numero; i++){
        divisor = i;
        resposta = resposta + 1/divisor;
        printf("\n %f \n", resposta);
    }
    printf ("\nResposta: %f\n", resposta);
    return(0);
}
