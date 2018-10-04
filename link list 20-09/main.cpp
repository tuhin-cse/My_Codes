#include <stdio.h>
#include <malloc.h>

struct node{
    int a;
    node *next;
    node *pre;

};

node* input(node *current,int i)
{
  node *temp,*finish;
  scanf("%d",&current->a);
  current->next=NULL;
  if(i==5)
      return current;
  temp = (node *)malloc(sizeof(node));
  current->next=temp;
  temp->pre=current;
  i++;
  finish=input(temp,i);
  return finish;

}

int main()
{
    node *start,*current,*finish;
    start = (node *)malloc(sizeof(node));
    start->pre=NULL;
    finish = input(start,1);

    current = start;
    while(current!=NULL)
    {
        printf("%d ",current->a);
        current= current->next;
    }

    printf("\n");

    while(finish!=NULL)
    {
        printf("%d ",finish->a);
        finish=finish->pre;
    }

    return 0;
}
