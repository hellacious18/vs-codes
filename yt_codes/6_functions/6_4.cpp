//factorial of a number

#include<iostream>
using namespace std;

void factorial(int n)
{
    int fact=1;
    for(int i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    cout<<fact;
    return;
}

int main()
{
    int a;
    cin>>a;
    factorial(a);
    return 0;
}