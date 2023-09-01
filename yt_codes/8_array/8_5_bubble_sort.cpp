//bubblesort in array

#include<iostream>
using namespace std;
int insert(int a[], int n)
{
    for(int i=0;i<n;i++)
        cin>>a[i];
}
int print(int a[], int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
int bubble_sort(int a[],int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    insert(a,n);
    cout<<"array before bubbdle sort:";
    print(a,n);
    bubble_sort(a,n);
    cout<<"\narray after bubble sort:";
    print(a,n);
}