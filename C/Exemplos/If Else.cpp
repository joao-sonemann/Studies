//Exemplo if else

#include <stdio.h>

int main(){
	int num; 
	
	printf("Informe um numero maior que 10:\n");
	scanf("%d", &num);
	
	if(num >10){
		printf("O numero informado e maior que 10.");
	}else{
		printf("O numero informado e menor ou igual a 10.");
	}
}
