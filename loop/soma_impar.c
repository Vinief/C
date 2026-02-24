#include <stdio.h>

int main(){
    int sum_impar = 0;
    for (int i = 1; i <= 100; i = i + 2)
    {
        printf("%d\n", i);
        sum_impar = sum_impar + i;
    }
    printf("soma de todos os impares %d\n", sum_impar);
}