/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>//standard input output header

int main() {
  
  int sub1, sub2;//Declarion of variables sub1 and sub2
	float avg = 0;//declaration & initialization of average
	
	printf("Enter the marks of subject 1: ");//prompt enter the sub1 marks
	scanf("%d", &sub1);//read marks of sub1
	
  printf("Enter the marks of subject 2: ");//prompt enter the sub2 marks
	scanf("%d", &sub2);	//read marks of sub1
	
	avg = (sub1 + sub2)/2.0;//Calculate the average
	
	printf("Average of 2 subjects %.2f", avg);//Display the average

  return 0;
}//end of main function

