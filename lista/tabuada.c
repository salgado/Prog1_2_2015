#include<stdio.h>

int main ()
{ int i, num;

   //printf ("Entre com um número:");
   //scanf ("%d", &num);
   
   for(num=1; num<10; num++)
   {
    printf("\nTabuada de %d\n", num);
    
        for (i=1; i<11; i++)
        {
            printf("\n %d x %d = %d", num, i, (num*i));  
        }
    printf("\n");
       
   }
    
    return 0;
}