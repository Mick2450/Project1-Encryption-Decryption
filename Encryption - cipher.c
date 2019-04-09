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
    
       
    for(i = 0; i <= 15; i++){ // incrementing array pointer
        
        /*Scans file for characters and stores them as a variable c*/
        fscanf(input,"%c", &c); 
        if(c >= 65 && c <= 90){ // upper case
            asc[i] = c;  //assigns array at array point i with value c
            e = (c+k);  //encryption algorithm  
        }   

        else if(c >= 97 && c <=122){  //lower case
            asc[i] = c - 32;  //
            e = (c+k) - 32;  //
        }
        
        else if(c < 65 || (c >= 91 && c <= 96) || c > 122 ){ //excludes any ASCII value that isn't a letter
            asc[i] = 32;  //
            e = 32;  //
        }   

        printf("%c %d %c\n", asc[i], asc[i], e);
    }
  
   return 0; 

}

/*   else if(c >= 97 && c <=122){
            asc[i] = c - 32;  //
            e = (c+k) - 32;  //
        }
        else if(c >= 97 && c <=122){
            asc[i] = c - 32;  //
            e = (c+k) - 32;  //
        }   */