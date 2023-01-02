#include<stdio.h>
#include<stdlib.h>

int  check(int arr[],int ilength,int ino)
{
    int icnt=0;
    for(icnt=0;icnt<ilength;icnt++)
    {
         if(arr[icnt]==ino)
         {
            
        break;
        }
    }      
    
    if(icnt==ilength)
    {
        return -1;
    }
    else
    {
        return icnt;
    }
}
int main()
{
    int isize=0,i=0,ivalue=0;
    int*p=NULL;
    int iret=0;

    printf("enter the number elements:\n");
    scanf("%d",&isize);

    p=(int *)malloc(isize*sizeof(int));

    if(p==NULL)
    {
        printf("unable to to allocate memory");
        return -1;
    }
    printf("enter the elements :\n");
    for(i=0;i<isize;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("enter the number:\n");
    scanf("%d",&ivalue);
       iret=check(p,isize,ivalue);
       if(iret==-1)
       {
        printf("%d there is no sumch number :\n",iret);
       }
       else{
        printf("%d frist  occured in arry is :\n",iret);
       }
    free(p);
    return 0;
      
}