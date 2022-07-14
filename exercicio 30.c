#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int idade, somaIdade=0, cont=0;
    float altura=0, somaAltura=0;
    while (idade != 0){
        printf("\n Informe a idade: ");
        scanf("%d", &idade);
        fflush(stdin);
        if (idade == 0){
            system("cls");
            break;
        }
        else {
            somaIdade += idade;
            printf("\n Informe a altura: ");
            scanf("%f", &altura);
            somaAltura += altura;
            cont++;
            system("cls");
        }
    }
    printf("\n RESULTADO: ");
    printf("\n ------------");
    printf("\nMédia de idade : %d", somaIdade/cont);
    printf("\nMédia de altura: %.2f \n", somaAltura/cont);
    printf("----------------------------------------");
    return(0);
}
