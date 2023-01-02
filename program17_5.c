#include<stdio.h>
#include<stdlib.h>

 void digitsum(int arr[],int iLength)
{
    int icnt=0,idigit=0,isum;
    for(icnt=0;icnt<iLength;icnt++)
    {
       if(arr[icnt]!=0)
       {
         idigit=icnt%10;
            arr[icnt]=icnt/10;
           isum=isum+idigit;
       }
    }
printf("summation of digit%d\t",isum);
}

int main()
{
    int iSize=0,i=0;
    int*p=NULL;
    printf("enter number of elements :\n");
    scanf("%d",&iSize);
    p=(int *)malloc(iSize*sizeof(int));
   
 printf("enter the elements:");
 for(i-0;i<iSize;i++)
 {
    scanf("%d",&p[i]);
 }

digitsum(p,iSize);

free(p);
    return 0;
}