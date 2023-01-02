#include<stdio.h>
#include<stdlib.h>

int product(int arr[],int ilength)
{
    int icnt=0,iodd=1;
    for(icnt=0;icnt<ilength;icnt++)
    {
         if((arr[icnt]%2)!=0)
         {
             iodd=iodd*=arr[icnt];
               
        }

    }      
   return iodd;
}
int main()
{
    int isize=0,i=0;
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
    
       iret=product(p,isize);
       
        printf(" product is :%d\n",iret);
       
    free(p);
    return 0;
      
}