#include <stdio.h> 
#include <stdbool.h>

int main (){    
    
    printf("digite um numero: ");
    double num; 
    scanf("%lf", &num);
    if (num > 0)
    {
    printf("\nnumero positivo!");
    }
    else if (num == 0)
    {
        printf("\nnumero igual a zero");
    }
    else{
        printf("\nnumero negativo");
    }
    
    printf("\n");

}