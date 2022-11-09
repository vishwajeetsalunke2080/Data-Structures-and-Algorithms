#include<iostream>
using namespace std;
int main()
{
    int n = 9;
    int arr[10] = {4,1,8,2,7,3,1,2,0};
    int x = arr[0];
    int diff = arr[1]-arr[0];
    for (int i = 0; i < n; i++)
    {
        if ((arr[i]-x)>diff)
        {
            diff = arr[i]-x;
        }
        if(arr[i]<x){
            x=arr[i];
        }
        
    }cout<<"max diff. is "<<diff;
    
    return 0;
}

