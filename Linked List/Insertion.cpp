#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

void print(Node *&head)
{
    Node *temp=head;
    while(temp != NULL)
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<endl;
}

int getLength(Node *&head)
{
    int count=0;
    Node *temp=head;
    while(temp != NULL)
    {
        count++;
        temp=temp->next;
    }
    // cout<<"Total Count: "<<count<<endl;
    return count;
}

void insertHead(Node*&head,int data)
{
    Node *newNode=new Node(data);
    newNode->next=head;
    head=newNode;
}

void insertTail(Node*&tail,int data)
{
    Node *newNode=new Node(data);
    tail->next=newNode;
    tail=newNode;
}

void insertionPos(Node*&head,Node*&tail,int position,int data)
{
    int length=getLength(head);
    if(position==1)
    {
        insertHead(head,data);
        return;
    }
    if(position>length)
    {
        insertTail(tail,data);
        return;
    }
    else{
        Node *ins=new Node(data);
        Node *prev=NULL;
        Node *curr=head;
        while(position!=1)
        {
            prev=curr;
            curr=curr->next;
            position--;
        }
        prev->next=ins;
        ins->next=curr;
    }
}

int main()
{
    Node *first=new Node(10);
    Node *second=new Node(20);
    Node *third=new Node(30);
    Node *fourth=new Node(40);
    Node *fifth=new Node(50);
   
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    // insertHead(first,12);
    // insertTail(fifth,34);
    Node *head=first;
    Node *tail=fifth;
    // insertHead(first,23);
    insertionPos(head,tail,6,234);
     print(head);
    //  getLength(first);
}
