#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int somaNum(int n1, int n2);

void main(){
setlocale(LC_ALL, "Portuguese");
    int num1, num2, soma;
    printf("Informe o primeiro valor: ");
    scanf("%d", &num1);
    printf("Informe o segundo valor: ");
    scanf("%d", &num2);
    soma = somaNum(num1, num2);
    printf("A soma de %d e %d é %d.", num1, num2, soma);
return(0);
}

int somaNum(int n1, int n2){
    int x;
    x = n1 + n2;
    return (x);
};
