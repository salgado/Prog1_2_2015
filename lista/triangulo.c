#include <stdio.h>
/*
Exerc - 6
Faça um programa para ler 3 lados de um 
triângulo e determinar que tipo de triângulo 
foi lido: isósceles, equilátero, escaleno.
*/
int main()
{
    int lado1, lado2, lado3;
    int continuar=0;
    
    do
    {
        printf("\n Entre com lado 1 : ");
        scanf("%d", &lado1);
        
        printf("\n Entre com lado 2 : ");
        scanf("%d", &lado2);
        
        printf("\n Entre com lado 3 : ");
        scanf("%d", &lado3);
        
        if ( (lado1 == lado2) && (lado2 == lado3) )
        {
            printf("\n Trriangulo equilatero\n");
        }else if ( (lado1 == lado2) || ( lado1 == lado3 ) ||
                    ( lado2 == lado3 ))
        {
            printf("\n Triangulo isosceles\n");
        } else
        {
            printf("\n Triangulo escaleno\n");
        }
        
        printf("\nDeseja continuar?(1-sim/0-Nao)");
        scanf("%d", &continuar);
        
    }while (continuar == 1);
    
    return 0;
}