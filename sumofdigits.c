#include<stdio.h> 
#include<conio.h>

int sumofdigit(int num) 
{ 
    if (num == 0) 
       return 0; 
    return (num % 10 + sumofdigit(num / 10)); 
} 
  
int main() 
{ 
    int num;
    printf("Input Number: ");
    scanf("%d",&num);
    int result = sumofdigit(num); 
    printf("Sum of digits: %d",result); 
    return 0; 
} 
