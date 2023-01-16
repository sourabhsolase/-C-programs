//program28_4
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
int largest(PNODE Head )
{
    PNODE newn =NULL;
    int imax=0;
while(Head != NULL)
{
   if (Head->data>imax)
   {
    imax =Head->data;
  }
   Head=Head->next;
    
}
    return (imax);

}
int main()
{ 
    int iret =0;
    PNODE First =NULL;
    InsertFirst(&First,10);
     InsertFirst(&First,20);
     InsertFirst(&First,30);
     InsertFirst(&First,40);
    
  
     iret=largest(First);
     printf("largest node  is:%d\n",iret);
       return 0;

}