// WHILE
#include <stdio.h>

int main(){
	
	int Day, Mouth, Year, Sum;
	
		printf("Report a Day, number between 1 and 31:\n ");
		scanf("%d",&Day);
		printf("Report a Mouth, number between 1 and 12:\n ");
		scanf("%d",&Mouth);
		printf("Report a Year, number between 1900 and 2100:\n ");
		scanf("%d", Year);
		
			while( Day <=0 || Day >=32, Mouth <=0 || Mouth >=12, Year <=1900 || Year >=2100){
				printf("\nSome value is incorrect.\n ");
				printf("Report a Day, number between 1 and 31:\n ");
				scanf("%d",&Day);
				printf("Report a Mouth, number between 1 and 12:\n ");
				scanf("%d",&Mouth);
				printf("Report a Year, number between 1900 and 2100:\n ");
				scanf("%d", Year);
			}
		
		Sum = Day + (Mouth*31);
		
		printf("\n This date represents the Day %d on Year %d\n ", Sum, Year);
}

