#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};
Node* head;
void Insert(int x,int n)
{
    Node* temp1=new Node;
    temp1->data=x;
    temp1->next=NULL;
    if(n==1)
    {
       temp1->next=head;
       head=temp1;
    }
    Node* temp2=head;
    for(int i=0;i<n-2;i++)
    {
        temp2=temp->next;
    }
    temp1->next=temp2->next;
    temp2->next=temp1;
}
void print()
{
    Node*temp=head;
    cout<<"List: "<<endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main()
{
    head= NULL;
    cout<<"How many numbers?"<<endl;
    Insert(4,1);
    Insert(2,2);
    print();
}
