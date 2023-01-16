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
int additoneven(PNODE Head )
{
    PNODE newn =NULL;
    int i=0;
    
while(Head != NULL)
{

  if(((Head->data)%2)==0)
  {
    
  i=i+Head->data;
  } 
   Head=Head->next;
}
  
return i;
}
int main()
{ 
    int iret =0;
    PNODE First =NULL;
  InsertFirst(&First,11);
     InsertFirst(&First,20);
     InsertFirst(&First,32);
     InsertFirst(&First,41);
   
     iret=additoneven(First);
     printf(" addition of even number is:%d\t",iret);
       return 0;

}