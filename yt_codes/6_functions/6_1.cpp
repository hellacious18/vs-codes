#include<iostream>
using namespace std;

void add(int i, int j)
{
    cout<<i+j;
    return;
}

int main()
{
    int a,b;
    cin>>a>>b;
    add(a,b);
    return 0;
}