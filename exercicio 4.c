#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Informe um n�mero: ");
    scanf("%d", &num);
    if ((num%3==0) && (num%7==0)){
        printf("O valor %d � divis�vel por 3 e 7.", num);
    }
    else {
        printf("O valor %d N�O � divis�vel por 3 e 7.", num);
    }
    return(0);
}
