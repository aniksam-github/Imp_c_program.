// program to demonstrate the function fput().
#include <stdio.h>
int main()
{
//file pointer
FILE *fp = NULL;
fp = fopen("aticle.txt", "w");
if(fp == NULL)
{
printf("Error in creating the file\n");
exit(1);
}
fputs("Hello Educba Training, Welcome",fp);
//close the file
fclose(fp);
printf("File has been created successfully\n");
return 0;
}