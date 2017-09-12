################
Ramon Bustamante
88541175 fall 2017
Theory of operating systems
###########################
For this tokenizer project the exit does not work on the while loop.
Also the test cases were printing wierd maybe because of memory allocation.
to use the test cases simply uncomment the section marked test.
the loop will give out the correct number of tokens from the read input which only allows up to 100 characters

For compiling simply go to the tokenizer folder and type make in the terminal, 
there were only warnings of implicit declaration for the write and read methods.maybe because of the library used on the include.
using <unistd.h> for the read and write librarys will give more warnings.

to run the program type make play
input will be needed to run the tokenizer if the test section is commented.

although simple in theory this project was a bit tricky because of the pointer navigation and data casting needed to be done correctly. 
Using the <unistd.h> created trouble for me early on because of the many warnings it would give that the regular header for the read and write would not have given.
