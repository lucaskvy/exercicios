#include <stdio.h>

int main(){
    // Faça um algoritmo que leia 
    // três números inteiros e mostre a soma entre eles.
    int n1, n2, n3;
    int soma;

    // solicita ao usuario os numeros
    printf("Digite três números: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    // calcula a soma os numeros
    soma = n1 + n2 + n3;

    printf("A soma dos números é de: %d\n", soma);
}