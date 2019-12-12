# Learning C ![C](https://cdn.iconscout.com/icon/free/png-256/c-programming-569564.png)


## To Fight Imposter Syndrome - My Daily Sprint Tracker
Technologies Used: Git | GitHub | VsCode | Pen & Paper

**Dartmouth IMT-C.01**

### Lesson 1.1 Objectives

	[] modify the 'hello world' program to create a C-program that prints text and special characters to the screen
	[] create C-programs that utilize one or more for loops to repeat one or more printing instructions a defined number of times
	[] explain C-code by adding comments
	[] use comments in three different ways:
        	[] at the end of (but on the same line as) an instruction
        	[] on one line by itself
        	[] over multiple lines
	[]recognize and label the preprocessor directives, the main program, the variable declaration section and the statement section of the main function of a simple C-program

#### [40 minute sprint Dartmouth Edx - 11/18/19]
- Print characters to the screen
- Know how to start a new line
- Syntax Errors
- Print quotation mark and escape special characters ( ‘\’ )

#### [45 minute sprint Dartmouth Edx - 11/19/19]
- Repeat an instruction with a for loop
- Repeat multiple instructions with for loop
- Repeat a block of instructions with a for loop
- Common Looping Errors
- Fixing Bracketed Errors

### Lesson 1.2 Objectives
	[] use the format specifier %d in printf statements to print integers and results of integer operations
	[] explain the concept of a variable
	[] distinguish between declaring a variable and assigning a value to a variable
	[] declare a variable of type integer
 	[] assign a value to a variable of type integer
	[] re-assign a value to an integer-type variable
	[] update the value of an integer-type variable based on its previous value
	[] use variables inside loops to modify an instruction based on the value of the variable
	[] read one or more integer inputs from the user using scanf()
	[] process user integer input to determine looping behavior of a program


