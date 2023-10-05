#include <stdio.h>

int main(){
    
    float n1, n2, n3;

    printf("Digite três números: ");
    scanf("%f %f %f",&n1,&n2,&n3);

    float mediaPonderada = (n1*2 + n2*3 + n3*5)/10;
   
    printf("A media ponderada é: %f", mediaPonderada);

}