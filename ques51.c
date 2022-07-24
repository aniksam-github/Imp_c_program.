// program to open the file in write mode
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp = fopen("test.txt", "w");
	if (fp == NULL)
	{
		puts("Couldn't open file");
		exit(0);
	}
	else
	{
		fputs("GeeksforGeeks", fp);
		puts("Done");
		fclose(fp);
	}
	return 0;
}
