#include <stdio.h>

int main (){
    
    
    int a = 12;
    int b = 8;
    // se o variavel for um int eh o equivalente a divisao inteira no python
    int result = a/b;
    printf("%d", result);
    
    // soma ao apenas no print valor
    printf("\n%d", --a);
    // subtrai ao apenas no print valor
    printf("\n%d", ++a);
    
    //soma ao valor permanentemente
    printf("\n%d", a++);
    //subtrai ao valor permanentemente
    printf("\n%d", a);

    //se somar uma string ela eh transformada em ascii
    char c = '5';
    int d = 8;

    int result_1 = c + d;
    printf("\n%d", result_1);
    printf("\n");
    return 0;
}   