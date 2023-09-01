//linear search in an array
#include<iostream>
using namespace std;

int input(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    return 0;
}
int search(int arr[], int n)
{
    int no;
    cout<<"enter no. you want to search: ";
    cin>>no;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==no)
        {
            cout<<arr[i]<<" is at position "<<i<<endl;
            break;
        }
        else
            cout<<"element not found.";
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    input(arr,n);
    search(arr,n);
    return 0;
}