#include <stdio.h>

int main(){

    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    int suc = n + 1; 
    int an = n - 1;

    printf("Seu antecessor e sucessor respectivamente sao: %d %d", an, suc);
}

