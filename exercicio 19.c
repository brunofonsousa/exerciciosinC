#include <stdio.h>
#include <math.h>
#include <locale.h>
#define pi 3.141593

int main(){
    setlocale(LC_ALL, "Portuguese");
    float raio;
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    printf("\n O valor da área: %f", pi*pow(raio,2));
    printf("\n O valor do perimetro: %f", 2*pi*raio);
    return (0);
}
