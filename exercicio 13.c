#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i,soma=0;
    printf("Impares = + ");
    for (i=200;i<501;i++){
        if (i%2==1){
            soma += i;
            printf("%d + ", i);
        }
        else{
            soma += 0;
        }
    }
    printf("= %d \n", soma);
    return(0);
}
