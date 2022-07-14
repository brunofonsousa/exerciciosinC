#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int cod;
    float sal, novoSal, aumento;
    char cargo[10];

    printf("Informe o salário: R$ ");
    scanf("%f", &sal);
    fflush(stdin);

    printf("Informe o código do cargo: ");
    scanf("%d", &cod);
    fflush(stdin);

    if (cod == 1){
        printf("\nCódigo: 1");
        aumento = (sal/100) * 40;
        novoSal = (sal + aumento);
        strcpy(cargo, "Servente");}

    else if (cod == 2){
        printf("\nCódigo: 2");
        aumento = (sal/100) * 35;
        novoSal = (sal + aumento);
        strcpy(cargo, "Pedreiro");}

    else if (cod == 3){
        printf("\nCódigo: 3");
        aumento = (sal/100) * 20;
        novoSal = (sal + aumento);
        strcpy(cargo, "Mestre de Obras");}

    else {
        printf("\nCódigo: 4");
        aumento = (sal/100) * 10;
        novoSal = (sal + aumento);
        strcpy(cargo, "Técnico Segurança");}

    printf("\nProfissão: %s", cargo);
    printf("\nAumento: R$ %2.f", aumento);
    printf("\nNovo salário: R$ %.2f", novoSal);

    return(0);
}
