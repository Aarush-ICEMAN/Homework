************************************************************************************************************************************************
// firstly made the swap program and wrote the arrays in itself too                                                                            | 
//after that made the main bubble sort program and wrote its code                                                                              |                                                                               
//Write the code to run the array                                                                                                              |
// at last write the code for the driver                                                                                                       |
//main summary of the bubble sort technique                                                                                                    |
************************************************************************************************************************************************
#include <stdio.h>
void swap (int*arr, int i , int j ){
   int temp = arr[i];
	arr[i]= arr[j];
	arr[j]= temp;
	//here we have made the swap program 
	//after that we will use the bubble sort program ;
}
void bubbleSort(int arr[], int n){
	int i,j;
	for (i=0;i<n-2;i++)
	for (j=0;j<n-i-2;j++)
	// use of if condtion
	if (arr[j]>arr[i+j])
	    swap (arr,j,j+1);
	// Now write a function to print an array 
}
void printArray(int arr[], int size){
	int i;
	for (i=0;i<size;i++ )
	printf("%d\n",arr[i]);
}
//writing the code for the driver 
void main(){
		int arr[] = { 5,9 ,1 ,4 ,2 }; 
	int N = sizeof(arr) / sizeof(arr[0]); 
	bubbleSort(arr, N); 
	printf("Sorted array: "); 
	printArray(arr, N); 

}

