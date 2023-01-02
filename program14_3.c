#include<stdio.h>
#include<stdlib.h>
void display(int arr[],int iLength)
{
    int icnt=0,ievencnt=0;
for(icnt=0;icnt<iLength;icnt++)
{
    if(((arr[icnt]%2)==0)&&(arr[icnt]%5)==0)
    {
        printf("%d\t",arr[icnt]);
        ievencnt++;
    }
}
}

int main()
{
    int isize=0,i=0;
    int*p=NULL;
    printf("enter the numbr of elements :\n");
    scanf("%d",&isize);
    p=(int *)malloc(isize*sizeof(int));

    if(p==NULL)
    {
        printf("unable to allocate memory");
        return-1;
    }
    printf("enter elements:\n");
    for(i=0;i<isize;i++)
    {
        scanf("%d",&p[i]);
    }
    display(p,isize);
    free(p);
    return 0;

}