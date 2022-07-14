#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int numMes;

    printf("Informe o número do mês: ");
    scanf("%d", &numMes);

    switch (numMes) {

    case 1: numMes == 1;
        printf("JANEIRO");
    break;

    case 2: numMes == 2;
        printf("FEREVEIRO");
    break;

    case 3: numMes == 3;
        printf("MARÇO");
    break;

    case 4: numMes == 4;
        printf("ABRIL");
    break;

    case 5: numMes == 5;
        printf("MAIO");
    break;

    case 6: numMes == 6;
        printf("JUNHO");
    break;

    case 7: numMes == 7;
        printf("JULHO");
    break;

    case 8: numMes == 8;
        printf("AGOSTO");
    break;

    case 9: numMes == 10;
        printf("SETEMBRO");
    break;

    case 10: numMes == 11;
        printf("OUTUBRO");
    break;

    case 11: numMes == 12;
        printf("NOVEMBRO");
    break;

    case 12: numMes == 13;
        printf("DEZEMBRO");
    break;

    default: printf("Número inválido!!!");
    }

    return(0);
}
