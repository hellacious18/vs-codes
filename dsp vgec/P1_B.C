//1(b).program to multiply 2 matrix with pointer.
#include<stdio.h>
#define r 3
#define c 3
int main()
{
	int a[3][3],b[3][3],mul[3][3];
	int m1,n1,m2,n2,i,j;
	clrscr();
	printf("Enter no of row and column for 1st matrix\n");
	scanf("%d%d",&m1,&n1);
	printf("Enter no of row and column for 2nd matrix\n");
	scanf("%d%d",&m2,&n2);
	if(n1==m2)
	{
		printf("Enter First matrix\n");
		add(a);
		printf("\nEnter Second matrix\n");
		add(b);
		multi(a,b,mul);
		printf("Product of entered matrices :-\n");
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n2;j++)
			printf("%d\t",*(*(mul+i)+j));
			printf("\n");
		}
	}
	else
	{
		printf("Multiplication is not possible.");
	}
	getch();
	return 0;
}
int add(int mat[][c])
{
	int row, col;
	for (row=0;row<r-1;row++)
	{
		for(col=0;col<c-1;col++)
			scanf("%d",(*(mat+row)+col));
	}
	return 0;
}
int multi(int mat1[][c], int mat2[][c], int res[][c])
{
	int row,col,i;
	int sum;
	for(row=0;row<r-1;row++)
	{
		for(col=0;col<c-1;col++)
		{
			sum=0;
			for(i=0;i<c-1;i++)
				sum+=(*(*(mat1+row)+i)) * (*(*(mat2+i)+col));
			*(*(res+row)+col)=sum;
		}
	}
	return 0;
}