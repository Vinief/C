#include <stdio.h> 

int main (){
    int mes ;
    printf("digite um mes do ano em numerico:");
    scanf("%d", &mes);
    switch (mes)
    {
    case 1:
        printf("eh Janeiro\n");
        break;
    case 2:
        printf("eh Fevereiro\n");
        break;
    case 3:
        printf("eh Marco\n");
        break;
    case 4:
        printf("eh Abril\n");
        break;
    case 5:
        printf("eh Maio\n");
        break;
    case 6:
        printf("eh Junho\n");
        break;
    case 7:
        printf("eh Julho\n");
        break;
    case 8:
        printf("eh Agosto\n");
        break;
    case 9:
        printf("eh Setembro\n");
        break;
    case 10:
        printf("eh Outubro\n");
        break;
    case 11:
        printf("eh Novembro\n");
        break;
    case 12:
        printf("eh Dezembro\n");
        break;

    
    default:
        printf("invalido!!!\n");
        break;
    }


    return 0;
}
   
