#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define max 3

int main(){
    setlocale(LC_ALL, "Portuguese");

    int vetorA[max];
    int vetorB[max];
    int igual[max];
    int i=0,j=0,q=0, t=0, p=0;

    for (i=0;i<max;i++){
        printf("Informe o item %d no Vetor A: ", i);
        scanf("%d", &vetorA[i]);
        }

    printf("\n");

    for (p=0;p<max;p++){
        printf("Informe o item %d no Vetor B: ", p);
        scanf("%d", &vetorB[p]);;
        }

    for (j=0;j<max;j++){
        if (vetorA[j]==vetorB[j]){
            igual[j] = j;
            t++;
        }
    }

    if (t > 0){
        printf("\n\nOs vetores iguais são os indíces: ");
        for (q=0;q<t;q++){
            printf("%d, ", igual[q]);
        }
    }
    else {
        printf("\n\nNão há vetores iguais");
    }

    printf("\n\n");
    return(0);
}
