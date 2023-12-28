/*

Q.2 Write a Program to find leap years between two given numbers and store them in 
an array.And then print that array.
Output:
Input:
Enter the first number: 2020

Enter the second number: 2040

Output:
The array is: 2020, 2024, 2028, 2032, 2036, 2040

*/	
#include<stdio.h>
void main(){
	int startyr,endyr,leap[50],i;
	printf("Enter the Starting Year : ");
   	scanf("%d",&startyr);
   	printf("Enter the Ending Year Year :");
   	scanf("%d",&endyr);
   	i=startyr;
   	printf("The Leap year Between %d and %d is : ",startyr,endyr);
   	for(i=startyr;i<=endyr;i++){
   		if(i%4==0||i%400==0||i%100==0){
   			printf(" %d ",leap[50]);
   		}
	}

}
