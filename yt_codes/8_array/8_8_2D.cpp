#include<iostream>
using namespace std;
int main()
{
    int r,c ;
    cin>>r>>c;
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    int e;
    cin>>e;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j]==e)
                cout<<a[i][j]<<" is at position "<<i<<","<<j;
        }
        cout<<endl;
    }
}