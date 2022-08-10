//Descipline or Regret Choose one!!

//this is the demonstration for the linked list data structures
//here I am creating a linked list with various functions :)
#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;//reference type...

};

void printll (Node* n)
{
    while (n!=NULL)
    {
        cout<<n->data<<"->";
        n=n->next;
    }
    cout<<"NULL"<<endl;
}

int main ()
{
    Node* head=NULL;
    Node* second=NULL;
    Node* third=NULL;
    Node* fourth=NULL;
    Node* fifth=NULL;

    head=new Node();
    second=new Node();
    third=new Node();

    head->data =1;
    head->next =second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=NULL;

    printll(head);

}   