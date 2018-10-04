#include <bits/stdc++.h>

using namespace std;

struct node{
    int s;
    node *next;
};

int main() {
    node *front,*rear,*temp,*current;
    front=NULL;
    int n;
    while( cin >> n )
    {
        if(n==-1)
            break;
        temp= new(node);
        temp->s=n;
        temp->next;
        if(front==NULL)
        {
            front=temp;
            current=temp;
        }
        else
        {
            current->next=temp;
            current=temp;
        }
    }
    rear=current;
    temp=front;
    while(temp)
    {
        cout << temp->s << " ";
        temp=temp->next;
    }
    cout << "\n\nEnter 1 to Add Rear or Enter 2 to Delete Front or 3 to exit : " << endl;
    while(cin >> n)
    {
        if(n==1)
        {
            int x;
            cout << "\nEnter the value you want to add : ";
            cin >> x ;
            temp= new(node);
            temp->s=x;
            rear->next=temp;
            rear=temp;
        }
        else if(n==2)
        {
            front=front->next;
        }
        temp=front;
        if(temp == NULL)
        {
            cout << "Queue is Null" << endl;
            return 0;
        }
        while(temp)
        {
            cout << temp->s << " ";
            temp=temp->next;
        }
        if(n==3)
            return 0;
        cout << "\n\nEnter 1 to Add Rear or Enter 2 to Delete Front or 3 to exit : " << endl;
    }
    return 0;
}
