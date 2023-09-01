//fibonacci series

#include<iostream>
#include<math.h>
using namespace std;

int fib(int m)
{
    int a=0,b=1,next;
    for(int i=1;i<=m;i++)
    {
        cout<<a<<" ";
        next=a+b;
        a=b;
        b=next;
    }
    return 0;
}

int main()
{
    int n;
    cin>>n;
    fib(n);
    return 0;
}