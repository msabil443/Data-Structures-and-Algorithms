#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

int main()
{
    node *start=nullptr, *last=nullptr, *temp=nullptr;
    start=new node();
    last=start;
    cin>>start->data;
    start->next=NULL;
    int i=5;
    while(i--)
    {
        temp=new node();
        cin>>temp->data;
        temp->next=nullptr;
        last->next=temp;
        last=temp;
        temp=nullptr;
    }
    temp=start;
    while(temp)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    return 0;
}