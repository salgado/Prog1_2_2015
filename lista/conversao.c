#include <stdio.h>

int main()
{
    float cel;  
    float far;

    printf("\nEntre com celsius:");
    scanf("%f", &cel);

    //calcular conversao
    far = (1.8*cel) + 32;
    
    //imprimir o resultado
    printf("fahrenheit = %.2f", far);
    
    return 0;
}