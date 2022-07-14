#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 10

int main (){
    setlocale(LC_ALL, "Portuguese");
    char palavra[tam];
    int num,i;
    printf("Digite uma palavra  : ");
    gets(palavra);
    printf("Repetições: ");
    scanf("%d", &num);
    for (i=0;i<num;i++){
        printf("\n %d - %s", i+1, palavra);
    }
    printf("\n");
    return(0);
}
