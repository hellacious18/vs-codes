/*program to implement a student structure using dynamic memory allocation
 and perform various operations.*/
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
	int total,i,n,flag=0,s_rno,min,j,d,first;
	clrscr();
	while(flag!=1)
	{
		printf("\n\nOPERATIONS: \n1.CREATE\n2.SEARCH\n3.UPDATE\n4.DELETE\n5.DISPLAY\n6.SORT\n7.EXIT\n\n");
		scanf("%d",&n);
	switch(n)
	{
		case 1:	printf("\n1.CREATE");
			printf("\nTotal no. of student(s): ");
			scanf("%d",&total);
			ptr=(struct student *)malloc(total * sizeof(struct student));
			for(i=0; i<total;i++)
			{
				printf("\nroll no.: ");
				scanf("%d",&(ptr+i)->roll_no);
				printf("name: ");
				scanf("%s",(ptr+i)->name);
				printf("marks: ");
				scanf("%d",&(ptr+i)->marks);
			}
			break;
		case 2: printf("\n2.SEARCH");
			printf("\nenter roll no. or marks or name:");
			scanf("%d",&s_rno);
			for(i=0; i<total;i++)
			{
				if(s_rno==(ptr+i)->roll_no ||s_rno==(ptr+i)->marks)
				{
				printf("\n%d\t %s\t %d",(ptr+i)->roll_no,(ptr+i)->name,(ptr+i)->marks);
				}
			}
			break;
		case 3: printf("\n3.UPDATE");
			printf("\n enter roll no. to update record:");
			scanf("%d",&s_rno);
			for(i=0;i<total;i++)
			{
				if(s_rno==(ptr+i)->roll_no)
				{
					printf("name: ");
					scanf("%s",(ptr+i)->name);
					printf("marks: ");
					scanf("%d",&(ptr+i)->marks);
				}
			}
			break;
		case 4: printf("\n4.DELETE");
			printf("\nenter roll no. to delete record:");
			scanf("%d",&d);
			for(i=0;i<total;i++)
			{
				if(d==((ptr+i)->roll_no))
				{
					(ptr+i)->roll_no=NULL;
					*(ptr+i)->name='\0';
					(ptr+i)->marks=NULL;
				}
			}
			break;
		case 5:	printf("\n5.DISPLAY");
			printf("\nroll no\t name\tmarks");
			for(i=0; i<total;i++)
			{
				printf("\n%d\t %s\t %d",(ptr+i)->roll_no,(ptr+i)->name,(ptr+i)->marks);
			}
			break;
		case 6: printf("\n6.SORT");
			printf("\nroll no\t name\tmarks");
			for(i=0;i<total;i++)
			{
				for(j=i+1;j<total;j++)
				{
					if((ptr+j)->roll_no<(ptr+i)->roll_no)
					{
						if(j!=i)
						{
							first = (ptr+j)->roll_no;
							(ptr+j)->roll_no = (ptr+i)->roll_no;
							(ptr+i)->roll_no = first;
						}
					}
				}
				printf("\n%d\t %s\t %d",(ptr+i)->roll_no,(ptr+i)->name,(ptr+i)->marks);
			}
			break;
		case 7: printf("\n8.EXIT");
			flag=1;
			break;
		default:printf("\nenter correct operation number!");
			break;
		}
	};
	free(ptr);
	return 0;
}