#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key)
{
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;
    while(start<=end)
    {
        if(key==arr[mid])
        {
            return mid;
        }
        if(key>arr[mid])
        {
            start=mid;
        }
        if(key<arr[mid])
        {
            end=mid;
        }
        mid=(start+end)/2;
        start++;
    }
    if(key==arr[mid])
    {
        return mid;
    }
    else{
        return -1;
    }
}

int main()
{
    int sample[5] = {25,35,46,67,78};
    int result = binarySearch(sample,5,67);
    if(result==-1)
    {
        cout<<"key not found"<<endl;
    }
    else{
        cout<<"the element "<<sample[result]<<" found at location " <<result+1<<endl;
    }
    return 0;
}
