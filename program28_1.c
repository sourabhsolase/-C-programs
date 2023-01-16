//program28_3
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
int addition(PNODE Head )
{
    PNODE newn =NULL;
    int isum=0;
while(Head != NULL)
{
   isum=isum+Head->data;
   Head=Head->next;
}
    return (isum);

}
int main()
{ 
    int iret =0;
    PNODE First =NULL;
    InsertFirst(&First,10);
     InsertFirst(&First,20);
     InsertFirst(&First,30);
     InsertFirst(&First,40);
    
  
     iret=addition(First);
     printf("addition  is:%d\n",iret);
       return 0;

}