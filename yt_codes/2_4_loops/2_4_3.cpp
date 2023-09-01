//add only positive numbers.

#include<iostream>
using namespace std;
int main()
{
    int sum=0, a=0;
    cin>>a;
    while(a>0)
    {
        sum=sum+a;
        cout<<"sum: "<<sum<<endl;
        a=0;
        cin>>a;
    }
    return 0;
}