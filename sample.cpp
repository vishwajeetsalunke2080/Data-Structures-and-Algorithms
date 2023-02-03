#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

node *insert()
{
    int data;
    node *head = NULL;
    node *another = NULL;
    cout<<"enter linked list elements"<<endl;
    cin>>data;
    while(data!=-1)
    {
        node *created = new node(data);
        if(head==NULL)
        {
            head=created;
        }
        else{
            another->next = created;
        }
        another = created;
        cin>>data;
    }
    return head;
}

void traverse(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

node *insertBegin(node *head, int data)
{
    node *created = new node(data);
    created->next = head;
    return created;
}

node *insertAt(node *head, int data,int pos)
{
    node *other_head = head;
    node *created = new node(data);
    if(head==NULL)
    {
        insertBegin(head,data);
    }
    for (int i = 0; i < pos-1; i++)
    {
        other_head = other_head->next;
    }
    node *holder;
    holder = other_head->next;
    other_head->next = created;
    created->next = holder;
    return head;
}


int main()
{
    node *head = insert();
    traverse(head);
    // int data,pos;
    // cout<<"insert data"<<endl;
    // cin>>data;
    // head = insertBegin(head,data);
    // traverse(head);
    // head= insert();
    // traverse(head);
    return 0;
}
