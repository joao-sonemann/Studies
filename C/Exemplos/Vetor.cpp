// VECTOR
# include <stdio.h>


int main(){
    
    float Grade [10];
    int i;

        for (i=0; i<10;i++){
            printf ("\n Report the student %d grade", i+1);
            scanf ("%f",&Grade[i]);
        }   
        
        for (i=0; i<10;i++){
            printf ("\nStudent %d grade = %.2f ", i+1, Grade[i]);
        }
}    

