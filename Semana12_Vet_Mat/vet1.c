#include <stdio.h>
/**************************************  
* Trabalho 2 de Programacao de Computadores I - Vetores 
* Curso de Sistemas da informacao 
* Aluno: SeuNome - matricula: 00000000 
* Professor: Alex Salgado 
***************************************/
int main()
{
    int i;
    float av1[10];  //nota de 10 alunos
    float menor = 999;
    
    for(i=0; i<=9; i++)
    {
        printf("\n Entre com av1 do aluno %d : ", i+1 );
        scanf("%f", &av1[i]);
        if (av1[i] < menor)
        {
            menor = av1[i];
        }
    }
    
    //percorrer o vetor e imprimir as menores notas
    for(i=0;i<=9;i++)
    {
        if (av1[i] == menor )
        {
            printf("\n Hall das menores notas! Aluno %d", i+1);
        }
    }
    
    return 0;
}