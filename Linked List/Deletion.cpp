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
    return count;
}

void deleteHead(Node *&head)
{
    Node *temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
}

void deleteTail(Node *&head,Node *tail)
{
    Node *prev=head;
    while(prev->next !=tail)
    {
        prev=prev->next;
    }
    prev->next=NULL;
    delete tail;
    tail=prev;
}

void deleteAny(Node *&head,Node *&tail,int position)
{
    int length=getLength(head);
    if(position==1)
    {
        deleteHead(head);
        return;
    }
    if(position==length)
    {
        deleteTail(head,tail);
        return;
    }
    else{
        Node *prev=NULL;
        Node *curr=head;
        while(position!=1)
        {
            prev=curr;
            curr=curr->next;
            position--;
        }
        prev->next=curr->next;
        curr->next=NULL;
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
    
    Node *head=first;
    Node *tail=fifth;
  
    deleteAny(head,tail,5);
    print(head);
  
}
