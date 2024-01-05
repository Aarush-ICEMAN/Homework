#include <stdio.h>
int main (){
	//Wrie a program to find the maximum between three numbers 
	int a,b,c;
	printf("Enter the number a : ");
	scanf("%d",&a);
	printf("Enter the number b : ");
	scanf("%d",&b);
	printf("Enter the number c : ");
	scanf("%d",&c);
	if (a>b&&a>c){
		printf("The number greater is the a %d",a);
		
	}
	else if (b>a&&b>c){
		printf("The number greater is the b %d",b);
		
	}
	else if (c>a&&
	c>b){
		printf("The number greater is the c %d ",c);
		
	}
	
	else if (a==b==c){
		printf("All the numbers are equal %d",a,b,c);
		
	}
	else {
		printf("Invalid input enter the valid input ");
		
	}
	return 0;
	
}
