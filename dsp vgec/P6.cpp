#include<iostream>
using namespace std;
int n, i, j, temp;
print(int arr[], int n)         //print the array
{
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
selection_sort(int arr[], int n)        //func of selection sort
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)        
        {
            if(arr[i]>arr[j])
            {   int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        cout<<endl;
        print(arr,n);
    }
    return 0;
}
bubble_sort(int arr[], int n)       //func of bubble sort
{
    int temp;
    for(int i=n-1;i>=0;--i)
    {
        for(int j=0;j<i;j++)
        {    if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            print(arr,n);
        }
        cout<<endl;
        print(arr,n);
    }
}
merge(int arr[], int l, int mid, int r)         //func for mergging after merge_sort() func
{
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1];
    int b[n2];
    for(i=0; i<n1;i++)
        a[i]=arr[l+i];
    for(i=0; i<n1;i++)
        b[i]=arr[mid+1+i];    
    i=j=0;
    int k=l;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            k++; 
            i++;
        }
        else
        {
            arr[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<n1)
    {
        arr[k]=a[i];
            k++; 
            i++;
    }
    while(j<n2)
    {
        arr[k]=b[j];
            k++;
            j++;
    }
}
merge_sort(int arr[], int l, int r)             //func of merge_sort
{
    if(l<r)
    {
        int mid=(l+r)/2;
        merge_sort(arr,l,mid);
        merge_sort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
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
        if (arr[j] < pivot) {
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
int main()              //main func
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
        cout<<"\n\n1. Selection Sort\t2. Bubble Sort\t\t3. Merge Sort\t\t4. Quick Sort\t\t5. Exit";
        cout<<"\n\nenter your choice: ";
        cin>>choice;
        switch (choice)             //choice among sorting methods from user
        {
            case 1: selection_sort(arr, n);
            break;
            case 2: bubble_sort(arr, n);
            break;
            case 3: merge_sort(arr, 0, n);
                    print(arr,n);
            break;
            case 4: quick_sort(arr, 0, n);
                    print(arr,n);
            break;
            case 5: exit=0;
            break;
            default:
            break;
        }
    }
}