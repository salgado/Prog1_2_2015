#include <stdio.h>


/* 
    - Trabalho 2 de Programacao de Computadores I - Retângulo
    - Curso de Sistemas de Informacao
    
    - Aluno: Felipe Gomes - Matricula: 0050011662
    
    - Professor: Alex Salgado
*/

void imprimirASCII()
{
    int o=0;
    
      do    
              {
              
              printf("%d %c \n",o,o);
              o++;
    
               }
              while(o<=255);
 
}

int main()
{
  
    int resposta, alt, comp, i, j, o;
    o=0;
    char nome[30], continuar;
    
    do
    {
           printf("Digite o seu nome:\n");
           scanf("%s", nome);
           
           
              
            imprimirASCII();

    
    
            printf("\n%s, para desenhar um Retangulo escolha qualquer character da lista acima e digite o numero correspondente:\n \n", nome); 
            scanf("%d", &resposta);
        
        
            printf("\n%s, digite um numero para o Comprimento do seu Retangulo, este numero devera ser maior do que 2:\n", nome);
            scanf("%d",&comp);
        
            while(comp<3)
            {
                printf("\n%s, voce digitou para o Comprimento, um numero menor ou igual a 2. \nPara desenhar o seu Retangulo, digite um numero maior do que 2:\n", nome);
                scanf("%d",&comp);
            }
        
            printf("\n%s, digite um numero para a Altura do seu Retangulo, este numero devera ser maior do que 2:\n", nome);
            scanf("%d",&alt);
        
            while(alt<3)
            {
                printf("\n%s, voce digitou para a Altura, um numero menor ou igual a 2. \nPara desenhar o seu Retangulo, digite um numero maior do que 2:\n", nome);
                scanf("%d",&alt);
            }

            printf("\n\nOlá, meu nome eh %s, e o meu retangulo ficou assim:\n\n", nome);
        
            for (i=1; i<=alt; i++)
            {
                for(j=1; j<=comp; j++)
                {
                    if (i>1 && j>1 && j<comp && i<alt)
                    {
                        printf(" ");
                    }
                
                    else
                    {
                        printf("%c",resposta);
                    }
                }
            printf("\n");
            }
        
            printf("\nDeseja continuar (s/n)?\n");
            scanf(" %c", &continuar);
        
    }
    while(continuar == 's');
    return 0;
}
