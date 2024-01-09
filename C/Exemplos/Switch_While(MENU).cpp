//WHILE WITH MENU SWITCH
#include <stdio.h>

int main(){

 	int Option, num1, num2;
	
		printf ("Menu");
		printf ("\n 1 - Sum");
		printf ("\n 2 - Subtraction");
		printf ("\n 3 - End");
  
		printf ("\n Choise an option:");
		scanf ("%d",  Option);
  
			while ( Option < 1 || Option > 3){
				printf ("\n Choise an option: (1, 2 ou 3)");
				scanf ("%d",  Option); 
			}
  
  
			while ( Option !=3){
				printf ("\nEnter the first number: ");
				scanf ("%d", &num1);
				printf ("\nEnter the second number: ");
				scanf ("%d", &num2);  
					switch ( Option){
						case 1: printf ("Sum = %d ", num1 + num2);
						break;
			
						case 2: printf ("Subtraction = %d ", num1 - num2);
						break;          
					}
				
				printf ("\n Choise another option: (1, 2 ou 3)");
				scanf ("%d",  Option);
				
					while ( Option < 1 || Option > 3){
							printf ("\n Choise an option: (1, 2 ou 3)");
							scanf ("%d",  Option); 
					}
			}    
 }

