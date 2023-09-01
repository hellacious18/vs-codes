//program to write a simple calculator.
#include<iostream>
using namespace std;
int main()
{
    int a,b,n,m=1;
    cin>>a>>b;
    while(m!=0)
    {
        cout<<"\n1.add"<<endl<<"2.sub"<<endl<<"3.mul"<<endl<<"4.div"<<endl<<"5.mod"<<endl;
        cin>>n;
        switch(n)
        {
            case 1: cout<<a<<" + "<<b<<" = "<<a+b;
                    break;
            case 2: cout<<a<<" - "<<b<<" = "<<a-b;
                    break;
            case 3: cout<<a<<" * "<<b<<" = "<<a*b;
                    break;
            case 4: cout<<a<<" / "<<b<<" = "<<a/b;
                    break;
            case 5: cout<<a<<" % "<<b<<" = "<<a%b;
                    break;
            default:m=0;
            break;
        }
    }
    return 0;
}