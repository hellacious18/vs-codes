#include <bits/stdc++.h> 
using namespace std; 
int MX = 10;
int create(int num) 
{ 
    int key; 
    key = num % MX; 
    return key; 
} 
void rehashing(vector<int> a, int key, int num) 
{ 
    int flag, i, count = 0; 
    flag = 0; 
    if (a[key] == -1) 
        a[key] = num; 
    else 
    { 
        i = 0; 
        while (i < MX) 
        { 
            if (a[i] != -1) 
            count++; 
            i++; 
        } 
        if (count == MX) 
        {
            MX *= 2; 
            key = num % MX; 
            a[key] = num; 
        } 
        else 
        { 
            for (i = key + 1; i < MX; i++) 
            { 
                if (a[i] == -1) 
                { 
                    a[i] = num; 
                    flag = 1; 
                    break; 
                } 
            }    
            for (int i = 0; i < key && flag == 0; i++) 
            { 
                if (a[i] == -1) 
                { 
                    a[i] = num; 
                    flag = 1; 
                    break; 
                } 
            } 
        } 
    } 
} 
void display(vector<int> a) 
{ 
    int i; 
    cout << "\nThe Hash Table is : \n"; 
    for (int i = 0; i < MX; i++) 
    { 
        if(a[i] != -1) 
            cout << i << " " << a[i] << '\n'; 
    } 
} 
int main() 
{ 
    vector<int> a(MX, -1); 
    int num, key, i; 
    char ans;
    cout << "\nRe-Hasing Mathod\n"; 
    for (int i = 0; i < MX; i++) 
        a[i] = -1; 
    do 
    { 
        cout << "\nEnter The Number : "; 
        cin >> num; 
        key = create(num); 
        rehashing(a, key, num); 
        cout << "\nDo you Wish To Continue? (y/n) : "; 
        cin >> ans; 
    } while (ans == 'y'); 
    display(a); 
    return 0; 
}