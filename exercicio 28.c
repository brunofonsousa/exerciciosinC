#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num, i, qtdade;
    printf("\n Informe o numero: " );
    scanf("%d", &num);
    qtdade = 0;
    for (i=1; i<=num; i++){
        if (i%i==0){
            printf("\n %d", i);
        }
    }
    return(0);
}

