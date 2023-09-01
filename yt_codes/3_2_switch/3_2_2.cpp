
//program to find whether an alphabet is a vowel or a consonant.

#include<iostream>
using namespace std;
int main()
{
    char c;
    cin>>c;
    switch(c)
    {
        case 'a': cout<<" is vowel.";
                break;
        default: cout<<" is consonant.";
    }
    return 0;
}