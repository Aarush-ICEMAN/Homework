#include <stdio.h>
int main (){
	int i,prime=0,n=2;
	printf("Enter the number : ");
	scanf("%d",&i);
	while (n<i){
		if (i%n==0){
			prime++;
		}
		n++;
		
	}
	if (prime==0){
		printf("The number is the prime number ");
	}
	else {
		printf("The number is not prime ");
	}
}
