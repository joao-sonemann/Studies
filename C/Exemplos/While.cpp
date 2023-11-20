//1)Escreva um programa que peça três inteiros, correspondentes a dia , mês e ano. Peça os números até 
// conseguir valores que estejam na faixa correta (dias entre 1 e 31, mês entre 1 e 12 e ano entre 1900 e 2100).
// Verifique se o mês e o número de dias batem (incluindo verificação de anos bissextos). 
// Se estiver tudo certo imprima o número que aquele dia corresponde no ano. Comente seu programa.
//  PS:
//  Um ano é bissexto se for divisível por 4 e não for divisível por 100, exceto para os anos divisíveis por 400 que também são bissextos.
#include <stdio.h>

int main()
{
	int Dia, Mes, Ano, Soma;
	
		printf("Infome um dia entre 1 e 31:\n ");
		scanf("%d",&Dia);
		printf("Infome um mes entre 1 a 12:\n ");
		scanf("%d",&Mes);
		printf("Infome um ano entre 1900 a 2100:\n ");
		scanf("%d",&Ano);
		
		while( Dia <=0 || Dia >=32, Mes <=0 || Mes >=12, Ano <=1900 || Ano >=2100)
			{
				printf("\nAlgum Valor esta incorreto.\n ");
				printf("\nInfome um dia entre 1 e 31:\n ");
				scanf("%d",&Dia);
				printf("\nInfome um mes entre 1 a 12:\n ");
				scanf("%d",&Mes);
				printf("\nInfome um ano entre 1900 a 2100:\n ");
				scanf("%d",&Ano);
			}
		
		Soma = Dia + (Mes*31);
		
		printf("\nEssa data representa o dia %d no ano %d\n ", Soma, Ano);
}

