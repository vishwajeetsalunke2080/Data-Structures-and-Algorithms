#include<iostream>
using namespace std;
class queue
{
    public:
    int size;
    int front;
    int rear;
    int *arr;
    queue(int size)
    {
        this->size = size;
        front =0;
        rear = 0;
        arr = new int[size];
    }
    
    void push(int data)
    {
        if(rear==size)
        {   
            cout<<"queue is full"<<endl;
        }
        else{
            arr[rear] = data;
            cout<<"element "<<data<<" pushed in queue"<<endl;
            rear++;
        }
    }

    void pop()
    {
        if(front==rear)
        {
            cout<<"queue is already empty";
        }else{
            arr[front] = 0;
            front++;
            if(front==rear)
            {
                front=0;
                rear=0;
            }
        }
    }

    void traverse()
    {
        if(front==rear)
        {
            cout<<"queue is empty"<<endl;

        }else{
            for (int i = 0; i < rear; i++)
            {
                cout<<"|_"<<arr[i]<<"_|";    
            }
            cout<<endl;
        }
    }
};

int main()
{
    queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.traverse();
    q.pop();
    q.traverse();    
    q.pop();
    q.traverse();    
    q.pop();
    q.push(70);
    q.traverse();    
    return 0;
}

