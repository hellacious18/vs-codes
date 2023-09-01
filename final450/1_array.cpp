#include<iostream>
using namespace std;
int n;
print(int arr[])
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
reverse(int arr[])
{
    cout<<"\nreversed array:";
    for(int i=n;i>=0;--i)
        cout<<arr[i]<<" ";
}
int main()
{
    cout<<"\nenter number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"\nenter elements:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    print(arr);
    cout<<reverse(arr);
}