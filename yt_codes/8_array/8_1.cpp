//max & min in an array

#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n,min,max,i;
    cin>>n;
    int array[n];
    for(i=0;i<n;i++)
        cin>>array[i];
    for(i=0;i<n;i++)
    {
        if(array[i]>max)
            max=array[i];
        if(array[i]<min)
            min=array[i];
    }
    cout<<max<<endl<<min<<endl;
    return 0;
}