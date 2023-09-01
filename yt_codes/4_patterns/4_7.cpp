//butterfly pattern

#include<iostream>
using namespace std;
int main()
{
    int r, i, j;
    cin>>r;
    for(i=1; i<=r;i++)
    {
        for(j=1;j<=i;j++)
            cout<<" * ";
        int space=2*r-2*i;
        for(j=1;j<=space;j++)
            cout<<"   ";
        for(j=1;j<=i;j++)
            cout<<" * ";
        cout<<endl;
    }
    for(i=r; i>=1;i--)
    {
        for(j=1;j<=i;j++)
            cout<<" * ";
        int space=2*r-2*i;
        for(j=1;j<=space;j++)
            cout<<"   ";
        for(j=1;j<=i;j++)
            cout<<" * ";
        cout<<endl;
    }
    return 0;
}