//find sum of natural numbers till n.

#include<iostream>
using namespace std;
int main()
{
    int a,sum=0;
    cin>>a;
    for(int i=1; i<=a; i++)
        sum=sum+i;
    cout<<"sum: "<<sum;
    return 0;
}