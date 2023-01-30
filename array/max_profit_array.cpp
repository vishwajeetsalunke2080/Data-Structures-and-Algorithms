#include<iostream>
using namespace std;
int maxProfit(int arr[],int n)
{
    int res;
    int buy = arr[0];
    int sell = arr[1];
    for (int i = 0; i < n; i++)
    {
        if(buy>arr[i])buy = arr[i];
        if(sell<arr[i])sell = arr[i];
    }
    res = sell-buy;     
    cout<<"if you buy stock at "<<buy<<" and sell at "<<sell<<" you will have max profit of ";
    return res;
}
int main()
{
    int arr[7] = {1024,890,240,2200,100,605,800};
    int n = 7;
    cout<<maxProfit(arr,n);
    return 0;
}
