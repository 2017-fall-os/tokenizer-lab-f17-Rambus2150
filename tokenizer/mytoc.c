    //this is  reserved for the mytok
   
    #include <stdio.h>
    #include <stdlib.h>
    
    //\0 is null terminator
    
   //helper method for calulating the numwords or tokens
    int numWords(char * str, char delim){
        int count=0;
        int tokens=0;
        while(str[count]!= '\0'){
            if((str[count] == delim && str[0]!= delim)||str[count+1]=='\0'){
            tokens++;
            }
                count++;
        }
        
        return tokens;
    }

    char **mytoc(char * str, char delim){
        int totalNumWords=0;
        totalNumWords = numWords(str,delim);
        int numChars= 0;
        int count=0;
        int tokPos=0;
        
    //helper string for copying
        
        char *hStr;
        char **tokenVec = (char **)calloc(totalNumWords +1, sizeof(char *));
    
        
        while(str[count] != '\0'){
    
            //checking the delim reached
        
            if(str[count] == delim || str[count+1] == '\0'){
            
                //help on this.
            //if statement avoids missing out the last character of the string before the end of line
            if(str[count+1] == '\0'){
        numChars++;
        count++;
        
        }      
        //allocate memory
        
        tokenVec[tokPos] = (char *)malloc(numChars+1);//allocate memory for the token at
        
        //allocate memory for the hStr 
        
        hStr = (char *)malloc(numChars+1);
        
        //add terminator at the end of the hStr
        
        hStr[numChars+1] = '\0';
        
        //count to keep track of position o
        
        int hCount = 0;
        while(numChars > 0){
        
            //copying chars from the input string to the hStr
        
            hStr[hCount] = str[count-numChars];
        
            numChars--;
            hCount++;
        }

        //store the h string into the array
        tokenVec[tokPos] = hStr; 
        tokPos++;
        
        }
        else{
        numChars ++;

        }
        count++;  

    }
    //add the null character at end
    
    tokenVec[tokPos+1] = '\0';    
    
    return tokenVec;

    }
