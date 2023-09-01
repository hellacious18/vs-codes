//check if a triangle is scalene, isosceles or equilateral.

#include<iostream>
using namespace std;
void triangle(int x, int y, int z)
{
    if(x==y && y==z && z==x )
        cout<<"equilateral triangle.";
    else if(x==y || y==z)
        cout<<"isosceles triangle.";
    else
        cout<<"scalane triangle.";
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    triangle(a,b,c);
    return 0;
}