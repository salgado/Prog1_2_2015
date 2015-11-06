#include <stdio.h>

int main()
{
    int num, i, f, cont;
    int vetor[100];
    
    printf("\n Entre com numero:");
    scanf("%d", &num);
    
    for(i=0;i<num;i++)
    {
        vetor[i] = i+1;
    }
    
    f=num;
    i=0;
    while(i<=f)
    {
        for(cont=i; cont<f;cont++)
        {
            printf("%d", cont+1);
        }
        printf("\n");
        i++;
        f--;
    }
    
    
    return 0;
}
