#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool check(int arr[],int ilength,int ino)
{
    int icnt=0,icheck=0;
    for(icnt=0;icnt<ilength;icnt++)
    {
         if(arr[icnt]==ino)
         {
            icheck=ino;
        
        }
    }
    
    if(icheck==ino)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int isize=0,i=0,ivalue=0;
    int*p=NULL;
    bool bret=false;

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
    printf("enter the number:\n");
    scanf("%d",&ivalue);
       bret=check(p,isize,ivalue);
       if(bret==true)
       {
        printf("%d is present :",ivalue);
       }
       else{
        printf("%d is not present",ivalue);
       }
    free(p);
    return 0;
      
}
