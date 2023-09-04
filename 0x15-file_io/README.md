# 0x15. C - File I/O

## Resources to read or watch:
* [File descriptors](https://en.wikipedia.org/wiki/File_descriptor)
* [C Programming in Linux Tutorial #024 - open() read() write() Functions](https://www.youtube.com/watch?v=dP3N8g7h8gY) | [Intranet](https://alx-intranet.hbtn.io/rltoken/9Tmu01qEnA9q9khz3gqzJQ)

### man or help:
**open**, **close**, **read**, **write**, **dprintf**

## Introduction/Objective
* To look for the right source of information online
* To know how to create, open, close, read and write files
* To know what file descriptors are
* To know what the 3 standard file descriptors are, their purpose and their **POSIX** names
* To know how to use the I/O system calls **open**, **close**, **read** and **write**
* To know what the flags, **O_RDONLY**, **O_WRONLY**, **O_RDWR** are, and how to use them
* To know what are file permissions, and how to set them when creating a file with the **open** system call
* To know what a system call is
* To know what the difference between a function and a system call

## General Requirements
* Allowed editors: **vi**, **vim**, **emacs**
* Allowed syscalls: **read**, **write**, **open**, **close**
* All files is compiled on **Ubuntu 20.04 LTS using gcc**, using the options **-Wall -Werror -Wextra -pedantic -std=gnu89**
* All files ends with a new line
* No more than 5 functions per file
* There is a **README.md** file, at the root of the folder of the project
* Codes are compiled using the **Betty style**
* The only C standard library functions allowed are **malloc**, **free** and **exit**.
* Also allowed to use **_putchar**
* The prototypes of all your functions and the prototype of the function **_putchar** should be included in your header file called **main.h**
* All header files were include guarded
* Tip: Symbolic constants **(POSIX)** vs numbers where used. For instance **read(STDIN_FILENO, ...** vs **read(0, ...**

## List of files and description:
| S/N   |       Files          |        Description  |
|:-----:|:--------------------:|:-------------------|
|1. | [0-read_textfile.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x15-file_io/0-read_textfile.c) | A function that reads a text file and prints it to the **POSIX** standard output. <ul><li>Prototype: **ssize_t read_textfile(const char *filename, size_t letters);**</li><li>where letters is the number of letters it should read and print</li><li>returns the actual number of letters it could read and print</li><li>if the file can not be opened or read, return **0**</li><li>if **filename** is **NULL** return **0**</li><li>if **write** fails or does not write the expected amount of bytes, return **0**</li></ul> |
|2.|[1-create_file.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x15-file_io/1-create_file.c) | To create a function that creates a file. <ul><li><li>Prototype: **int create_file(const char *filename, char *text_content);**</li><li>where **filename** is the name of the file to create and **text_content** is a **NULL** terminated string to write to the file</li><li>Returns: **1** on success, **-1** on failure (file can not be created, file can not be written, **write** “fails”, etc…)</li><li>The created file must have those permissions: **rw-------**. If the file already exists, do not change the permissions.</li><li>if the file already exists, truncate it</li><li>if **filename** is **NULL** return **-1** </li><li>if **text_content** is **NULL** create an empty file</li></ul>|
|3. |[2-append_text_to_file.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x15-file_io/2-append_text_to_file.c) |To write a function that appends text at the end of a file. <ul><li>Prototype: **int append_text_to_file(const char *filename, char *text_content);**</li><li>where **filename** is the name of the file and **text_content** is the **NULL** terminated string to add at the end of the file</li><li>Return: **1** on success and **-1** on failure</li><li>Do not create the file if it does not exist</li><li>If **filename** is **NULL** return **-1**</li><li>If **text_content** is **NULL**, do not add anything to the file. Return **1** if the file exists and **-1** if the file does not exist or if you do not have the required permissions to write the file</li></ul>|
|4.|[3-cp.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x15-file_io/3-cp.c) |To Write a program that copies the content of a file to another file. <ul><li>Usage: **cp file_from file_to**</li><li>if the number of argument is not the correct one, exit with code **97** and print Usage: **cp file_from file_to**, followed by a new line, on the **POSIX** standard error</li><li>if **file_to** already exists, truncate it</li><li>if **file_from** does not exist, or if you can not read it, exit with code **98** and print **Error: Can't read from file NAME_OF_THE_FILE**, followed by a new line, on the **POSIX** standard error<ul><li>where **NAME_OF_THE_FILE** is the first argument passed to your program</li></ul></li><li>if you can not create or if write to file_to fails, exit with code **99** and print Error: Can't write to **NAME_OF_THE_FILE**, followed by a new line, on the **POSIX** standard error<ul><li>where **NAME_OF_THE_FILE** is the second argument passed to your program</li></ul></li><li>if you can not close a file descriptor , exit with code **100** and print Error: Can't close fd **FD_VALUE**, followed by a new line, on the **POSIX** standard error<ul><li>where **FD_VALUE** is the value of the file descriptor</li></ul></li><li>Permissions of the created file: **rw-rw-r--**. If the file already exists, do not change the permissions</li><li>You must read **1,024** bytes at a time from the **file_from** to make less system calls. Use a buffer</li><li>You are allowed to use **dprintf**</li></ul>|
|5. |[100-elf_header.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x15-file_io/100-elf_header.c) | To Write a program that displays the information contained in the **ELF** header at the start of an **ELF** file. <ul><li>Usage: elf_header elf_filename</li><li>Displayed information: (no less, no more, do not include trailing whitespace)<ul><li>Magic</li><li>Class</li><li>Data</li><li>Version</li><li>OS/ABI</li><li>ABI Version</li><li>Type</li><li>Entry point address</li></ul></li><li>Format: the same as **readelf -h** (version **2.26.1**)</li><li>If the file is not an **ELF** file, or on error, exit with status code **98** and display a comprehensive error message to **stderr**</li><li>You are allowed to use **lseek** once</li><li>You are allowed to use **read** a maximum of 2 times at runtime</li><li>You are allowed to have as many functions as you want in your source file</li><li>You are allowed to use **printf** **man elf**, **readelf**</li></ul> |
