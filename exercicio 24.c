#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int idade, estCivil, somaIdade=0, cont=0;
    float peso, somaPeso=0;
    char sexo;

    while (idade != 0) {
        printf(" \n ===================================================================================== ");
        printf(" \n =============================== PESQUISA POPULACIONAL =============================== ");
        printf(" \n ===================================================================================== ");
        printf("\n \n Informe a idade: ");
        scanf("%d", &idade);
        somaIdade += idade;
        fflush(stdin);
        if (idade==0){
            break;
        }
        else {
            cont += 1;
            printf("\n Escolha o estado civil: \n ----------------------- \n [0 - Solteiro] \n [1 - Casado] \n [2 - Separado] \n [3 - Viúvo] \n\n Opção: ");
            scanf("%d", &estCivil);
            printf(" ----------------------- \n \n Informe o peso (Kg): ");
            scanf("%f", &peso);
            somaPeso += peso;
            fflush(stdin);
            printf("\n \n Informe o sexo [M - masculino / F - Feminino]: ");
            scanf("%s", &sexo);
            system("cls");
        }
    }
    system("cls");
    printf(" \nRESULTADO DA PESQUISA ");
    printf("\n--------------------------");
    printf("\nMédia de Idade: %d ", somaIdade/cont);
    printf("\nMedia de Peso: %.2f kg", somaPeso/cont);
    printf("\n--------------------------");
    return(0);
}
