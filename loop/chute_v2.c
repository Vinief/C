#include <stdio.h>
int main (){

    int num, maior_menor = 0 , menor_maior = 100, num_sorteado = 93, tentativas = 0;
    while (tentativas != 4){
        (tentativas == 0) ?
            printf("um numero de 0 a 100 foi sorteado e vc tem 4 tentativas para acertar\ndigite um numero:"):
            printf("%d - %d\ndigite um numero: ",maior_menor,menor_maior);
        
        scanf("%d", &num); 
        if(num != num_sorteado){
            maior_menor = ((num_sorteado > num) && (num > maior_menor)) ? num : maior_menor; 
            menor_maior = ((menor_maior > num) && (num > num_sorteado)) ? num : menor_maior;

    }       
        else{
            tentativas = 4;
            printf("\nvoce acertou!!!\n");}
        
        tentativas = tentativas + 1;
    }
}