#include <stdio.h>
int main()
{
  float perc1, perc2;
  int votos1=0, votos2=0, voto;
  int continuar;
  float total=0.00;

  do
  {
    printf("1-Candidato 1 \n");
    printf("2-Candidato 2 \n");
    printf("Escolha voto \n");
    scanf("%d", &voto);
    
    if (voto == 1)
    {
      votos1++;
    }
    if (voto == 2)
    {
      votos2++;
    }
    
    printf("\n Deseja continuar(1-s/0-n)");
    scanf("%d", &continuar);
    
  } while (continuar == 1);
  
  total = votos1 + votos2;
  
  perc1 = (votos1/total);
  perc2 = (votos2/total);
  
  printf ( "\nCandidato 1 com %.2f%%", perc1*100);
  printf ( "\nCandidato 2 com %.2f%% \n", perc2*100);
  
  return 0;
  
}