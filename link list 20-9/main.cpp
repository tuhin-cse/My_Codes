#include <stdio.h>
#include <malloc.h>


struct node{
    int a;
    node *next,*pre;
};

node* add(node *c,int p,int v)

{
    node *s;
    s=c;
     if(p==1)
    {
        node *temp;
        temp=(node *)malloc(sizeof(node));
        temp->a=v;
        temp->next=c;
        temp->pre=NULL;
        return temp;
    }
    for(int i=2;i<p;i++)
        c=c->next;
    node *temp;
    temp=(node *)malloc(sizeof(node));
    temp->a=v;
    temp->next=c->next;
    c->next=temp;
    return s;

}

node* input(node *current)
{
    node *temp,*end;

    if(scanf("%d",&current->a)==1)
    {
        current->next=NULL;
        temp=(node *)malloc(sizeof(node));
        current->next=temp;
        temp->pre=current;
        end=input(temp);

    }
    else
        return current->pre;
    return end;
}

int main() {

    node *start,*current,*end;

    start=(node *)malloc(sizeof(node));

    start->pre=NULL;

    end=input(start);

    current=start;

    int l=0;

    while(current->next!=NULL)
    {
        printf("%d ",current->a);
        current=current->next;

    }

    printf("\n \nEnter position and the nymber you want to add:");
    current=start;
    int p,e,i;
    printf("\n");

    scanf("%d %d",&p,&e);


    start= add(start,p,e);

    current=start;

    while(current->next!=NULL)
    {
        printf("%d ",current->a);
        current=current->next;

    }

     printf("\n \nEnter position you want to delete:");
     scanf("%d",&p);

     current=start;
     if(p==1)
        start = start->next;
     for(i=2;i<p;i++)
     {
        current=current->next;
     }

     current->next=current->next->next;

     current=start;
     while(current->next!=NULL)
    {
        printf("%d ",current->a);
        current=current->next;
    }
    printf("\n \n");
    return 0;
}
