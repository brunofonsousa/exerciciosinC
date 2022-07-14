#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

char contaVogal(char palavra[20]){
    int cont, i=0, numvog=0;
    cont = strlen(palavra);
    for (i=0;i<cont;i++){
        if ((palavra[i] == 'a')||(palavra[i] == 'e')||(palavra[i] == 'i')||(palavra[i] == 'o')||(palavra[i] == 'u')){
            numvog += 1;
        }
        else {
            numvog += 0;
        }
    }
    return numvog;
}

void main(){
    setlocale(LC_ALL, "Portuguese");
    char palavra[20];
    int ret;
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    ret = contaVogal(palavra);
    printf("\nNÚMERO DE VOGAIS (%s): %d\n", palavra, ret);
    return(0);
}
