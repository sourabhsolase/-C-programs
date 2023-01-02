#include<stdio.h>
#include<stdlib.h>

int frequency(int arr[],int ilength)
{
    int icnt=0,icheck=0,ino=11;
    for(icnt=0;icnt<ilength;icnt++)
    {
         if(arr[icnt]==ino)
         {
            icheck++;
    
        }
    }
       
        
   return icheck;
    
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
    }
    printf("enter the elements :\n");
    for(i=0;i<isize;i++)
    {
        scanf("%d",&p[i]);
    }
    
       iret=frequency(p,isize);
       printf("frequency of 11 is%d",iret);
    free(p);
    return 0;
      
}
