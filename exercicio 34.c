#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int verPosNeg(int num){
    int x;
    if (num >= 0){
        x = 1;
    }
    else {
        x = 0;
    }
    return x;
};

void main(){
    setlocale(LC_ALL, "Portuguese");
    int n, posouneg;
    printf("Informe um n�mero: ");
    scanf("%d", &n);
    posouneg = verPosNeg(n);
    if (posouneg == 1){
        printf("O valor %d � POSITIVO.", n);
    }
    else {
        printf("O valor %d � NEGATIVO.", n);
    }
    return(0);
};
