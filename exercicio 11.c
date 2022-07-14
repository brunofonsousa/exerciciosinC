#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    printf("\n O valor do QUADRADO de %i é %.2f ", numero, pow(numero,2));
    printf("\n O valor da RAIZ QUADRADA de %i é %.2f ", numero, sqrt(numero));
    return (0);
}
