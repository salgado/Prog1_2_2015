/*
 Resolucao de Matheus Avila, Matheus Vinnicius e Karolyne Marchon
*/

#include<stdio.h>

int main()
{ 
    int num,resto,divisao;
    int bin[10],i=0,j;
    
    printf("Entre com um número inteiro:");
    scanf("%d",&num);
    
    do
    { 
        resto = num%2;
        bin[i] = resto;
        divisao = num/2;
        num = divisao;
        i++;
    } while(divisao>0);
    
    for(j=i-1; j>=0;j--)
    { printf("%d ",bin[j]);
    }
 return 0;
    
}
        