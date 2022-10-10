#include<iostream>
using namespace std;
// insert function
int insert(int element,int position,int arr[],int arr_size,int arr_capacity)
{
    if(arr_capacity==arr_size) return arr_size;
    for(int i=arr_size-1;i>=position-1;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[position-1] = element;
    arr_size++;
    return arr_size;
}
//search function
int search_element(int element,int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == element){
            cout<<"Element found at location "<<i+1;            
        }
    } 
    return 0;  
    
}
// delete function
int delete_function(int position,int arr[],int arr_size)
{
    for (int i = position; i < arr_size; i++)
    {
        arr[i] = arr[i+1];
    } return arr_size;
}
// main function
int main()
{
    int arr[10] = {1,10,3,4,5,6,8,0,0,0};
    int arr_size = 7;
    int element = 2;
    int position = 2;
    int arr_capacity = 10;
    // before insertion
    cout<<"Array is : \t\t"<<"{";
    for (int i = 0; i < arr_size; i++)
    {
        cout<<arr[i]<<"\t";
    }cout<<"}"<<endl;

    // insert element
    arr_size = insert(element,position,arr,arr_size,arr_capacity);    
    cout<<"After Element Insert {";
    for (int i = 0; i < arr_size; i++)
    {
        cout<<"\t"<<arr[i];
    }cout<<"}"<<endl;
    
    // delete element
    delete_function(element,arr,arr_size);    
    cout<<"After Element Delete {";
    for (int i = 0; i < arr_size; i++)
    {
       cout<<"\t"<<arr[i];
    }cout<<"}"<<endl;

    search_element(3,arr,arr_size);
}
