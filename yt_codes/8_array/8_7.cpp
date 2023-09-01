#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],sum=0;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"sum: ";
    for(int j=0;j<n;j++)
    {
        sum=0;
        for(int i=j;i<n;i++)
        {
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
}