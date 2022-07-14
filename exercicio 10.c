#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int numLetras, i;
    char palavra[20];
    printf("Digite uma palavra: ");
    gets(palavra);
    numLetras = strlen(palavra);
    if (numLetras%2==1){
        printf("\nCONSOANTES: ");
        for (i=0;i<=numLetras;i++){
            if ((palavra[i]!='a')&&(palavra[i]!='e')&&(palavra[i]!='i')&&(palavra[i]!='o')&&(palavra[i]!='u')){
               printf("%c", palavra[i]);
            }
        }
        printf("\n");
    }
    else {
        printf("\nNúmero par de strings!!!\n");
    }
    return(0);
}
