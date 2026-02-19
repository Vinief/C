#include <stdio.h>

int main (){    
    double altura;
    int idade;
    printf("digite sua altura:");
    // & eh o espaco alocado na memorira 
    // %d eh a formatacao do da variavel
    scanf("%lf", &altura);
    
    printf("\ndigite sua idade:");
    scanf("%d", &idade);
     
    printf("\nessa eh a sua altura: %.2lf", altura);
    printf("\nessa eh a sua idade: %d", idade);
    
    printf("\ndigite sua altura e idade:");
    
    // input de duas variaveis ao mesmo tempo
    scanf("%lf %d", &altura, &idade);
    printf("\nessa eh a sua altura:%.2lf",altura);
    printf(" essa eh a sua idade:%d",idade);
    printf("\n");
}