/*
15 - Faça o programa que apresenta a seguinte saída, perguntando ao usuário o
número máximo (no exemplo, 9). Este número deve ser sempre ímpar .
1 2 3 4 5 6 7 8 9
2 3 4 5 6 7 8
3 4 5 6 7
4 5 6
5
*/
#include <stdio.h>

int main()
{
    int num, j, i;
    
    
    printf("\nDigite um numero, esse numero deve ser impar:\n");
    scanf("%d", &num);
    while(num % 2 == 0)
    {
        printf("\nDesculpe mais o numero deve ser impar:\n");
        scanf("%d", &num);
    }
    printf("\n");
    
    for (i=0; i<=num; i++)
    {
        for (j=i + 1; j<=num; j++,num--)
        {
            printf(" %d ", j);
        }
     printf("\n");   
    }

    
    
    return 0;
}