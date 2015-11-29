/*
Faça um programa em C, que leia uma string de no máximo 140 caracteres, 
e imprima quantas vezes aparece 
o símbolo de hashtag #. No exemplo acima, o programa iria funcionar assim:
*/
#include <stdio.h>

int main()
{
    int i, hashtag=0;
    char tweet[140];
    
    printf("\nEntre com um tweet:");
    scanf("%s", tweet);  //melhor usar o gets
    
    for(i=0; i< 140; i++)
    {
        if (tweet[i] == '#')
        {
            hashtag++;
        }
    }
    
    printf("Este tweet possui %d hashtags.", hashtag);
    
    return 0;
}