#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i;
    for (i=1;i<30;i++){
        if ((i%3==0)&&(i%7==0)){
            printf("\n O número %d é divisível por 3 e por 7. \n", i);
        }
    };
    return(0);
}
