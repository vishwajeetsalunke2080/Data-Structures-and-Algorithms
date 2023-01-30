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
           if(i==1||j==1||i==usr_inp||j==i)
           {
            cout<<j;
           }
           else
           {
                cout<<" ";
           }
        }
        cout<<endl;
    }   
    return 0;
}
