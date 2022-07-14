#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
        int dia, mes, ano, qtde, numPedido;
        float preco;
        printf("\n----------------- CUPOM FISCAL ----------------- \n \n");
        do{
            printf("Número do pedido: ");
            scanf("%d", &numPedido);
            if (numPedido==0){
                break;
            }
            else{
                printf("Informe o dia: ");
                scanf("%d", &dia);
                printf("Informe o mês: ");
                scanf("%d", &mes);
                printf("Informe o ano: ");
                scanf("%d", &ano);
                printf("Informe o preço do produto: R$ ");
                scanf("%f", &preco);
                printf("Informe a quantidade: ");
                scanf("%d", &qtde);
                fflush(stdin);}
                printf("\n Pedido %d - %d/%d%/%d - Valor a pagar: R$ %.2f \n", numPedido, dia, mes, ano, preco*qtde);
                printf("\n -------------------------------------------------------------------- \n\n");
        }while(numPedido!=0);
    return(0);
}
