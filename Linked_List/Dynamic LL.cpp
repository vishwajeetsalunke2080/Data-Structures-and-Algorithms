#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
Node *insert()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *prev = NULL;
    while (data != -1)
    {
        Node *created = new Node(data);
        if (head == NULL)
        {
            head = created;
        }
        else
        {
            prev->next = created;
        }
        prev = created;
        cin >> data;
    }
    return head;
}

Node *insertBegin(Node *head ,int data)
{
    Node *dummy = new Node(data);
    if(head==NULL) return dummy;
    head -> next = dummy;
    head = dummy;
    return head;
}

void traverse(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << "\n";
        curr = curr->next;
    }
}
int main()
{
    Node *head = NULL;
    head = insert();
    traverse(head);
    head = insertBegin(head,20);
    traverse(head);
    return 0;
}
