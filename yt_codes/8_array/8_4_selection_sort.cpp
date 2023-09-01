#include<iostream>
using namespace std;
int insert(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
}
int print(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int s_sort(int arr[],int n)
{
    int temp;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)        
        {
            if(arr[i]>arr[j])
            {   temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    insert(arr,n);
    cout<<"\narray before sorting: ";
    print(arr,n);
    s_sort(arr,n);
    cout<<"\narray after sorting: ";
    print(arr,n);
}