/*
Q.3 Write a Program to find square of each element from the given array.
For example,
Input:
Enter array size: 5

Enter array elements:
a[0] = 7
a[1] = 4
a[2] = 9
a[3] = 5
a[4] = 2

Output:
The squares are: 49, 16, 81, 25, 4
*/
#include<stdio.h>
void main(){
	int i,n;
	int a[n];
	printf("Enter size of array A : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter value for A[%d] : ",i);
		scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++){
		printf(" %d ",a[i]*a[i]);
	}
}
