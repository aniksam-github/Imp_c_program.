// program to find the size of array

#include<stdio.h>  

int main(){  
    int a[] = {3, 4, 6, 7, 8, 9, 0, 32, 435, 65, 2, 23,  
            56, 67, 8, 9, 0, 3, 2, 1, 4, 5, 6, 7, 8};  
    int count = sizeof(a) / sizeof(int);  

    printf("We have %d no of elements in array\n", count);    
    return 0;  
}  