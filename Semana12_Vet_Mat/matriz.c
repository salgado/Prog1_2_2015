#include <stdio.h>

int main()
{
    float nota[3][5]; //matriz 3 linhas x 5 colunas
    int i, j;
    
    for(i=0; i<=2; i++)
    {
        printf("\n Digite as notas da AV%d", i+1);
    
        for(j=0;j<=4;j++)
        {
            printf("\n Entre com nota %d: ", j+1);
            scanf("%f", &nota[i][j]);
        }
        
    }
    
    //imprimir todas as notas da av1
    printf("\n Notas da AV1\n");
    for(j=0;j<=4;j++)
    {
        printf("%.2f - ", nota[0][j]);
    }
    
    //todas as notas do ultimo aluno
    printf("\n Notas do ultimo aluno\n");
    for(i=0;i<=2;i++)
    {
        printf("%f - ", nota[i][4]);
    }
    
    //todas as notas
    printf("\n As notas digitadas foram:\n ");
    for(i=0; i<=2; i++)
    {
        printf("\n AV%d : ", i+1);
        for(j=0;j<=4;j++)
        {
            printf(" %.2f - ", nota[i][j]);
        }
        
    }
    
    
    return 0;

}