#include <stdio.h>

int main()
{
    int numero;
    int bin[10];
    int i=0, resto,j;
    
    printf("\n Entre com inteiro:");
    scanf("%d", &numero);
    
    while(numero != 0 )
    {
        resto = numero % 2;
        bin[i] = resto;
        i++;
        numero = numero / 2;
    }
    
    for(j=i-1 ; j>=0 ; j--)
    {
        printf("%d", bin[j]);
    }
    printf("\n");
    
    return 0;
}
