// exemplo vetor
# include <stdio.h>


int main()
{
    float nota [10];
    int i;

    for (i=0; i<10;i++){
        printf ("\nInforme a nota dos alunos");
        scanf ("%f",&nota[i]);
    }   
    for (i=0; i<10;i++){
        printf ("\nNota do aluno %d = %f ", i+1, nota[i]);
    }
}    

