/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1, mark2;
  float avg;

  printf("Enter marks for first subject:");
  scanf("%d", &mark1);

  printf("Enter mark for second subject:");
  scanf("%d", &mark2);

  avg = ( mark1 + mark2 ) / 2.0;
  printf("Average of the two marks: %.2f", avg);
  
  return 0;
}

