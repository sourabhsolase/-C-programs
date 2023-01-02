
#include<stdio.h>
#include<stdlib.h>

int counteven(int arr[],int iLength,int ino)
{
    int icnt=0,ievencnt=0,ioddcnt=0;;
    for(icnt=0;icnt<iLength;icnt++)
    {
       if((arr[icnt]%2)==0)
       {
        arr[icnt]==ino;
        ievencnt++;
       }
       else
       {
          arr[icnt]==ino;
          ioddcnt++;
       }
    }
          return ievencnt-ioddcnt;
}

int main()
{
    int iSize=0,iret=0,i=0,ivalue=0;
    int*p=NULL;
    printf("enter number of elements :\n");
    scanf("%d",&iSize);
    p=(int *)malloc(iSize*sizeof(int));
   
 printf("enter the elements:");
 for(i-0;i<iSize;i++)
 {
    scanf("%d",&p[i]);
 }

iret=counteven(p,iSize,ivalue);
printf("result is :%d",iret);
free(p);
    return 0;
}