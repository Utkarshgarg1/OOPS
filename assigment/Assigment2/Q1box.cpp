#include<iostream>
using namespace std;
int main()
{
    int i,j,r,c;
    cout<<"enter numbers of rows";
    cin>>r;
    cout<<"enter number of collumns";
    cin>>c;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i==1||i==r||j==1||j==c)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}
