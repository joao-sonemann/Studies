// Calcule a média das idades de alunos de uma fila. Não se conhece previamente a quantidade de alunos desta fila
// termine a leitura e o acumulo das idades ao informar a idade 0(condição de parada)

#include <stdio.h>

int main()
{
   	int Quantidade =0, Tota_idade =0, Idade;
  
    do
    {
       	printf("\nInforme a idade do aluno:\n");
		scanf("%d", &Idade);
	       if (Idade > 0)
	       {
	         	Quantidade ++;
	       }      
     		Tota_idade = Tota_idade + Idade;     
    }
    
    while (Idade != 0);
    
    	if(Quantidade > 0)
			{
				printf("\nMedia das idades dos alunos:\n %f\n", (float)Tota_idade/Quantidade);
			}
		else 
			{
				printf("\nNao tem alunos para calcular\n");
			}
}

