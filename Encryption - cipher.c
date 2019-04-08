#include <stdio.h>

int main(void)
{
    char c, e;
    int asc[1024];
    int i;
    int k = 5;  //key
    
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
        e = (c+k);  //encryption algorithm  
        /*prints array character & ASCII value, then encrypted array character*/
        
        if(e >= 65 && e <= 90){
            printf("%c %d %c\n", asc[i], asc[i], e);    //prints capital letters
        }
        else if(e >= 97 && e <= 122){                   //converts non-capital to capital and prints
            printf("%c %d %c\n", asc[i]-32, asc[i]-32, e-32); 
        }
    



        

        
        

    }    

   


  
   return 0; 

}

