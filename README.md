### C++ Frequency Program - Joseph Dengler
# Summary
  The program successfully resulted in a command-line tool for counting the frequency of items in a file.
  Once the program is running, you will be presented with a menu of options:
    * Get item frequency
    * Print frequency list
    * Print frequency histogram
    * Exit
    
  To select an option, enter the corresponding number and press Enter.

 - Looking back at the code, some ways I could enhance this code to make it more effcient and secure include:
    * Using smart pointers instead of raw pointers. Smart pointers are safer and easier to manage 
      than raw pointers as they automatically release the allocated memory when out of scope.
    * Using vectors instead of arrays. Vectors are more flexible than arrays, as they can grow dynamically as
      needed and provide bounds checking to prevent out-of-bounds elements.
    * Validating the input file BEFORE reading it.
    
 - The biggest issue that I had while creating this program was by far getting the frequency.dat file correctly
   working. I used many resources throughout Google and primarly StackOverflow in further understanding how and
   why I was having issues reading and writting to files.
  
 - There are many things in this project that I believe carry over not only to other projects and course work but
   real scenarios. I found documenting my process made me challenge my code further and strive for something better
   Especially utilizing outside sources such as GitHub which is an industry standard.
   
 - This program is extremely well documented not only here but below and the Documentation .docx is attached to the repo.
   There is significant commenting explaining the code within itself as well.
   
# Brief user-end explaination below

### Get item frequency
This option allows you to get the frequency of a specific item in the input file. Enter the name of the item when prompted.

### Print frequency list
This option will print a list of all items and their frequencies in the input file.

### Print frequency histogram
This option will print a histogram of the item frequencies in the input file.

### Exit
This option will exit the program.

## Acknowledgments
- This program was created for the CS210 course at SNHU University.
- Thanks to Professor Michael Rissover for providing the prompt and input file used in this program.
