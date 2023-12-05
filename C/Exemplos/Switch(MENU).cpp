//MENU WITH SWITCH

#include <stdio.h>

int main (){

	int Num1, Num2, Opcao, Resposta;
	
	printf("1- Soma.\n");
	printf("2- Subtracao.\n");
	printf("3- Multiplicacao.\n");
	printf("Digite uma opcao:");
	scanf("%d", &Opcao);
	
	if(Opcao>=1 && Opcao<=3){
	
		printf("Digite o primeiro numero:");
		scanf("%d", &Num1);
		printf("Digite o segundo numero:");
		scanf("%d", &Num2);
		
		switch(Opcao){

			case 1:
				Resposta = Num1 + Num2;
				break;
			
			case 2:
				Resposta = Num1 - Num2;
				break;
			
			case 3:
				Resposta = Num1 * Num2;
				break;
		}
		printf("resposta: %d", Resposta);
		
	}else{
			printf("Opcao nao existe.");
	}
}

