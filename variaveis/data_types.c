#include <stdio.h>

int main (){    
    
    int idade = 22;
    printf("minha idade:%d", idade);
    
    double tam = 1.69;
    printf("\nmeu tamanho:%.2lf", tam);

    char inicial = 'V';
    printf("\ninicial:%c", inicial);
    //strings podem ser lidas como inteiros tbm
    printf("\ninicial em inteiro:%d", inicial);
    printf("\ntamanho em bytes:%d", sizeof(idade));
    printf("\n");


}