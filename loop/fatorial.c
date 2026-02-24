#include <stdio.h>

int main(){
    int n, fatorial = 1;
    printf("digite o numero que vc deseja saber o fatorial:");
    scanf("%d", &n);
    while (n > 0)
    {
        fatorial = fatorial * n--;
    }
    
    printf("%d fatoral eh:%d\n",n , fatorial);
     
}