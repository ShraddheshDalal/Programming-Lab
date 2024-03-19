#include <stdio.h>  
void swap();  
int main()  
{  
    int a = 10;  
    int b = 20;   
    printf("The numbers before swapping in main are : %d and %d\n",a,b);   
    swap(&a,&b);  
    printf("The numbers after swapping in main are : %d and %d\n",a,b); 
}  
void swap (int *a, int *b)  
{  
    int temp;   
    temp = *a;  
    *a=*b;  
    *b=temp;  
    printf("The numbers after swapping values in function are : %d and %d\n",*a,*b); 
}  
