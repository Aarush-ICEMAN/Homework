#include <stdio.h>
int main (){
	int l,b,r,s;
	int choice ;
	printf("1. Calculate the area of Cirlce\n");
	printf("2. Clcualte the area of Rectangle\n");
	printf("3.Calculate the area of square\n ");
	printf("4.Quit\n");
	printf("Enter your choice (1/2/3/4)\n");
	scanf("%d",&choice );
	switch(choice){
		case 1: {
			int areaC ;
			printf("Enter the Radius of the circle : ");
			scanf("%d",&r);
			areaC = 3.14*r*r;
			printf("The Area of the circle is %d ",areaC );
			break;
		}
		case 2:{
			int areaR;
			printf("Enter the length of the Rectangle : ");
			scanf("%d",&l);
			printf("Enter the breadth of the Rectangle : ");
			scanf("%d",&b);
			areaR = l*b;
			printf("The area of the rectangle is %d",areaR);
			break;
		}
		case 3:{
				int areaSQ;
				printf("Enter the side of the square : ");
				scanf("%d",&s);
				areaSQ=s*s;
			printf("The area of the square is %d",areaSQ);
			break;
		}
		case 4:{
			printf("Invalid output");
		}
    } 
	return 0;	
}
