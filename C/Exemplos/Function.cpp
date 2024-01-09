// Function

#include<stdio.h>

float Sum (float N1, float N2);
float Multiplication (float N1, float N2);

int main()
{
	float Num1, Num2;
	printf("Enter the first number: ");
	scanf("%f", &Num1);
	
	printf("Enter the second number: ");
	scanf("%f", &Num2);
	
	while(Num1 == Num2 || Num1 <0 || Num2 <0){
			printf("Enter the first number that is different from the second and greater than zero: ");
			scanf("%f", &Num1);
	
			printf("Enter the second number that is different from the first and greater than zero: ");
			scanf("%f", &Num2);
	}
	
	printf(" \n");
	
	printf("%.2f \n",Sum(Num1, Num2));	
	printf("%.2f",Multiplication(Num1, Num2));

}

float Sum(float N1, float N2)
	{
		return N1 + N2;
	}
float Multiplication(float N1, float N2)
	{
		return N1 * N2;
	}



