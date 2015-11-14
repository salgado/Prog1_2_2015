#include <stdio.h>
int main()
{
    int num1, num2, i, aux;
    num1 = 0;
    num2 = 1;
    
    printf("%d ", num1);
    
    for(i=2; i<=6; i++)
    {
        aux = num1;
        num1 = num2;
        num2 = num1 + aux;
    
        printf("%d ", num2);

    }

    return 0;
}

    
