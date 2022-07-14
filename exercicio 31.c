#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int idade, opcao, somaSatisf=0, somaInsatisf=0, somaIdadeSat=0, cont=0;
    while(idade!=0) {
        printf(" ==============================================================================\n ");
        printf("==========================  PESQUISA DE SATISFAÇÃO  ==========================\n ");
        printf("==============================================================================\n\n ");
        printf("Informe a idade: ");
        scanf("%d", &idade);
        if (idade==0){
            break;
            system("cls");
            }
        else {
            printf("\n\n");
            printf("Escolha uma opção: \n");
            printf("-------------------");
            printf("\n[1 - Satisfatório  ]");
            printf("\n[2 - Indiferente   ]");
            printf("\n[3 - Insatisfatório]\n");
            printf("-------------------");
            printf("\n Opção: ");
            scanf("%d", &opcao);
            if (opcao==1){
               somaSatisf += 1;
               somaIdadeSat += idade;
               cont++;
            }
            if (opcao==3){
                somaInsatisf += 1;
            }
            system("cls");
        }
    }
    system("cls");
    printf("\n RESULTADO: ");
    printf("\n --------------");
    printf("\n Clientes satisfeitos: %d", somaSatisf);
    printf("\n Media de Idade (Satisfeitos): %d", somaIdadeSat/cont);
    printf("\n Clientes Insatisfeitos: %d \n", somaInsatisf);
    return(0);
}
