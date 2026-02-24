#include <stdio.h>

int main(){
    int soma ,cont = 1, a = 1, b = 1, c = 0, lim = (4*10*10*10*10*10*10);
    while (lim > a)
    {
        b = a - b;
        a = a + b;
        soma = (a % 2 == 0)? soma + a: soma + 0;
        printf("%d, %d\n",soma ,a);
        cont = cont + 1;
    }
    
}