#include <stdio.h>
int main()
{
    int N = 3;
    // A, B and C are names of rods
    towerOfHanoi(N, 'A', 'C', 'B');
    return 0;
}
void towerOfHanoi(int n, char x, char y, char z)
{
    if (n == 0)
        return;
    towerOfHanoi(n - 1, x, z, y);
    printf("\nMove disk %d from rod %c to rod %c",n,x,y);
    towerOfHanoi(n - 1, z, y, x);
}