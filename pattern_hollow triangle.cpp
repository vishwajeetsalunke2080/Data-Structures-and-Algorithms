#include<iostream>
using namespace std;
int main()
{
    int  i,j,usr_input;
    cout<<"count:";
    cin>>usr_input;
    for(i=1;i<=usr_input;i++)
    {
        for (j = 1; j <= i; j++)
        {
            if(i==1||j==1||i==usr_input||j==i)
            {
                cout<<j;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}