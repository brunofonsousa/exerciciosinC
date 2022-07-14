#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i,j;
    for (i=1;i<11;i++){
        for (j=1;j<11;j++){
            printf("\n %d x %d = %d", i, j, j*i);
        }
        printf("\n \n", j);
    }
    return(0);
}
