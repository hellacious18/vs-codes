//half pyramid using numbers

#include<iostream>
using namespace std;

int main()
{
    int r,i,j,k=1;
    cin>>r;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<k;
        }
        k++;
        cout<<endl;
    }
    return 0;
}