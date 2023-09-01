//inverted half pyramid

#include<iostream>
using namespace std;

int main()
{
    int r,i,j;
    cin>>r;
    for(i=r;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}