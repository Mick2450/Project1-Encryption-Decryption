#include <stdio.h>

int main(void)
{
    char c;
    int asc[1024];
    int i;
    
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
        printf("%c %d\n", asc[i], asc[i]); //prints i number of array values and corresponding ASCII value
        
    }    

   


  
   return 0; 

}

