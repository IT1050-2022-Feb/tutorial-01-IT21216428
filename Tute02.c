/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>//standard input output header

int main() {
  
  float Amount = 0, distance;//declaration & initialization of variables
	
	printf("Enter the distance the van has travelled: ");//prompt enter the distance travelled
	scanf("%f", &distance);//read the distance
	
  //check whether the statement satisfy 
	if(distance > 30)
	{
		Amount = 30 * 50 + (distance - 30)* 40;//calculate the amount if statement satisfied
	}
	else
	{
		Amount = distance * 50;//calculate the amount if statement not satisfied
	}
	
	printf("Amount to be paid is %.2f", Amount);//Display the amount to be paid

  return 0;
}
