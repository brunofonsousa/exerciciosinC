#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float realDolar(float cotacao,  float reais){
    float valorConv;
    valorConv = reais * cotacao;
    return valorConv;
}

void main(){
    setlocale(LC_ALL, "Portuguese");
    float reais, cotacao, converte;
    printf("\nInforme o valor em reais  :   R$ ");
    scanf("%f", &reais);
    printf("Informe a cotação do dolar  :   R$ ");
    scanf("%f", &cotacao);
    converte = realDolar(cotacao,reais);
    printf("\nO valor de U$$ %.2f equivale a R$ %.2f\n", reais, converte);
    return(0);
}
