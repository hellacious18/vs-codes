//check if an alphabet is a vowel or a consonant.
#include<iostream>
using namespace std;
int main()
{
    char a;
    cin>>a;
    if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U'||a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
        cout<<a<<" is vowel.";
    else
        cout<<a<<" is consonant.";
    return 0;
}