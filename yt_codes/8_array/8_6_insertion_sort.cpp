#include<iostream>
using namespace std;
int input(int array[], int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
}
int print(int array[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
}
int i_sort(int array[],int n)
{
    int max=array[0];
        for(int i=0;i<n;i++)
        {
            if(array[i]>max)
                max=array[i];
            cout<<max<<" ";
        }
}
int main()
{
    int n;
    cin>>n;
    int array[n];
    input(array,n);
    //print(array,n);
    cout<<"\nafter insertion sort:";
    i_sort(array,n);
}