#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
        int i, div3;
        for (i=1;i<=100;i++){
             if (i%3==0){
                printf("\n %d \n", i);
            }
        }
    return(0);
}
