//minimun & maximum within two numbers
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a>b)
        cout<<a<<" is maximum."<<endl<<b<<" is minimum.";
    else if(b>a)
        cout<<b<<" is maximum."<<endl<<a<<" is minimum.";
    else
        cout<<"both are equal.";
    return 0;
}