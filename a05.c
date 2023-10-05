#include <stdio.h>

int main (){

    int idade;

    printf("Digite sua idade: ");
    scanf("%d",&idade);

    int resultado = idade*365;

    printf("Sua idade em dias é de: %d\n",resultado);

}