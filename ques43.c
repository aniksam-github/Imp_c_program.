// program to demonstrate the working of union
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

union student
{
	int id;
	char name[20];
};

int main(int argc, char **argv)
{
	union student st[10];
	int n, i;
	printf("Enter a number between 1 to 10: ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
	{
		printf("\nEnter details of student %d:", i);
		printf("\nId of student %d: ", i);
		scanf("%d", &st[i].id);
		printf("\nStudent %d Id: %d", i, st[i].id);
		printf("\nName of student %d: ", i);
		fflush(stdin);
		gets(st[i].name);
		printf("\nStudent %d Name: ", i);
		puts(st[i].name);
	}
    return 0;
}
