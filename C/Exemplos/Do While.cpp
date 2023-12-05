// DO WHILE
// Calculate the average age of the students in a queue. The number of students in this queue is not known in advance
// finish reading and accumulating the ages by entering age 0 (stop condition)

#include <stdio.h>

int main(){
   	
	int Quantity=0, Age_Total=0, Age;
  
		do{
			printf("\n Enter the student's age:\n");
			scanf("%d", &Age);
			if (Age > 0){
					Quantity ++;
			}      
				Age_Total = Age_Total + Age;     
		}
		
		while (Age != 0);
		
			if(Quantity > 0){
					printf("\n Average age of students:\n %.2f\n", (float)Age_Total/Quantity);
				} else{
					printf("\n No students to calculate.\n");
				}
}

