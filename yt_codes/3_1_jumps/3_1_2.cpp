//check if a given number is prime or not.

#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        m=0;
        if(n%i==0)
           {
            m++;
            break;
           }
    }
    if(m==0)
        cout<<n<<" is prime number.";
    else
        cout<<n<<" is non prime number.";
    return 0;
}