//exemplo while com menu
#include <stdio.h>

int main()

{
 	int opcao, num1, num2;
 	printf ("Menu");
 	printf ("\n 1 - Soma");
 	printf ("\n 2 - Subtracao");
 	printf ("\n 3 - Fim");
  
 	printf ("\n Informe a opcao do Menu");
 	scanf ("%d", &opcao);
  
  		while (opcao < 1 || opcao > 3)
 		{
   			printf ("\n Informe a opcao do Menu (1, 2 ou 3)");
   			scanf ("%d", &opcao); 
  		}
  
  
  		while (opcao !=3)
  		{
   		printf ("\nInforme o valor 1 ");
   		scanf ("%d", &num1);
  		printf ("\nInforme o valor 2 ");
  		scanf ("%d", &num2);  
  		  switch (opcao)
  		  {
    	  	case 1: printf ("Soma = %d ", num1 + num2);
              break;
 
    		case 2: printf ("Subtracao = %d ", num1 - num2);
              break;          
    		}
    		
		    printf ("\n Informe outra opcao do Menu (1, 2 ou 3)");
		    scanf ("%d", &opcao);
		    
	    	while (opcao < 1 || opcao > 3)
	    		{
	    			printf ("\n Informe a opcao do Menu (1, 2 ou 3)");
	      			scanf ("%d", &opcao); 
	   			}
 		 }    
 }

