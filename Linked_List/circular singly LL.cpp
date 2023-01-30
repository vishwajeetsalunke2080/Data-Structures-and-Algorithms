#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

void traverse(node *head)
{
    node *curr = head;
    do{
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    while(curr!=head);
    
}

node *insert()
{
    int data;
    node *head = NULL;
    node *prev = NULL;
    cin>>data;
    while(data!=-1)
    {
        node *created = new node(data);
        if(head==NULL)
        {
            head=created;
        }
        else{
            prev->next=created;
        }
        prev=created;
        cin>>data;
    }
    prev->next=head;
    return head;
}

int main()
{
    node *head = NULL;
    // node *curr;
    head = insert();
    // traverse(head);
    // curr = head;
    // cout<<curr->data<<"\n";
    // curr = curr->next;
    // cout<<curr->data<<"\n";
    // curr = curr->next;
    // cout<<curr->data<<"\n";
    // curr = curr->next;
    // cout<<curr->data<<"\n";
    // curr = curr->next;
    traverse(head);
    return 0;
}
