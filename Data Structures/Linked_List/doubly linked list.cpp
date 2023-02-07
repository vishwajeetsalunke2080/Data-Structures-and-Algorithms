#include<iostream>
using namespace std;
class node
{
  public:
  int data;
  node *next;
  node *prev;
  node(int data)
  {
    this->data = data;
    this->next = NULL;
    this->prev = NULL;
  }
};

node *insertBegin(int data,node *head)
{
    node *created = new node(data);
    created->next = head;
    head->prev = created;
    head = created;
    return head;
}

node *insertLast(int data, node* head)
{
    node *created = new node(data);
    node *temp = head;
    if(temp==NULL)
    {
        temp = created;
        temp->next = NULL;
        created->prev = NULL;
        return temp;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next = created;
    created->prev = temp;
    return head;
}

void traverseLinearly(node *head)
{
    node *temp = head;
    if(temp == NULL)
    {
        cout<<"list is empty!!"<<endl;
    }
    else
    {
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;   
        }
        cout<<endl;
    }
}

void traverseFromEnd(node *head)
{
    node *temp = head;
    if(temp == NULL)
    {
        cout<<"list is empty!!"<<endl;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->prev;
        }
        cout<<endl;
        cout<<endl;
    }
}
int main()
{
    node *head = NULL;
    head = insertLast(2,head);
    head = insertLast(4,head);
    head = insertLast(6,head);
    head = insertLast(8,head);
    head = insertLast(10,head);
    head = insertLast(12,head);
    head = insertBegin(70,head);
    traverseLinearly(head);
    traverseFromEnd(head);
    return 0;
}