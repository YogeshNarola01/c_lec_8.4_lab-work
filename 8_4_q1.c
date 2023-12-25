/*
Q.1 Write a program to add, subtract, and multiply two 2D arrays of the same size.
*/

#include<stdio.h>

void main(){
	int r,c;

	
	printf("Enter row size :");
	scanf("%d",&r);
	printf("Enter column size :");
	scanf("%d",&c);
	
		int a[r][c],b[r][c],y[r][c];
		int i,j;
		
		printf("Enter value of A eliment\n");	
	for(i=0; i<r; i++){
		for(j=0; j<c;j++){
		
		printf("enter a[%d][%d]: ",i,j);
		scanf("%d",&a[i][j]);
	}
		
	}
	
	printf("Enter value of b eliment\n");	
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
		
		printf("enter b[%d]: ",i,j);
		scanf("%d",&b[i][j]);
	}
	}
	
	
		printf("Addtion eliment is\n");
	for(i=0; i<r;i++){
		for(j=0;j<c;j++){
			
		y[i][j]=a[i][j]+b[i][j];
		printf("%d ",y[i][j]);
	}
	printf("\n");
}
	
	
		printf("subtrect eliment is\n");
	for(i=0; i<r;i++){
		for(j=0;j<c;j++){
			
		y[i][j]=a[i][j]-b[i][j];
		printf("%d ",y[i][j]);
	}
	printf("\n");
}
	
		
		printf("multipication eliment is\n");
	for(i=0; i<r;i++){
		for(j=0;j<c;j++){
			
		y[i][j]=a[i][j]*b[i][j];
		printf("%d ",y[i][j]);
	}
	printf("\n");
}

	
}
