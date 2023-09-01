#include<iostream>
using namespace std;
#include<iostream>
int main()
{
    int a[3][3],i,j;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            cin>>a[i][j];
    cout<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            cout<<a[i][j]<<"\t";
        cout<<endl;
    }
    cout<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            int b=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=b;
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            cout<<a[i][j]<<"\t";
        cout<<endl;
    }
}