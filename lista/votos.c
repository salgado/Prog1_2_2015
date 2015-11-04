#include <stdio.h>
/*
Exercício 8
*/
int main()
{
    int candidato1=0, candidato2=0, total=0, voto=0;
    float perc1, perc2;
    int continua=0;
    
    do{
        printf("\n ---------- Eleicao 2015 --------");
        printf("\n 1 - Candidato 1");
        printf("\n 2 - Candidato 2");
        printf("\n -----------------");
        printf("\n Escolha seu voto:");
        scanf("%d", &voto );
        
        if(voto == 1)
        {
            candidato1++;
            total++;
        } else if (voto == 2 )
        {
            candidato2++;
            total++;
        }
        
        printf("\nDeseja continuar?(1-Sim/0-Nao)");
        scanf("%d", &continua);
        
    }while (continua == 1);
    
    perc1 = ( (float)candidato1/total ) * 100.00;
    perc2 = ( (float)candidato2/total ) * 100.00;
    
    printf("\n Fim das eleicoes");
    printf("\n Candidato 1 com %.2f%% dos votos", perc1);
    printf("\n Candidato 2 com %.2f%% dos votos", perc2);
    printf("\n Total de votos %d", total);
    
    return 0;
}
