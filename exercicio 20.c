#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char frase[50];
    int i, num;
    printf("Digite uma frase: ");
    gets(frase);
    printf("Quantas vezes que a frase será impressa: ");
    scanf("%d", &num);
    for (i=1;i<num+1;i++){
        printf("\n %s ", frase);
    }
    printf("\n");
    return(0);
}
