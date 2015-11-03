#include <stdio.h>
#include <math.h>
/*
Exercicio 7
Em qualquer triângulo retângulo, o quadrado do comprimento 
da hipotenusa é igual à soma dos quadrados dos comprimentos 
dos catetos. Faça um programa para ler 2 catetos de um 
triângulo retângulo e calcular a hipotenusa.
*/
int main()
{
    float c1, c2, hipo;
    
    printf("\n Entre com cateto 1 :");
    scanf("%f", &c1);
    
    printf("\n Entre com cateto 2 :");
    scanf("%f", &c2);
    
    hipo = sqrt( pow(c1, 2) + pow(c2, 2) );
    
    printf ("\n hipotenusa = %f \n", hipo );
    
    return 0;
}
