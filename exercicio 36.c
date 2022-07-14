#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

char verLetra(char letra){
    int num;
    switch(letra){
        case 'a': num = 0;
            break;
        case 'A': num = 0;
            break;
        case 'e': num = 0;
            break;
        case 'E': num = 0;
            break;
        case 'i': num = 0;
            break;
        case 'I': num = 0;
            break;
        case 'o': num = 0;
            break;
        case 'O': num = 0;
            break;
        case 'u': num = 0;
            break;
        case 'U': num = 0;
            break;
        default: num = 1;
            break;
    }
    return num;
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    char x;
    char status[10];
    int ret;
    printf("Digite uma letra: ");
    scanf("%c", &x);
    ret = verLetra(x);

    if (ret == 0){
        strcpy(status,"VOGAL");
    }
    else {
        strcpy(status, "CONSOANTE");
    }

    printf("\nPara letra ( %c ) é atruído o nº %d pois é uma %s.\n", x, ret, status);
    return(0);
}
