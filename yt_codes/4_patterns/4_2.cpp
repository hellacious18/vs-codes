//hollow rectangle

#include <iostream>
using namespace std;

int main()
{
    int r=4,c=5,i,j;
    //cin>>r>>c;
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            if(i==1 || i==r || j==1 || j==c)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}