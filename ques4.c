// program to find the largest and smallest element of an array.

#include<stdio.h>

int main(){
int a[50],i,n,large,small;
printf("How many elements:");
scanf("%d",&n);
printf("Enter the Array:");

for(i=0;i<n;++i)
scanf("%d",&a[i]);
large=small=a[0];
for(i=1;i<n;++i){
if(a[i]>large)
large=a[i];
if(a[i]<small)
small=a[i];
}
printf("The largest element is %d",large);
printf("\nThe smallest element is %d\n",small);

return 0;
}