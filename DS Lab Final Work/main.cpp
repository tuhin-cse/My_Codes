#include <bits/stdc++.h>

using namespace std;


struct Data{
    string Name;
    int Roll,Total,sub[6];
};

struct Node{
    Data dt;
    Node *next;
};

void compareSwap(Node *a,Node *b);
Node* input(Node *a,Node *Start);

int main()
{
    Node *Start,*Current,*temp;
    Start=input(NULL,NULL);

    Current=Start;
    while(Current->next)
    {
        temp=Current->next;
        while(temp)
        {
            compareSwap(Current,temp);
            temp=temp->next;
        }
        Current=Current->next;
    }


    Current=Start;
    cout << "\n\n";
    while(Current)
    {
        cout << "Student Name : "<< Current->dt.Name << endl;
        cout << "Student Id : "<< Current->dt.Roll << endl;
        cout << "Total Number : "<<Current->dt.Total << endl;
        cout << "Numbers : ";
        for(int i=0;i<6;i++)
            cout << Current->dt.sub[i] << " " ;
        cout << "\n" << endl;

        Current=Current->next;
    }

}

Node* input(Node *a,Node *Start)
{
    string s;
    cout << "Enter Student Name : " ;
    if(Start!=NULL)
        getchar();
    getline(cin,s);
    if(s=="0")
        return Start;
    Node *temp=new(Node);
    temp->next=NULL;
    temp->dt.Name=s;
    cout << "Enter Roll : " ;
    cin >> temp->dt.Roll ;
    cout << "Enter Number of 6 Subject : " ;
    temp->dt.Total=0;
    for(int i=0;i<6;i++)
    {
        cin >> temp->dt.sub[i];
        temp->dt.Total+=temp->dt.sub[i];
    }
    if(Start==NULL)
    {
        Start=temp;
        a=temp;
    }
    else
    {
        a->next=temp;
        a=temp;
    }
    input(a,Start);
    return Start;
}

void compareSwap(Node *a,Node *b)
{
    if(a->dt.Total<b->dt.Total)
    {
         Data aa= a->dt;
         a->dt = b->dt;
         b->dt = aa;
         return;
    }
    if(a->dt.Total==b->dt.Total)
    {
        int i=0;
        while(a->dt.sub[i]==b->dt.sub[i] && i < 6)
           i++;

        if(a->dt.sub[i]<b->dt.sub[i])
          {
           Data aa= a->dt;
           a->dt = b->dt;
           b->dt = aa;
           return;
          }
        if(a->dt.Roll>b->dt.Roll)
        {
           Data aa= a->dt;
           a->dt = b->dt;
           b->dt = aa;
           return;
         }
    }
    return;
}
