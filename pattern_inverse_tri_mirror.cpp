#include<iostream>
using namespace std;
int main()
{
    int i,j,usr_input;
    cout<<"enter input:";
    cin>>usr_input;
    for(i=usr_input;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}