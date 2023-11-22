#include <stdio.h>

void inverteposicao( int *num1, int *num2){
 	int temp;
 	
 	temp = *num1; 
 	*num1 = *num2;
 	*num2 = temp;
 	
}

void invertido(){
	printf("\n ******************************************** \n");
	printf("\n                 INVERTIDO \n");
	printf("\n ******************************************** \n");
}
int main()
{
	
    int valor1 = 50, valor2 = 100;
    
   	printf("\n valor 1 = %d \n valor 2 = %d \n", valor1, valor2);
   	
	inverteposicao (&valor1, &valor2);
	invertido();
	
	printf("\n valor 1 = %d \n valor 2 = %d \n", valor1, valor2);
}



