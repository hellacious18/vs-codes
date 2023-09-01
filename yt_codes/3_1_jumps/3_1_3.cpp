    //print all prime numbers in a given range

#include<iostream>
using namespace std;
int main()
{
    int a,b,x;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        x=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                x++;
                break;
            }
        }
        if(x==0)
            cout<<i<<" ";
    }
    return 0;
}