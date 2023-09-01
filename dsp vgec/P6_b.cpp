#include<iostream>
using namespace std;
int n, i;
print(int arr[], int n)         //print the array
{
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
linear_search(int arr[], int n)
{
    int no, temp=0;
    cout<<"enter no. you want to search: ";
    cin>>no;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==no)
        {
            cout<<arr[i]<<" is at position "<<i+1<<endl;
            break;
        }
        else
        {
            if(temp!=0)
                cout<<"element not found.";
        }
        temp++;
    }
    return 0;
}
swap(int* a, int* b)                //func to swap two elements
{
    int t = *a;
    *a = *b;
    *b = t;
}
partition(int arr[], int l, int r)          //func for pivot in quick_sort func
{
    int pivot = arr[r];
    int i= (l- 1);
    for (int j = l; j <= r - 1; j++) 
    {
        if (arr[j] < pivot) 
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[r]);
    return (i + 1);
}
quick_sort(int arr[], int l, int r)         //func of quick sort
{
    if (l < r) {
        int pi = partition(arr, l, r);
        quick_sort(arr, l, pi - 1);
        quick_sort(arr, pi + 1, r);
    }
}
binary_search(int arr[], int n)             //func for binary search
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
    int choice,exit=1;
    while(exit==1)
    {
        cout<<"\n\nenter no. of elements inserted in an array: ";
        cin>>n;                     //taking array size from user
        int arr[n];
        cout<<"\nenter array elements:"<<endl;
        for(i=0;i<n;i++)
            cin>>arr[i];            //taking elements from user
        cout<<"\ncurrent array: ";
        print(arr,n);
        cout<<"\n\n1. Linear Search\t2. Binary Search\t3. Exit";
        cout<<"\n\nenter your choice: ";
        cin>>choice;
        switch (choice)             //choice among sorting methods from user
        {
            case 1: linear_search(arr, n);
            break;
            case 2: print(arr,n);
                    quick_sort(arr,0,n);
                    print(arr,n);
                    cout<<"position: "<<binary_search(arr, n)+1;
            break;
            case 3: exit=0;
            break;
            default:
            break;
        }
    }
    return 0;
}