#### [140 minute sprint Dartmouth Edx - 11/19/19]
- Making comments in C ( // )
- Comments after end of instruction
- Comments inside comments to debug by disabling parts 
- You work in the C-programming censorship office and your job is to ensure that programs written by developers comply with certain rules. 
	The two censorship rules are as follows:
	- Programs cannot use for-loops with more than 10 repetitions.
	- Programs are not allowed to say 'goodbye!'.
- Single / multiple line commits
- Preprocessor directive 
- Main function
- Variable declaration
- Executable statements
- Return statement
- Use format specifier %d to print integer value within printf (function)
- Perform simple integer arithmetic with format specifier
- Create variable (declaration) and initialize (assignment, definition, initialization) variables in the form of integers in one instruction
- Syntax rules for declaring/naming a variable(s)
- Printed a multiplication table in C & Python programming language
- Reading single integers using scanf() statement
- Reading multiple integers using scanf() statement

#### [ 30 minute sprint Dartmouth Edx - 11/20/19 ]
- Using scanf() inside a loop to read multiple user inputs

#### [ 45 minute sprint Dartmouth Edx - 11/20/19 ]
- Process user integer input to determine looping behavior of a program *WALL* -I will try again in the morning

#### [ 45 minute sprint Dartmouth Edx - 11/21/19 ]
- Worked on problem set (:
  
#### [ 40 minute sprint Dartmouth Edx - 11/21/19 ]
- Finished problem set, debugged problem and bypassed WALL onto next adventure!!
- Use the format specifier %d in printf statements to print integers and results of integer operations
- Explain the concept of a variable
- Distinguish between declaring a variable and assigning a value to a variable
- Declare a variable of type integer
- Assign a value to a variable of type integer
- Re-assign a value to an integer-type variable
- Update the value of an integer-type variable based on the value of the variable
- Read one or more integer inputs from the user using scanf
- Process user integer input to determine looping behavior of a program

### Lesson 1.3 Objectives
	[] distinguish between and give examples of integer, double and character data
	[] declare a variable of type char
	[] declare a variable of type double
	[] assign a character to a variable of type char
	[] assign a decimal to a variable of type double
	[] use the format specifier %c to read character using scanf and print characters using printf
	[] use the format specifier %lf to read decimals using scanf
	[] use the format specifier %lf with modifiers to print decimals to a given precision
	[] predict results of integer division in C
	[] explain the importance of conversion between integer and double data types
	[] use casting to convert between integer and double data types
	[] create C-programs that perform tasks involving user input, integer and floating point arithmetic operations and output to the screen

#### [ 90 minute sprint Dartmouth Edx - 11/22/19 ]
- Declare, assign, and print characters with %c format specifier
- Prompt user to know what to input correctly
- Declare, assign, and print decimal numbers with type double (%lf)
- Read decimal numbers from user input with scanf()
- Read ints and doubles with scanf()

#### [ 45 minute sprint Compiling Code Implementation - 11/23/19 ]
- Researched C automation for reading files and writing files in excel
- Found out that Python was a better solution

#### [ 45 minute sprint Dartmouth Edx - 11/24/19 ]
- Worked on problem set 1.3
- Differentiating between using format specifiers (%d and %lf)
- Posed a question in stackoverflow (found the answer in the suggested box)
- Divide in C
- Stack: Why does scanf() need “%lf” for doubles, when printf() is okay with just “%f”?
	- [answer](https://stackoverflow.com/questions/210590/why-does-scanf-need-lf-for-doubles-when-printf-is-okay-with-just-f)

#### [ 45 minute sprint Dartmouth Edx - 11/24/19 ]
- Find the remainder in integer division
- Convert int to doubles

#### [ 140 minute sprint Dartmouth Edx - 11/25/19 ]
- Completed 1.3_1 problem set
- Convert doubles to integers
- Completed 1.3_2 problem set
- Debugged Following Bugs:
	- error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘expected’
	- error: ‘percentGrowth’ undeclared (first use in this function)
	- error: conflicting types for ‘expected’
- Corrected main error by assigning a double value to a variable of type int

#### [ 40 minute sprint - 11/25/19 ]
- Read unoffical [C documentation](http://www.open-std.org/jtc1/sc22/wg14/www/docs/n1124.pdf)
	- Questions:
		- *What is conditional inclusion?* Purpose of conditional inclusion is to allow the program to behave differently from run to run, depending upon the data it is operating on. Conditional inclusion statements are evaluated at complile time or even before a compilation by a special program called Preprocessor
		- *What is #include ?* Processing directive 
		- *What is a processing directive?* A language construct that specifies how a compiler (or other translator) should make means of its input.
		- *What is a language construst?* A syntactically allowable part of a program that may be formed from one or more lexical tokens in accordance with the rules of the programming language. It is the control structure - what is allowed within the confines of the programming language and what is not.
		- *What is 'int main(void)'?* It is a function called program startup. It delares no protoype for this function. It shall be defined with a return type of in and no paramenters.
			- int main(void) { /* ... */ }
			- int main(int argc, char *argv[]) { /* ... */ }
			- when these are declared the parameters shall obey the constraints
			- the value argc shall be nonnegative
			- if value of argc is greater than zero, the array members argv[0] through argv[argc-1] shall contain pointers to strings which have been given implementation defined values by the host environment prior to #include. 
			- if the host environment is unable to supply strings with letters in both uppercase and lowercase, the implementation shall ensure that the strings are recieved in lowercase.
- Read pages (1 - 24)

#### [ 0 minute sprint - 11/26/19 ]
- None

#### [ 45 minute sprint Dartmouth Edx - 11/27/19 ]
- Completed 1.3_3 problem set
- Completed 1.3_4 problem set
- Pushed problem sets to GitHub

#### [ 60 minute sprint - 11/28/19 ]
- Read documentation

#### [ 60 minute sprint Dartmouth Edx - 11/29/19 ]
- Stating DART.IMT.C.02 - Language Foundations
- Familiarizing with logical conditions, arrays, sorting algorithms, and search algorithms
- If statement with a static condition
- Else statements with a static condition
- Worked on 2.1_1 problem set

#### [ 60 minute sprint Dartmouth Edx- 11/30/19 ]
- Finished problem set 2.1_1  
- Finished problem set 2.1_2

#### [ 0 minute sprint - 12/1/19 ]
- None

#### [ 0 minute sprint - 12/2/19 ]
- None

#### [ 90 minute sprint Dartmouth Edx- 12/3/19 ]
- Read Documentation
- Finished problem set 2.1_3
- Worked on problem set 2.1_4

#### [ 60 minute sprint - 12/4/19 ]
- Read Documentation (C structure, Compiler, Language Keywords, Functions, Commenting, #include, return)
- Finished problem set 2.1_4 - Perhaps look into more work on loops to be more comfortable with implementing them freely

#### [ 60 minute sprint - 12/5/19 ]
- Read Ritchie Kernighan C Documentation

#### [ 60 minute sprint - 12/6/19 ]
- Read Ritchie Kernighan C Documentation

#### [ 90 minute sprint - 12/7/19 ]
- Read Rirchie Kernighan C Documentation
- Symbolic Constants, For Statements, While Loops, Variabled and Arithmetic Expression
- Worked on exercises: how to input text, compile it, load it, run it, and find where output went

#### [ 0 minute sprint - 12/8/19 ]
- None

#### [ 30 minute sprint - 12/9/19 ]
- Read Rirchie Kernighan C Documentation 
- File copying, increment operator, Getchar, Zero-Length input, Boundary Conditions, Line counting, Character constant, single constants, string constant, 
- Wrote 3 programs that counted blanks, tabs, and newlines

#### [ 60 minute sprint - 12/10/19 ]
- Read Rirchie Kernighan C Documentation 

#### [ 60 minute sprint - 12/11/19 ]
- Researched beginner open source contributor projects for C programming via GitHub
- [awesome-for-beginners](https://github.com/MunGell/awesome-for-beginners)
	- Vim-fork focused on extensibility and agility.





Resources:
	-[1 - documentation](http://www.open-std.org/jtc1/sc22/wg14/www/docs/n1124.pdf) 
	-[2 - Documentation](https://public.support.unisys.com/framework/publicterms.aspx?returnurl=%2faseries%2fdocs%2fClearPath-MCP-17.0%2fPDF%2f86002278-305.pdf)






