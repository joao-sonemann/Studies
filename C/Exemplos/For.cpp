// 2) Fa�a um programa para calcular a m�dia dos pesos de 10 amigos. Voc� solicita o peso e informa a m�dia no final

#include <stdio.h>

int main()
{
	int Amigo;
	float Peso, Media=0;
			for(Amigo=1; Amigo<=10; Amigo++) 
				{
			   		printf("Infome o peso do amigo %d:\n ", Amigo);
					scanf("%f",&Peso);
					Media= Media + Peso;
				}
			printf("A media dos pesos e:\n %.2fKg \n ", Media/10);
}
