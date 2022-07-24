// program to find sum of array using function.

// C Program to find Sum of all Elements in an Array using Function
#include<stdio.h>
int SumofNumbers(int a[], int Size);
int main(){
    int i, Size, a[10];
    int Addition;
    printf("Please Enter the Size of an Array: ");
    scanf("%d", &Size);

    printf("\nPlease Enter Array Elements\n");
    for(i = 0; i < Size; i++){
        scanf("%d", &a[i]);
    }

Addition = SumofNumbers(a, Size);

printf("Sum of All Elements in an Array = %d ", Addition);
    return 0;
} 
int SumofNumbers(int a[], int Size){
	int Addition = 0;
	int i;
    for(i = 0; i < Size; i++){
        Addition = Addition + a[i]; 
    }
	return Addition;	
}