#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
        int i=1, num, fat=1;
        printf("Informe o fatorial: ");
        scanf("%d", &num);
        while (i<num+1){
            fat = fat * i;
            printf("\n %d", fat);
            i++;
        }
    return(0);
}
