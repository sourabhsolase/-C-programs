#include<stdio.h>
#include<stdlib.h>

int differnce(int arr[],int iLength)
{
    int icnt=0,ievensum=0,ioddsum=0,ievencnt=0,ioddcnt=0;
    for(icnt=0;icnt<iLength;icnt++)
    {
        if((arr[icnt]%2)==0)
        {
            ievensum=ievensum+arr[icnt];
                ievencnt++;
        }
        else
        {
            ioddsum=ioddsum+arr[icnt];
            ioddcnt++;
        }
    }
          return ievensum-ioddsum;
}

int main()
{
    int iSize=0,iret=0,i=0;
    int*p=NULL;
    printf("enter number of elements :\n");
    scanf("%d",&iSize);
    p=(int *)malloc(iSize*sizeof(int));
   
 printf("enter the elements:");
 for(i-0;i<iSize;i++)
 {
    scanf("%d",&p[i]);
 }

iret=differnce(p,iSize);
printf("result is :%d",iret);
free(p);
    return 0;
}