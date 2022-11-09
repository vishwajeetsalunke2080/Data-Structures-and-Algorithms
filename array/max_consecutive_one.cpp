#include<iostream>
using namespace std;
int consecutive(int arr[],int n)
{
    int curr=0,res;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==1)
        {
            curr++;
        }
        else
        {
            res = max(res,curr);
            curr=0;
        }
    }
    res = max(res,curr);
    return res;
}
int main()
{
    int arr[15] = {0,0,0,1,1,1,0,0,1,1};
    int n = 10;
    cout<<consecutive(arr,n);
    return 0;
}
