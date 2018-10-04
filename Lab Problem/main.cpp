#include <bits/stdc++.h>

using namespace std;

struct node{
    int s;
    node *next;
};

int main() {

    node *top,*temp;
    top=NULL;
    int n;
    while( cin >> n )
    {
        if(n==-1)
            break;
        temp= new(node);
        temp->s=n;
        temp->next;
        if(top==NULL)
        {
            top=temp;
        }
        else
        {
            temp->next=top;
            top=temp;
        }
    }
    temp=top;
    while(temp)
    {
        cout << temp->s << " ";
        temp=temp->next;
    }
    cout << "\n\nEnter 1 to Push or Enter 2 to Pop or 3 to exit : " << endl;
    while(cin >> n)
    {
        if(n==1)
        {
            int x;
            cout << "\nEnter the value you want to add : ";
            cin >> x ;
            temp= new(node);
            temp->s=x;
            temp->next=top;
            top=temp;
        }
         else if(n==2)
        {
            top=top->next;
        }
         temp=top;
         if(temp == NULL)
         {
             cout << "Stack is Null" << endl;
             return 0;
         }
         while(temp)
         {
            cout << temp->s << " ";
            temp=temp->next;
         }
         if(n==3)
            return 0;
        cout << "\n\nEnter 1 to Push or Enter 2 to Pop or 3 to exit : " << endl;
    }
    return 0;
}
