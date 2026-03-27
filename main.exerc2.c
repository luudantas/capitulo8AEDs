#include <stdio.h>
#include <stdlib.h>
/*
    Autora: Luana Dantas
    Data: 27/3/26
*/
int soma (x,y)
{
    int result=0;
    if (x <= y)
    {
        for (int conta=x+1; conta<y; conta++)
            result+=conta;
    }
    return result;
}
int main()
{
   int a, b, retorno;
   printf("Digite os numeros: ");
   scanf("%d%d", &a,&b);
   retorno=soma(a,b);
   printf("%d",retorno);
    return 0;
}
