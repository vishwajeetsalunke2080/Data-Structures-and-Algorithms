#include<iostream>
using namespace std;

class Queue
{
    public:
    int *arr;
    int front;
    int rear;
    int size;
    Queue(int size)
    {
        front =0;
        rear=0;
        this->size = size;
        arr = new int[size];
    }

void enqueue(int data)
{
    if(rear==size)
    {
        cout<<"Queue is full!"<<endl;
    }else{
        arr[rear] = data;
        cout<<"element "<<data<<" inserted in queue"<<endl;
        rear++;
    }
   
}

void dequeue()
{
    if(front==rear)
    {
        cout<<"Queue is empty!"<<endl;
    }
    else
    {
        cout<<"element "<<arr[front]<<" popped"<<endl;
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
    }
    else
    {
        for(int i=front;i<size;i++)
        {
            cout<<"|"<<arr[i]<<"|";
        }
        cout<<endl;
    }
}

};

int main()
{
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.traverse();
    q.dequeue();
    q.traverse();
    
    return 0;
}
