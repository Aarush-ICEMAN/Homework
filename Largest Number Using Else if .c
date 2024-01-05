# include <stdio.h>
int main (){
	//Write the program to find the largest of three numbers using Else if 
	int A,B,C;
	printf("Enter the Number 1 : ");
	scanf("%d",&A);
	printf("Enter the Number 2 : ");
	scanf("%d",&B);
	printf("Enter the Number 3 : ");
	scanf("%d",&C);
	if (A>B&&A>C){
		printf("The Largest number is %d",A);	
	}
	else if (B>A&&B>C){
		printf("The Largest Number is %d",B);
	}
	else if (C>A&&C>B){
		printf("The Largest number is %d",C);
		
	}
	else {
		printf("The input is invalid");
		
	}
	return 0;
	
	
}

