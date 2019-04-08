#include <stdio.h>

int main(void)
{
    char c;
    int asc[1024];
    int i;
    
    //Open message file
    
    FILE *input; 
    
    input = fopen("Task 1 message", "r");
    if(input == NULL) {
        perror("fopen()");
    return 0;
    }
    
       
    for(i = 0; i <= 15; i++){
     
        fscanf(input,"%c", &c);      
        asc[i] = c;
        printf("%c\n", asc[i]);
    }    

   


  
   return 0; 

}

