/*
Resolucao de Cesar e Filipe
*/

#include <stdio.h>
int main()
{
    
        int o, vet[10];
        int resp;
        int ashow=0;
        
            for(o=0; o<10; o++)
            {    
            printf ("\nDigite um numero:");            
            
            scanf ("%d", &vet[o]);
            }    
            
            printf("Entre com uma chave:");
            scanf("%d", &resp);
            
            for(o=0; o<10; o++)
            {
                if(resp==vet[o])
                {
                    ashow=1;
                }
            }
            
            if (ashow==1)
            {
                printf("Chave encontrada!");
            }
            
            else
            {
                printf("Chave nao encontrada");
            }
            

    return 0;
}

