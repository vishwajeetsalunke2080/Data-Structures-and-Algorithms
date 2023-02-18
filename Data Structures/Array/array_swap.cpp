#include<iostream>
using namespace std;
void reverse(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        swap(arr[i],arr[n-1]);
        n--;
    }      
}
int main()
{
    int arr[9] ={1,2,3,4,5,6,7,8,9};
    int n=9;
    cout<<"Before Swapping {";
    for (int i = 0; i < n; i++)
    {
        cout<<"\t"<<arr[i];
    }cout<<"}"<<endl;
    cout<<endl<<"After Swapping {";
    reverse(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<"\t"<<arr[i];
    }cout<<"}"<<endl;
    return 0;
}
