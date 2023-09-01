#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct student
{
	int roll_no, marks;
	char name[10];
};
int main()
{
	struct student *ptr;
	int total,i;
	clrscr();
	printf("total students:");
	scanf("%d",&total);
	ptr=(struct student *)malloc(total * sizeof(struct student));
	for(i=0;i<total;i++)
	{
		printf("\nroll no");
		scanf("\n%d",&(ptr+i)->roll_no);
		printf("\nname");
		scanf("\n%s",(ptr+i)->name);
		printf("\nmarks");
		scanf("\n%d",&(ptr+i)->marks);
	}
	printf("\nresult:\n");
	for(i=0;i<total;i++)
	{
		printf("\nroll no\t name\t marks");
		printf("\n%d\t %s\t %d",(ptr+i)->roll_no,(ptr+i)->name,(ptr+i)->marks);
	}
	free(ptr);
	getche();
	return 0;
}