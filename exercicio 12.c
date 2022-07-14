#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int cod;
    float sal, novoSal, aumento;
    char cargo[10];

    printf("Informe o sal�rio: R$ ");
    scanf("%f", &sal);
    fflush(stdin);

    printf("Informe o c�digo do cargo: ");
    scanf("%d", &cod);
    fflush(stdin);

    if (cod == 1){
        printf("\nC�digo: 1");
        aumento = (sal/100) * 40;
        novoSal = (sal + aumento);
        strcpy(cargo, "Servente");}

    else if (cod == 2){
        printf("\nC�digo: 2");
        aumento = (sal/100) * 35;
        novoSal = (sal + aumento);
        strcpy(cargo, "Pedreiro");}

    else if (cod == 3){
        printf("\nC�digo: 3");
        aumento = (sal/100) * 20;
        novoSal = (sal + aumento);
        strcpy(cargo, "Mestre de Obras");}

    else {
        printf("\nC�digo: 4");
        aumento = (sal/100) * 10;
        novoSal = (sal + aumento);
        strcpy(cargo, "T�cnico Seguran�a");}

    printf("\nProfiss�o: %s", cargo);
    printf("\nAumento: R$ %2.f", aumento);
    printf("\nNovo sal�rio: R$ %.2f", novoSal);

    return(0);
}
