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

class Stack
{
    public:
    int size;
    node *top;
    int count = 0;
    Stack(int size)
    {   
        top = NULL;
        this->size = size;
    }

    void push(int data)
    {
        node *created = new node(data);
        if(count<size)
        {              
            created->data = data;
            created->next = top;
            top = created;
            count++;   
        }
        else{
            cout<<"stack is full!"<<endl;
        }       
    }

    void pop()
    {
        if(!isEmpty())
        {
            node *temp = top;
            cout<<"element "<< temp->data<<" popped"<<endl;
            top = temp->next;
            count--;
        }else{
            cout<<"stack is empty"<<endl;
        }
    }

    bool isEmpty()
    {
        if(top==NULL)
        {
            return true;
        }
        else{
            return false;
        }
    }

    void peekTop()
    {
        node *temp = top;
        if(!isEmpty())
        {
            cout<<"top of stack is :"<<temp->data<<endl;
        }
        else{
            cout<<"stack is empty!"<<endl;
        }   
    }

    void peekBottom()
    {
        node *temp = top;
        if(!isEmpty())
        {
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            cout<<"bottom of stack is :"<<temp->data<<endl;
        }
        else{
            cout<<"stack is empty!"<<endl;
        }   
    }

    void traverse()
    {
        node *temp = top;
        if(!isEmpty())
        {
            while(temp!=NULL)
            {
                cout<<"|_"<<temp->data<<"_|"<<endl;
                temp = temp->next;
            }   
        }
        else{
            cout<<"stack is empty!"<<endl;
        }
    }
};

int main()
{
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.pop();
    s.pop();
    s.traverse();    
    s.peekBottom();
    s.peekTop();
    cout<<s.isEmpty()<<endl;
    
    return 0;
}
