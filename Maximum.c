#include <stdio.h>
int main (){
	int n;
	printf("Enter the number of elements you want : ");
	scanf("%d",&n);
	if (n==0){
		printf("not correct ");
		return 1;
	}
	int max;
	printf("Element 1 :  ");
	scanf("%d",&max);
	int i ,num;
	for(i=2;i<=n;i++){
		printf("The elements are %d : ",i);
		scanf("%d",&num);
		if (max<num){
			max = num;
		}
	}
	printf("The maximum entered element is %d\n",n);
	return 0;

}
