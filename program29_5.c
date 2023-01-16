//program29_2
#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node
{
    int data;
     struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head,int no)
{
    PNODE newn =NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->next=NULL;
    newn->data=no;

    if(*Head==NULL)
    {
        *Head=newn;
    }
    else
    {
        newn->next=*Head;
        *Head=newn;
    }
}
int secmax(PNODE Head )
{
    PNODE newn =NULL;
    int idigit=0,imin=0;
    if(Head->data<0)
    {
        Head->data=-Head->data;
    }
while(Head != NULL)
{
while(Head->data!=0)
{
    idigit=Head->data%10;
   if(idigit<imin)
   {
    imin=idigit;
   }
     Head->data=Head->data/10;
     
 
}
Head=Head->next;   
}
 
return imin;
}
int main()
{ 
    int iret =0;
    PNODE First =NULL;
  InsertFirst(&First,110);
     InsertFirst(&First,230);
     InsertFirst(&First,20);
     InsertFirst(&First,240);
   InsertFirst(&First,640);
     iret=secmax(First);
     printf(" second maximum number is:%d\t",iret);
       return 0;

}