// Recursion
#include <stdio.h>
float Sumrecursion(float n);

int main()
{
	float Number =10;
	printf("Result: %f", (Sumrecursion(Number))/10);

}

float Sumrecursion(float n){
    if(n == 0)
        return 0;
    else
        return n + Sumrecursion(n - 1);
}
