#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Informe um número: ");
    scanf("%d", &num);
    if ((num%3==0) && (num%7==0)){
        printf("O valor %d É divisível por 3 e 7.", num);
    }
    else {
        printf("O valor %d NÃO é divisível por 3 e 7.", num);
    }
    return(0);
}
