## 0x09-static_libraries Project ##

![image](https://user-images.githubusercontent.com/105589308/194304775-87c925ad-f7dc-41b9-a28a-68e7f8396659.png)

General
What is a static library, how does it work, how to create one, and how to use it

Basic usage of ar, ranlib, nm

### NOTE All the files within this Folder are made executable ###

This project finds solutions to the following:

## Resource

- [What Is A “C” Library? What Is It Good For?](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html).
- [Creating A Static “C” Library Using “ar” and “ranlib”](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html).
- [Using A "C" Library In A Program](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html).
- [What is difference between Dynamic and Static library(Static and Dynamic linking)](https://www.youtube.com/watch?v=eW5he5uFBNM) (stop at 4:44)

---
## Tasks

0. [A library is not a luxury but one of the necessities of life](./libholberton.a) : Creating a static library containing all the functions listed below.
	- Functions;
		```sh
		int _putchar(char c);
		int _islower(int c);
		int _isalpha(int c);
		int _abs(int n);
		int _isupper(int c);
		int _isdigit(int c);
		int _strlen(char *s);
		void _puts(char *s);
		char *_strcpy(char *dest, char *src);
		int _atoi(char *s);
		char *_strcat(char *dest, char *src);
		char *_strncat(char *dest, char *src, int n);
		char *_strncpy(char *dest, char *src, int n);
		int _strcmp(char *s1, char *s2);
		char *_memset(char *s, char b, unsigned int n);
		char *_memcpy(char *dest, char *src, unsigned int n);
		char *_strchr(char *s, char c);
		unsigned int _strspn(char *s, char *accept);
		char *_strpbrk(char *s, char *accept);
		char *_strstr(char *haystack, char *needle);
		```
	- File [holberton.h](./holberton.h) contains all of the above functions created from previous projects.
	- Steps to create static library.
		- First compile all `.c` files to get our object files `.o` files.
			`gcc -c *c`
		- Then we create our static library from our object files.
			`ar rc libholberton.a *.o`
		- Then we confirm if our static library was created successfully.
			`ar -t libholberton.a`
		- We confirm if our object files were linked successfully.
			`nm libholberton.h`
	- Compile the main code to test our static library this way: `gcc -std=gnu89 main.c -L. -lholberton -o quote`
---
1. [Without libraries what have we? We have no past and no future](./create_static_lib.sh) : Create a script that creates a library called `liball.a` from all the `.c` files that are in the current directory.


### Note: In creating a static library ###

  - gcc -c *.c > This converts .c files to .o (object) files
  - ar rcs libmy.a *.o
  - ar rc libmy.a *.o > This creates the static library "Libmy.a"
  - ar -t libmy.a > This lists all files in libmy.a

- ranlib libmy.a > This converts to random library

  - After creating a static library and you would want to compile for testing use:
  - > gcc -std=gnu89 main.c -L -lmy -o(new_file_name)
    > 0x0A. C - argc, argv

General Learning Objectives

    How to use arguments passed to your program
    What are two prototypes of main that you know of, and in which case do you     use one or the other
    How to use __attribute__((unused)) or (void) to compile functions with unused variables or parameters

TASK 0 Write a program that prints its name, followed by a new line.

    If you rename the program, it will print the new name, without having to compile it again
    You should not remove the path before the name of the program

TASK 1 Write a program that prints the number of arguments passed into it.

    Your program should print a number, followed by a new line

TASK 2 Write a program that prints all arguments it receives.

    All arguments should be printed, including the first one
    Only print one argument per line, ending with a new line

TASK 3 Write a program that multiplies two numbers.

    Your program should print the result of the multiplication, followed by a new line
    You can assume that the two numbers and result of the multiplication can be stored in an integer
    If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1

TASK 4 Write a program that adds positive numbers.

    Print the result, followed by a new line
    If no number is passed to the program, print 0, followed by a new line
    If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
    You can assume that numbers and the addition of all the numbers can be stored in an int

