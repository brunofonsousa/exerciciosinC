#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3, num4, num5, maior, menor;
    printf("\n Digite o primeiro valor: ");
    scanf("%d", &num1);
    printf("\n Digite o segundo valor: ");
    scanf("%d", &num2);
    printf("\n Digite o terceiro valor: ");
    scanf("%d", &num3);
    printf("\n Digite o quarto valor: ");
    scanf("%d", &num4);
    printf("\n Digite o quinto valor: ");
    scanf("%d", &num5);

    menor = 9999;
    maior = 0;

    if (num1 > maior) {
        maior = num1;
        }
    if (num2 > maior) {
        maior = num2;
        }
    if (num3 > maior) {
        maior = num3;
        }
    if (num4 > maior) {
        maior = num4;
        }
    if (num5 > maior){
         maior = num5;
        }


    if (num1 < menor){
        menor = num1;
    }
    if (num2 < menor){
        menor = num2;
    }
    if (num3 < menor){
        menor = num3;
    }
    if (num4 < menor){
        menor = num4;
    }
    if (num5 < menor){
        menor = num5;
    }

    printf("\n MAIOR: %d", maior);
    printf("\n MENOR: %d", menor);

    return(0);
}
