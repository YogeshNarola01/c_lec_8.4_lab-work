/*
Q.2 Write a program to find the sum of all elements in a 2D array.

*/

#include<stdio.h>

void main(){
	int r,c;

	
	printf("Enter row size :");
	scanf("%d",&r);
	printf("Enter column size :");
	scanf("%d",&c);
	
		int a[r][c];
		int i,j, sum=0;
		
		printf("Enter value of A eliment\n");	
	for(i=0; i<r; i++){
		for(j=0; j<c;j++){
		
		printf("enter a[%d][%d]: ",i,j);
		scanf("%d",&a[i][j]);
	}
		
	}
	
		printf("sum of all eliment is :");
	for(i=0; i<r;i++){
		for(j=0;j<c;j++){
			
		sum+=a[i][j];
	
	}
	printf("\n");
}
	
		printf("%d ",sum);
	
}
