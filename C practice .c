# include <stdio.h>
int main (){
	//Write a C program to find the maximum Between Two NUmbers 
	int A , B;
	printf("Enter the number A : ");
	scanf("%d",&A);
	printf("Enter the nymber B : ");
	scanf("%d",&B);
	if (A>B){
		printf("The number that is greater is %d",A);	
	}
	else if (A==B){
	printf("Both the numbers are equal %d ",A,B);
	
	}
	else if (B>A){
		printf("The number that is greater is %d",B);
		
	}
	else {
		printf("There is no number Write a valid input");
		
	}
	return 0;
	
}

