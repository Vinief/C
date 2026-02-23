#include <stdio.h> 
int main (){
    int num;
    printf("digite um numero:");
    scanf("%d", &num);
    (num % 2 == 0) ? 
        printf("o numero %d eh par\n" , num):
        printf("o numero %d eh impar\n" , num);
    
    // pode ser feito na mesma linha
    // (num % 2 == 0) ? printf("o numero %d eh par\n" , num): printf("o numero %d eh impar\n" , num);
    // pode ser usado pra guardar variaveis
    int par   = (num % 2 == 0) ? num: num + 1;
    int impar = (num % 2 == 0) ? num + 1: num;
    
    printf("o numero %d eh par\n" , par);
    
    printf("o numero %d eh impar" , impar);
    
    printf("\n");
}
   
