#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float num1, num2, num3, num4, media;
    printf("Digite o n�mero: ");
    scanf("%f", &num1);
    printf("Digite o n�mero: ");
    scanf("%f", &num2);
    printf("Digite o n�mero: ");
    scanf("%f", &num3);
    printf("Digite o n�mero: ");
    scanf("%f", &num4);
    media = (num1+num2+num3+num4)/4;
    printf("A m�dia artm�tica entre todos os n�meros digitados � %.2f", media);
    return(0);
}
