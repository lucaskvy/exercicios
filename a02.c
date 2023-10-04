#include <stdio.h>

int main(){
    //Faça um algoritmo que leia um número inteiro e 
    //mostre o seu dobro, triplo e quadruplo.
    int n;
    int dobro, triplo, quad;

    printf("Digite um número: ");
    scanf("%d",&n);

    dobro = n*2;
    triplo = n*3;
    quad = n*4;

    printf("%d %d %d",dobro, triplo, quad);


}