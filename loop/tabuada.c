#include <stdio.h>

int main(){
    int num_1 = 10, num_2, produto;
    printf("digite um num para sabera a tabuada dele:");
    scanf("%d", &num_2);
    
    // tbm tem o do que faz o loop rodar pelo menos uma vez 

    while(num_1 != 0)
    {
        produto = num_1 * num_2;
        printf("%d * %d = %d\n",num_2, num_1, produto);
        num_1 = num_1 - 1;
    }
    
}