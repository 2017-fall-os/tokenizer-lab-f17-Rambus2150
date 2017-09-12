    //this is reserved for the test or main.
    #include <stdio.h>
    #include <stdlib.h>
    #include "mytoc.h"
 
    
    int main (void){
    
    //cant have more than 100 chars
    char *input = (char*)malloc(100);
    
    //test cases uncomment to use test cases.
    /*********************test section***********************************/
    char ** test1 = mytoc("\0", ' ');
     char ** test2 = mytoc("  Hello   World!   \0 ", ' ');
      char ** test3 = mytoc("     \0", ' ');
        char ** test4 = mytoc(" Hello\0", ' ');
        write(1,'\n',1);
    //Print out the tokens from ** test
        int count=0;
    while(count<4){
        //test1
        if(count==0)
            for(int i = 0; test1[i] != '\0'; i++){
            write(1,",",1);
            write(1,test1[i],(sizeof(test1[i]))+1);
            }
            //test2
       else if(count==1){
          write(1,'\n',1);
            for(int i = 0; test2[i] != '\0'; i++){
            write(1,",",1);
            write(1,test2[i],(sizeof(test2[i]))+1);
            }
           
        }
        //test3
       else if(count==2){
          write(1,'\n',1);
            for(int i = 0; test3[i] != '\0'; i++){
            write(1,",",1);
            write(1,test3[i],(sizeof(test3[i]))+1);
            }
        }
        //test 4
        else if(count==3){
            write(1,'\n',1);
            for(int i = 0; test4[i] != '\0'; i++){
            write(1,",",1);
            write(1,test4[i],(sizeof(test4[i]))+1);
            }
        }
        count++;
    }
    /***********************end test section**************************/
    // loops to get input strings from user
    
    while(1){
        
        //print a new line
        ///trying write
        write(1,'\n',1);
        //Print dollar symbol on console
       
        write(1,"$",1);
        read(0,input,100);
        if(input=="exit"){
            return 0;
        }
        //store the tokens retrieved from the mytoc function call
        
        char ** tokens = mytoc(input,' ');
        
        for(int i = 0; tokens[i] != '\0'; i++){
        
        //separate each token
        
        write(1,",",1);
        
        write(1,tokens[i],(sizeof(tokens[i]))+1);
        
        }
        write(1,'\n',1);

    }
    return 0;
    }
