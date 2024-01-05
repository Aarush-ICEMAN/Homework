#include <stdio.h>
int main (){
	int sum=0,num,digit ;
	printf("enter the digits whose sum is that you want to get : ");
	scanf("%d",&num);
	while (num!=0){
		digit=num%10;
		sum+=digit;
		num/=10;
		
	}
	printf("The sum of the digits is : %d",sum);
	return 0;
	
}
