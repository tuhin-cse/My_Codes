#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node
{
    int data;
    float a;
    node * link;
};

int main()
{
    node * start;

    start = ( node * ) malloc ( sizeof (node) );

    start->data=10;
    start->a=3.5;
    start->link= NULL;

    printf("%d %f\n",start->data,start->a);
    printf("%u",start);
    return 0;
}

