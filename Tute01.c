/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  //declare the variables for inputs
  int first,two;

  //display the user to input the marks
  printf("Enter The First Mark  :");
  scanf("%d", &first);

  printf("Enter The Second Mark :");
  scanf("%d", &two);


  //declare sum and the average variables
  float average=0;
  int sum;

  //Calculate the sum (first+two)
  sum=first+two;

  //Calculate the average
  average=sum/2;

  //display the average to the console
  printf("Average Is %.2f", average);
  
  return 0;
}

