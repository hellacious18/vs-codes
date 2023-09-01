//binary search in an array
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
int binary_search(int arr[], int n)
{
    int no;
    cout<<"enter no. you want to search: ";
    cin>>no;
    int s=0,e=n,mid;
    while(s<e)
    {
        mid=s+e/2;
        if(arr[mid]==no)
             return mid;
        else if(arr[mid>no])
            e=mid-1;
        else
            s=mid+1;
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    input(arr,n);
    cout<<binary_search(arr,n);
    return 0;
}