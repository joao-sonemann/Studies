// FOR
// Make a program to calculate the average of the Weights of 10 Friends. 
// You request the Weight and enter the average at the end

#include <stdio.h>

int main(){

	int Friend;
	float Weight, Average=0;

			for(Friend=1; Friend<=10; Friend++){

			   		printf("Enter your friend's %d weight:\n ", Friend);
					scanf("%f",&Weight);
					Average= Average + Weight;
				}

			printf("Weight average:\n %.2fKg \n ", Average/10);
}
