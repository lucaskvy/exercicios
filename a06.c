#include <stdio.h>

int main(){

float salario;

printf("Diigte seu salario: ");
scanf("%f", &salario);

float novoSalario = salario*1.15;

printf("Seu novo salario é de: %.2fRS\n", novoSalario);

}