#include <stdio.h> 
#include <stdbool.h>

int main (){
    
    int num;
    int num_sorteado = 93;
    int maior_menor = 0 , menor_maior = 100;
    printf("um numero de 0 a 100 foi sorteado e vc tem 4 tentativas para acertar\ndigite um numero: ");
    scanf("%d", &num);
    if(num != num_sorteado){
        if((num_sorteado > num) && (num > maior_menor)){
            maior_menor = num; 
            }
        else if ((menor_maior > num) && (num > num_sorteado)){    
            menor_maior = num;
            }
        printf("%d",maior_menor);
        printf(" - %d",menor_maior);
        printf("\ndigite um numero: ");
        scanf("%d", &num);
        if(num != num_sorteado){
            
            if ((num_sorteado > num) && (num > maior_menor)){
                
                maior_menor = num;
                }
            else if ((menor_maior > num) && (num > num_sorteado)){
                
                menor_maior = num;
                }
            printf("%d",maior_menor);
            printf(" - %d",menor_maior);
            printf("\ndigite um numero: ");
            scanf("%d", &num);
            if(num != num_sorteado){
                
                if ((num_sorteado > num) && (num > maior_menor)){
                    
                    maior_menor = num;
                    }
                else if ((menor_maior > num) && (num > num_sorteado)){
                    
                    menor_maior = num;
                    }
                printf("%d",maior_menor);
                printf(" - %d",menor_maior);
                printf("\ndigite um numero: ");
                scanf("%d", &num);
                
                if (num != num_sorteado){
                
                    printf("\nvoce errou o numero ele era:%d", num_sorteado);
                    printf("\n");
                }
                else{
                
                    printf("\nvoce acertou!!!");
                    printf("\n");
                }
                }
            else
            
                printf("\nvoce acertou!!!");
                printf("\n");
            
            }
        else
        
            printf("\nvoce acertou!!!");
            printf("\n");
        
    }
    else
    
    printf("\nvoce acertou!!!");
    printf("\n");
}
   
