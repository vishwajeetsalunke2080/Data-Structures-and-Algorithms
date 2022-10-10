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
// delete function
int delete_function(int element,int position,int arr[],int arr_size,int arr_capacity)
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
// main function
int main()
{
    int arr[10] = {1,10,3,4,5,6,8,0,0,0};
    int arr_size = 7;
    int element = 2;
    int position = 2;
    int arr_capacity = 10;
    // before insertion
    cout<<"Array is : {";
    for (int i = 0; i < arr_size; i++)
    {
        cout<<arr[i]<<"\t";
    }cout<<"}"<<endl;

    // insert element
    arr_size = insert(element,position,arr,arr_size,arr_capacity);    
    cout<<"After Element Insertion {";
    for (int i = 0; i < arr_size; i++)
    {
        cout<<endl;    
        cout<<arr[i];
    }cout<<"}"<<endl;
    
    // delete element
    arr_size = delete_function(element,position,arr,arr_size,arr_capacity);    
    cout<<"After Element Insertion";
    for (int i = 0; i < arr_size; i++)
    {
        cout<<endl;    
        cout<<arr[i];
    }
}