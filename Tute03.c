/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  
//declare the variables for N numbers
int n,i;

//display the user to input the N numbers
printf("Enter N number :");
scanf("%d",&n);

printf( "\nSum of %d natural number\n", n);


//calculation of the sum
i=n*(n+1)/2;


//printing the sum to the console
printf("%d" ,i);


  return 0;
}

