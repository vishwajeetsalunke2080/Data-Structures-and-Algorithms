#include<iostream>
using namespace std;
int main(){

    int i,j,usr_inp;
    cout<<"enter how many stars:";
    cin>>usr_inp;
    for(i=usr_inp;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            cout<<j;
        }
        cout<<"\n";
    }   
    return 0;
}
