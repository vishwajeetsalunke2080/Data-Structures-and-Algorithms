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

class stack
{
   public:
   node *top;
   stack()
   {
        top = NULL;
   }

   void push(int data)
   {
        node *temp = new node(data);
        if(!temp)
        {
            cout<<"Stack is Full!!"<<endl;
        }
            temp->data = data;
            temp->next = top;
            top = temp;      
   }

   void traverse()
   {
        node *temp = top;
        if(top==NULL)
        {
            cout<<"stack is empty"<<endl;
        }
            while(temp!=NULL)
            {
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<endl;
   }

   void pop()
   {
        node *temp = top;
        if(top==NULL)
        {
            cout<<"stack is empty";
        }else{
            cout<<"element "<<temp->data<<" popped"<<endl;
            top = temp->next;
        }
   }

   void stackTop()
   {
        if(!isEmpty())
        {
            cout<<"stack top is "<<top->data<<endl;
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

   void stackBottom()
   {
        node *temp = top;
        if(temp==NULL)
        {
            cout<<"stack is empty!!"<<endl;
        }
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        cout<<"stack bottom is "<<temp->data<<endl;
   }
};

int main()
{
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    s.traverse();
    s.pop();
    s.pop();
    s.traverse();
    s.stackTop();
    s.stackBottom();
    if(s.isEmpty())
    {
        cout<<"stack is empty"<<endl;
    }else{
        cout<<"stack is not empty"<<endl;
    }

    return 0;
}