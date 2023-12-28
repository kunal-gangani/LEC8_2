/*
Q.1 Write a Program to perform the merge operation of two 1D arrays & store it in another array. Keep in mind that both array sizes can be different.
For example,
Output:
Enter size of array A: 2
Enter value for A[0] : 1
Enter value for A[1] : 1
Enter size of array B: 2
Enter value for B[0] : 1
Enter value for B[1] : 1
 1  1  1  1
*/

#include<stdio.h>
void main(){
	int n,i,m;
	int a[n],b[m];
	printf("Enter size of array A: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter value for A[%d] : ",i);
		scanf("%d",&a[i]);	
	}
	printf("Enter size of array B: ");
	scanf("%d",&m);
	for(i=0;i<m;i++){
		printf("Enter value for B[%d] : ",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++){
		printf(" %d ",a[i]);
	}
	
	for(i=0;i<m;i++){
		printf(" %d ",b[i]);
	}
	
}
