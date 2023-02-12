#include<iostream>
using namespace std;

class stack
{
    public:
    int *arr;
    int size;
    int top;
    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int data)
    {   
        if(top<size-1)
        {
            top++;
            arr[top] = data;
            cout<<"element "<<data<<" pushed on stack"<<endl;
        }
        else{
            cout<<"cannot push "<<data<<", stack is full "<<endl;
        }
    }

    void pop()
    {
        if(isEmpty())
        {
            cout<<"stack is already empty "<<endl;
        }else{
            cout<<"element "<<arr[top]<<" popped"<<endl;
            arr[top]=0;
            top--;
        }
    }

    void peek()
    {
        if(isEmpty())
        {
            cout<<"stack is empty "<<endl;
        }
        else{
            cout<<"stack top is :"<<arr[top]<<endl;
        }
    }

    bool isEmpty()
    {
        if(top==-1)
        {
            return true;
        }else{
            return false;
        }
    }

    void display()
    {
        if(isEmpty())
        {
            cout<<"stack is empty "<<endl;
            cout<<"|__null__|"<<endl;
        }else{
            for (int i = top; i >= 0; i--)
            {
                cout<<"|_"<<arr[i]<<"_|"<<endl;
            }
        }
    }
};

int main()
{
    stack s(5);
    s.push(20);
    s.push(21);
    s.push(22);
    s.push(23);
    s.push(24);
    s.push(26);
    s.display();
    s.pop();
    s.display();
    return 0;
}
