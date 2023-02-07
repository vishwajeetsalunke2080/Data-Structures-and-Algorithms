#include<iostream>
using namespace std;
class stack
{
    public:
    int size;
    int top;
    int *arr;
    stack(int size)
    {
        this->size = size;
        top=-1;
        arr = new int[size];
    }

    void push(int data)
    {
        if(size-top>1)
        {
            top++;
            arr[top] = data;
            cout<<"element "<<data<<" pushed on stack"<<endl;
        }
        else{
            cout<<"error!! can't insert element "<<data<<" stack is full"<<endl;
        }
    }
    
    void pop()
    {
        if(!isEmpty() && top<size)
        {
            arr[top] = 0;
            top--;
        }
        else{
            cout<<"error!! cannot pop element stack is empty"<<endl;
        }
    }

    bool isEmpty()
    {
        if(top ==-1)
        {
            return true;
        }
        else{
            return false;
        }
    }

    int peek()
    {
        if (!isEmpty() && top<size)
        {
            return arr[top];
        }
        else{
            cout<<"stack is empty"<<endl; 
            return -1;           
        }
    }

    void show()
    {
        if(!isEmpty())
        {
            for(int i=0;i<size;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }else{
            cout<<"error!! stack is empty"<<endl;
        }
    }

   
};

int main()
{
    stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.show();
    cout<<"top of stack is "<<st.peek()<<endl;
    st.pop();
    cout<<"after pop operation"<<endl;
    // st.push(6);
    st.show();    
    if(st.isEmpty())
    {
        cout<<"stack is empty"<<endl;
    }else{
        cout<<"stack is not empty"<<endl;
    }
    return 0;
}