# 0x0B. C - malloc Project
The “malloc” or “memory allocation” method in C is used to dynamically allocate a single large block of memory with the specified size. It returns a pointer of type void which can be cast into a pointer of any form. It doesn’t Initialize memory at execution time so that it has initialized each block with the default garbage value initially. 

Syntax of malloc() in C

ptr = (cast-type*) malloc(byte-size)
For Example:

ptr = (int*) malloc(100 * sizeof(int));
Since the size of int is 4 bytes, this statement will allocate 400 bytes of memory. And, the pointer ptr holds the address of the first byte in the allocated memory.

If space is insufficient, allocation fails and returns a NULL pointer.

###TASKS

### File: `0-create_array.c` is a function that creates an array of chars, and initializes it with a specific char.

### File: `1-strdup.c` is a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

### File: `2-str_concat.c` is a function that concatenates two strings.

### File: `3-alloc_grid.c` is a function that returns a pointer to a 2 dimensional array of integers.

### File: `4-free_grid.c` is a function that frees a 2 dimensional grid previously created by our alloc_grid function.

### File: `100-argstostr.c` is a function that concatenates all the arguments of our program.

### File: `101-strtow.c` is a function that splits a string into words.

### File: `main.h` is a header file contaning all the function prototypes.
