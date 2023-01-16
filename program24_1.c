#include<stdio.h>

int main()
{
    int i=0;
    printf("\n_________________________________________________\n");
    printf("ASCII TABLE \n");

     printf("\n_________________________________________________\n");
     printf("character\t decimal\t Hex \toctal");

     for(i=0;i<=255;i++)
     {
        printf("%c\t %d\t \t %x\t %o\n",i,i,i,i);
     }
      printf("\n_________________________________________________\n");
      return 0;
}