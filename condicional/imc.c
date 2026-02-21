#include <stdio.h> 
#include <stdbool.h>
int main (){
    double altura;
    double peso;
    printf("digite sua altura em metros:");
    scanf("%lf", &altura);
    printf("digite seu peso em kg:");
    scanf("%lf", &peso);
    double imc = peso/(altura*altura);
    if (16 > imc)
    {
        printf("Magreza Grave!");
    }
    if ((17 > imc) && (imc >= 16))
    {
        printf("\nMagreza Moderada");
    }
    if ((18.5 > imc) && (imc >= 17))
    {
        printf("\nMagreza Leve");
    }
    if ((25 > imc) && (imc >= 18.5))
    {
        printf("\nSaudavel");
    }
    if ((30 > imc) && (imc >= 25))
    {
        printf("\nSobrepeso");
    }
    if ((35 > imc) && (imc >= 30))
    {
        printf("\nObesidade Grau I");
    }
    if ((40 > imc) && (imc > 35))
    {
        printf("\nObesidade Grau II");
    }
    if ((imc >= 40 ))
    {
        printf("Obesidade Grau III");
    }
    printf("\n");
}
   
