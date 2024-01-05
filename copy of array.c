#include <stdio.h>
int main(){
	int temp,i,a=0,b=1,n;
	printf("Enter the fibonacci series that you want : ");
	scanf("%d",&n);
	printf("The fibonacci series of %d elements is : \n",n);
	for (i=0;i<n;i++){
		printf("%d",a);
		temp = a+b;
		a=b;
		b=temp;
		
	}
	return 0;
	
}
