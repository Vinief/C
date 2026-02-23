#include <stdio.h> 

int main (){
    
    int num;
    int num_sorteado = 93;
    int maior_menor = 0 , menor_maior = 100;
    printf("um numero de 0 a 100 foi sorteado e vc tem 4 tentativas para acertar\ndigite um numero: ");
    scanf("%d", &num);
    if(num != num_sorteado){
        maior_menor = ((num_sorteado > num) && (num > maior_menor)) ? num : maior_menor; 
        menor_maior = ((menor_maior > num) && (num > num_sorteado)) ? num : menor_maior; 

        printf("%d - %d\ndigite um numero: ",maior_menor,menor_maior);
        scanf("%d", &num);
        if(num != num_sorteado){
            maior_menor = ((num_sorteado > num) && (num > maior_menor)) ? num : maior_menor; 
            menor_maior = ((menor_maior > num) && (num > num_sorteado)) ? num : menor_maior;
            
            printf("%d - %d\ndigite um numero: ",maior_menor,menor_maior);
            scanf("%d", &num);
            if(num != num_sorteado){
                maior_menor = ((num_sorteado > num) && (num > maior_menor)) ? num : maior_menor; 
                menor_maior = ((menor_maior > num) && (num > num_sorteado)) ? num : menor_maior;
                
                printf("%d - %d\ndigite um numero: ",maior_menor,menor_maior);
                scanf("%d", &num);
                
                (num != num_sorteado)? printf("\nvoce errou o numero ele era:%d\n", num_sorteado): printf("\nvoce acertou!!!\n");
                }
            
            else
            
                printf("\nvoce acertou!!!\n");
            }
        else
        
            printf("\nvoce acertou!!!\n");
    }
    else
    
    printf("\nvoce acertou!!!\n");
}
   
