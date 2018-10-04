#include <stdio.h>
#include <malloc.h>

struct node{
    int a;
    node *next;
};

node* input()
{
    node *temp,*tem,*current,*start;


    int x,i=1;

    while(scanf("%d",&x)==1)
    {
        if(i==1)
        {
            current=(node *)malloc(sizeof(node));
            current->a=x;
            current->next=NULL;
            start=current;
            i++;
            continue;
        }
        current=start;
        if(x<current->a)
        {
            temp=(node *)malloc(sizeof(node));
            temp->a=x;
            temp->next=current;
            start=temp;
            continue;
        }
        current=start;
        int flag=0;
        while(current!=NULL)
        {
            if(current->next==NULL)
            {
            temp=(node *)malloc(sizeof(node));
            temp->a=x;
            temp->next=NULL;
            current->next=temp;
            current=NULL;
            continue;
            }
            tem=current->next;
            int z= tem->a;
            if(x<tem->a)
            {
            temp=(node *)malloc(sizeof(node));
            temp->a=x;
            temp->next=tem;
            current->next=temp;
            flag=1;
            }
          current=current->next;
          if(flag==1)
            break;
        }

    }
    return start;

}

int main() {

    node *start,*current;


    start=input();

    while(start!=NULL)
    {
        printf("%d ",start->a);
        start=start->next;
    }
}
