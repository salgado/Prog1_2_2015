/*
1a. Questão
Faça um programa em C que leia o salário dos 2.500 funcionários de uma empresa através do teclado.
Ao final da leitura, o programa deverá imprimir na tela:
A média salarial dos funcionários da empresa;
A quantidade de funcionários que possuem salário acima da média.
*/
#include <stdio.h>

int main()
{
    float salario[2500], media, soma=0;
    int qtd_func=0, i;
    
    for(i=0; i<2500; i++)
    {
        printf("\n Entre com salario func %d", i+1)
        scanf("%f", &salario[i]);
        soma = soma + salario[i];
    }
    
    media = soma / 2500;
    
    for(i=0; i < 2500; i++)
    {
        if (salario[i] > media)
        {
            qtd_func++;
        }
    }
    printf("\nMedia = %f", media);
    printf( "\n Qtd Salarios maiores que media = %d", qtd_func);
    
    return 0;
}