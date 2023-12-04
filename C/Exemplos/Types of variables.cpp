#include <stdio.h>
#include <string.h>

int main()
{
    
//INT
    int typeint;
        printf("Type Int: ");
        scanf("%d",&typeint);
        
        printf("Type Int: %d \n", typeint);

//FLOAT
    float typefloat;
        printf("Type Float: ");
        scanf("%f",&typefloat);
        
    //You can change how much number after "." using %.2f 2 number after ".".
        printf("Type Float: %.2f \n", typefloat);

//CHAR
    //Just one Letter
    
    char typechar;
    getchar(); // for clean input Buffer.
        printf("Type Char: ");
        scanf("%c",&typechar);
        
    //for a word you need use string.
        printf("Type Char: %c \n", typechar);




//STRING
    
    char typecharstring[20];
    getchar(); // for clean input Buffer.
    
        printf("Type Char String: ");
        gets(typecharstring);
        
    //for change size of word just change number in char typechar[20];.
        printf("Type Char String: %s \n", typecharstring);



  
}

