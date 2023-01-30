#include<iostream>
using namespace std;
int main()
{
    int n = 9;
    int arr[10] = {4,1,8,2,7,3,1,2,0};
    int leader = arr[n-1];
     cout<<leader<<"\t";
    for (int i = n-1; i >= 0; i--)
    {
        if(leader < arr[i])
        {
            leader = arr[i];
            cout<<leader<<"\t";
        }
    }
    
    return 0;
}
