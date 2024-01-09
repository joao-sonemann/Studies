#include <stdio.h>

void Reverseposition( int *num1, int *num2){
 	int temp;
 	
 	temp = *num1; 
 	*num1 = *num2;
 	*num2 = temp;
 	
}

void invertido(){
	printf("\n ******************************************** \n");
	printf("\n                 INVERTED \n");
	printf("\n ******************************************** \n");
}
int main()
{
	
    int Value1 = 50, Value2 = 100;
    
   	printf("\n Value 1 = %d \n Value 2 = %d \n", Value1, Value2);
   	
	Reverseposition (&Value1, &Value2);
	invertido();
	
	printf("\n Value 1 = %d \n Value 2 = %d \n", Value1, Value2);
}



