#include<stdio.h>
 
 void displayfactor(int ino)
 {
    int i=1;
    if(ino<=0)
    {
        ino-ino;
    }
    for(i=2;i<=(ino/2);i=i+2)
    {
        printf("%d\t",i);
    }

 }
 int main()
 {
    int ivalue=0;

    printf("enter number\n");
    scanf("%d",&ivalue);

    displayfactor(ivalue);
     
     
     return 0;
 }