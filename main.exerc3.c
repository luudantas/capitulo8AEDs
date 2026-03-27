#include <stdio.h>
#include <stdlib.h>
/*
    Autora: Luana Dantas
    Data: 27/3/26
*/
int fazSoma(a,b,c)
{
    int soma=0;
    if (a>0)
    {
        if (b<c)
        {
            for (int conta=b; conta<=c; conta++)
                if ((conta%a)==0)
                {
                    soma+=conta;
                }
        }

    }
    return soma;
}
int main()
{
    int x, y, z, resultado;
    printf("Digite os numeros: ");
    scanf("%d%d%d", &x,&y,&z);
    resultado=fazSoma(x,y,z);
    printf("%d",resultado);

    return 0;
}
