/*Elabore um programa para ler valores em uma matriz 3x2 número inteiros. Após a leitura 
imprima os valores armazenados na matriz */

#include <stdio.h>
int main()
{
    int matriz[3][2], linha, coluna;
    
    for (linha = 0; linha <3; linha++)
    {
        for (coluna = 0; coluna < 2; coluna++)
        {
            printf ("\nInforme um numero para linha %d coluna %d  ", linha, coluna);
            scanf ("%d", &matriz[linha][coluna]);
        }    
    } 
    
    
    for (linha = 0; linha <3; linha++)
    {
        for (coluna = 0; coluna < 2; coluna++)
        {
            printf ("\nValor armazenado na matriz [%d] [%d] = %d",linha, coluna, matriz[linha][coluna]);
        }
    }    
    
}



