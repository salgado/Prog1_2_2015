/*
    Execrcio 13
*/
#include <stdio.h>
int main()
{
    float peso, salario;
    char sexo;
    int i;
    float media_peso, soma_peso=0;
    float media_sal_h, soma_sal_h=0;
    int i_peso=0, i_sal_h=0;
    
    for(i=1; i<=4; i++)
    {
        printf("\n Entre com Peso:");
        scanf("%f", &peso);
        
        printf("\n Entre com salario:");
        scanf("%f", &salario);
        
        printf("\n Entre com sexo:");
        scanf(" %c", &sexo);
        
        if ( sexo == 'm')
        {
            if( (salario>=1000) && (salario<=3000) )
            {
                soma_sal_h = soma_sal_h + salario;
                i_sal_h++;
            }
        }
        else
        {
            if(peso>50)
            {
                soma_peso = soma_peso + salario;
                i_peso++;
            }
        }
        
    }
    
    printf("\n media_sal_h = %f", (float) soma_sal_h/i_sal_h );
    printf("\n soma_peso = %f",  (float) soma_peso/i_peso );
    
    return 0;
}