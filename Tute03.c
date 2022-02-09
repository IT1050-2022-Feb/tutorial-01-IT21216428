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
  
  int i, no, sum = 0, val;//declaration & initialization of variables
	
	printf("Enter the no of numbers: ");//prompt enter the no of numbers
	scanf("%d", &no);//read the no
	
  for(i = 1; i <= no; i++)
  {
    printf("Enter a number: ");//prompt enter a no
	  scanf("%d", &val);//read the no
    sum += val;

  }
  
  printf("Sum of numbers: %d", sum);

  return 0;
}

