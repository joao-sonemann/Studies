// Exercicio aula com funçao
// Criar um programa para solicitar 2 numeros float e realizar a multiplicação deles.
// O primeiro numero não pode ser igual ao segundo e os numeros devem ser positivos.
// observe, que é obrigatório o uso de função
#include<stdio.h>

float Soma (float N1, float N2);
float Multiplicacao (float N1, float N2);

int main()
{
	float Num1, Num2;
	printf("Informe o primeiro numero: ");
	scanf("%f", &Num1);
	
	printf("Informe o segundo numero: ");
	scanf("%f", &Num2);
	
	while(Num1 == Num2 || Num1 <0 || Num2 <0){
			printf("Informe o primeiro numero diferente do segundo e maior que zero: ");
			scanf("%f", &Num1);
	
			printf("Informe o segundo numero diferente do primeiro e maior que zero: ");
			scanf("%f", &Num2);
	}
	
	printf(" \n");
	
	printf("%.2f \n",Soma(Num1, Num2));	
	printf("%.2f",Multiplicacao(Num1, Num2));

}

float Soma(float N1, float N2)
	{
		return N1 + N2;
	}
float Multiplicacao(float N1, float N2)
	{
		return N1 * N2;
	}



