#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node
{
    int data;
    node *link;
};

int main()
{
    node *start;

    start = (node *) malloc(sizeof(node));

    start->data=10;
    start->link= NULL;

    printf("%d \n",start->data);
    printf("%u",start);
    return 0;
}
