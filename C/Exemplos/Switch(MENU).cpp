//MENU WITH SWITCH

#include <stdio.h>

int main (){

	int Num1, Num2, Option, Answer;
	
	printf("1- Sum.\n");
	printf("2- Subtraction.\n");
	printf("3- Multiplication.\n");
	printf("Choise an option:");
	scanf("%d", &Option);
	
	if(Option>=1 && Option<=3){
	
		printf("Enter the first number:");
		scanf("%d", &Num1);
		printf("Enter the second number:");
		scanf("%d", &Num2);
		
		switch(Option){

			case 1:
				Answer = Num1 + Num2;
				break;
			
			case 2:
				Answer = Num1 - Num2;
				break;
			
			case 3:
				Answer = Num1 * Num2;
				break;
		}
		printf("Answer: %d", Answer);
		
	}else{
			printf("Option not available.");
	}
}

