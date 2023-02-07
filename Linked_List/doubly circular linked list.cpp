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
node *insert(int data,node *head)
{
    node *created = new node(data);
    node *temp = head;
    if(head==NULL)
    {
        head = created;
        head->next = head;
        head->prev = head;
        return head;
    }
    else
    {
        while(temp->next!=head)
        {
            temp = temp->next;
        }
        created->next = head;
        created->prev = temp;
        head->prev = created;
        temp->next = created;

    }
    return head;
}

void traverse(node *head)
{
    node *temp = head;
    if(temp==NULL)
    {
        cout<<"list is empty"<<endl;
    }
    do
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp!=head);
    cout<<endl;
}

void Inverse(node *head)
{
    node *temp = head;
    while(temp->next!=head)
    {
        temp = temp->next;
    }
    do
    {
        cout<<temp->data<<" ";
        temp = temp->prev;
    }while(temp->next!=head || head->prev!=temp);
    cout<<endl;
}

int main()
{
    node *head = NULL;
    head = insert(1,head);
    head = insert(4,head);
    head = insert(6,head);
    head = insert(8,head);
    head = insert(10,head);
    traverse(head);
    Inverse(head);
    return 0;
}