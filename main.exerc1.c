#include <stdio.h>
#include <stdlib.h>
/*
    Autora:Luana Dantas
    Data: 27/3/26
*/
int verificaNumero (int x)
{
    int result;

    if (x>0)
        result=1;
    else if (x<0)
        result=0;
    else
        result=2;

    return result;
}
int main()
{
    int N, num, resp;
    printf("Quantos numeros? ");
    scanf("%d",&N);
    for (int conta=1; conta<=N; conta++)
    {
        printf("Digite o numero: ");
        scanf("%d",&num);
        resp= verificaNumero(num);
    switch(resp)
    {
    case 0:
        printf("Numero negativo\n");
        break;
    case 1:
        printf("Numero positivo\n");
        break;
    case 2:
        printf("Numero nulo\n");
        break;
    default:
        printf("Numero invalido\n");
        break;
    }
    }
    return 0;
}
