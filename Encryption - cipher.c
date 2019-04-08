#include <stdio.h>

int main(void)
{
    char c;
    int asc[1024];
    int i;
    int key = 5;
    
    //Open message file
    FILE *input;        //File points to input
    
    input = fopen("Task 1 message", "r");   //open file name and read format
    if(input == NULL) {         //Error message incase file directory not found
        perror("fopen()");
    return 0;
    }
    
       
    for(i = 0; i <= 15; i++){       //assigns incrementing array pointers to character values
        
        fscanf(input,"%c", &c);      
        asc[i] = c;
        printf("%c %d %d %c\n", asc[i], asc[i], asc[i] - key, asc[i] - key); //prints array character & ASCII value, then  ASCII value with key applied & decrypted array character
        
    }    

   


  
   return 0; 

}

