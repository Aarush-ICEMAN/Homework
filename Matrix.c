#include <stdio.h>
int main (){
	int r,c;
	printf("Enter the number of rows : ");
	scanf("%d",&r);
	printf("Enter the number of columns : ");
	scanf("%d",&c);
	int matrix[r][c];
	int i , j;
	for (i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter the elements at position (%d,%d) : ",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("\nThe elements of the matrix in matrix method are :\n");
	for (i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",matrix[i][j]);	
		}
		printf("\n");	
	}
	return 0;
}
