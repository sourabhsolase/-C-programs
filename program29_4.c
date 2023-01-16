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
    int imax=0,simax=0;
    
while(Head != NULL)
{
if(Head->data>imax)
{
simax=imax;
imax=Head->data;
}
else if(Head->data>simax)
{
simax=Head->data;
}
 
   Head=Head->next;
}
  
return simax;
}
int main()
{ 
    int iret =0;
    PNODE First =NULL;
  InsertFirst(&First,110);
     InsertFirst(&First,230);
     InsertFirst(&First,320);
     InsertFirst(&First,240);
   
     iret=secmax(First);
     printf(" second maximum number is:%d\t",iret);
       return 0;

}