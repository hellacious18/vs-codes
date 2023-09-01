//print all odd numbers till n.
#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=0;i<=a;i++)
    {
        if(i%2==0)
            continue;
        cout<<i<<" ";
    }
    return 0;
}