#include<bits/stdc++.h> 
using namespace std; 
int size = 1e5+2; 
vector<int> table(size, -1); 
const double A = 0.61803398987; 
const int p = 50; 
int main() 
{ 
    char c; 
    do
    { 
        cout << "Enter The Value : "; 
        int a; 
        cin >> a; 
        int key = floor(p*(a)*A); 
        table[key] = a; 
        cout << "Do you want to continue (y/n) : "; 
        cin >> c; 
    }while(c == 'y'); 
    cout << "\nThe Hash Table Is : \n"; 
    for(int i=0; i<size; i++)
    { 
        if(table[i] != -1)
        { 
            cout << i << " " << table[i] << '\n'; 
        } 
    } 
    return 0; 
}