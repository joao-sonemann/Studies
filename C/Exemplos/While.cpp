//1)Escreva um programa que pe�a tr�s inteiros, correspondentes a dia , m�s e ano. Pe�a os n�meros at� 
// conseguir valores que estejam na faixa correta (dias entre 1 e 31, m�s entre 1 e 12 e ano entre 1900 e 2100).
// Verifique se o m�s e o n�mero de dias batem (incluindo verifica��o de anos bissextos). 
// Se estiver tudo certo imprima o n�mero que aquele dia corresponde no ano. Comente seu programa.
//  PS:
//  Um ano � bissexto se for divis�vel por 4 e n�o for divis�vel por 100, exceto para os anos divis�veis por 400 que tamb�m s�o bissextos.
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

