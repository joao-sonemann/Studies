// if else

#include <stdio.h>

int main(){
	int num; 
	
	printf("Enter a number greater than 10:\n");
	scanf("%d", &num);
	
	if(num >10){
		printf("The number entered is greater than 10.");
	}else{
		printf("The number entered is less than or equal to 10.");
	}
}
