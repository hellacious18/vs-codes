//half pyramid 
#include<iostream>
using namespace std;

int main()
{
    int r,i,j;
    cin>>r;
    for(i=1;i<=r;i++)
    {
        for(j=0;j<=r;j++)
        {   
            if(j<=r-i)
                cout<<" ";
            else
                cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}