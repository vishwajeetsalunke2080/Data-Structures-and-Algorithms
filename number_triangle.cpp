#include<iostream>
using namespace std;
int main(){

    int i,j,usr_inp;
    cout<<"enter how many stars:";
    cin>>usr_inp;
    for(i=1;i<=usr_inp;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<"\n";
    }   
    return 0;
}
