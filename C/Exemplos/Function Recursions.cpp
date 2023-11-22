//1)	Escreva um programa para calcular a m�dia aritm�tica dos entre o n�mero lido at� 1.
// Utilizando recursividade para o c�lculo. Exemplo se o n�mero lido for 6, o c�lculo ser�:
// (6+5+4+3+2+1)/6.
#include <stdio.h>
float mediaarit(float n);

int main()
{
	float numerocalc =10;
	printf("resultado: %f", (mediaarit(numerocalc))/6);

}

float mediaarit(float n){
    if(n == 0)
        return 0;
    else
        return n + mediaarit(n - 1);
}
