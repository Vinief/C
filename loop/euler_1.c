#include <stdio.h>

int main(){
    int soma = 0 , cont = 0;
    while (1000 != cont)
    {   cont = cont + 1;
        soma = ((cont % 3 == 0) || (cont % 5 == 0))?  (soma + cont) : soma + 0;

    }   
    printf("a soma eh:%d\n", soma);
}