#include <stdio.h>
#include <math.h>

int main(){

    float peso;
    float altura;

    printf("Qual seu peso? ");
    scanf("%f", &peso);

    printf("Qual sua altura? ");
    scanf("%f", &altura);

    float imc = peso/pow(altura,2);

    printf("%f", imc);

}