#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
        int numFilhos=0, cont=0, somaFilhos=0;
        float salario=0, somaSalario=0, maiorSal=0;
        while (numFilhos >= -1){
            printf("\n Informe o n�mero de filhos: ");
            scanf("%d", &numFilhos);
            fflush(stdin);
            if (numFilhos == -1){
                system("cls");
                break;
            }
            else {
                somaFilhos = somaFilhos + numFilhos;
                printf("\n Informe o sal�rio por familia: R$ ");
                scanf("%f", &salario);
                fflush(stdin);
                somaSalario = somaSalario + salario;
                if (salario > maiorSal){
                    maiorSal = salario;
                }
                cont++;
                system("cls");
            }
        }
        printf("RESULTADO DA PESQUISA: ");
        printf("\n----------------------");
        printf("\nTotal de filhos : %d", somaFilhos);
        printf("\nTotal de Salario: R$ % .2f", somaSalario);
        printf("\nM�dia de filhos : %d", somaFilhos/cont);
        printf("\nM�dia de Salario: R$ %.2f", somaSalario/cont);
        printf("\nMaior sal�rio:    R$ %.2f \n", maiorSal);

    return(0);
}
