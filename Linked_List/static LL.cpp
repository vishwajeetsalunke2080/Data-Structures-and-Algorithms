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
        this->next=NULL;
    }    

};

void print(node *head)
{   
    node *curr = head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr = curr->next;
    }

};

int main()
{
    node a(10),b(20),c(30),d(40),e(50);
    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=&e;
    node *head = &a;
    print(head);
    return 0;
}
