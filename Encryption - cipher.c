#include <stdio.h>

int main(void)
{
    char c, eN;
    int eLib[] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90};
    int asc[1024];
    int i , e;
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
            c = c - 65; //A = 0
            e = c + k; //encryption algorithm 
            eN = eLib[e];  //selects encrypted value from array 
        }   

        else if(c >= 97 && c <=122){  //lower case
            asc[i] = c - 32;  //
            c = c - 97; 
            e = c + k;
            eN = eLib[e];           
        }
        
        else if(c < 65 || (c >= 91 && c <= 96) || c > 122 ){ //excludes any ASCII value that isn't a letter
            asc[i] = 32;  //
            eN = 32;  //
        }   

        printf("%c %d %c %d\n", asc[i], asc[i], eN, eN);
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