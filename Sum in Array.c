#include <stdio.h>
int main (){
	int i,sum=0,n;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	int arr[n];
	printf("\nThe Size of the array is %d ");
	for (i=0;i<n;i++){
		printf("\nElement %d :",i+1);
		scanf("%d",&arr[i]);
	}
	for (i=0;i<n;i++){
		sum += arr[i];
	}
	printf("\nThe sum of the elements of the array is %d\n",sum );
	return 0;
	
}
