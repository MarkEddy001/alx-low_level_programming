
<h1 align="center">
0x12. C - Singly linked lists
</h1>

<p align="center">
    <img src="https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/229/giphy-3.gif" alt="Singly linked lists">
</p>

## Resources
- [Linked Lists](https://www.youtube.com/watch?v=udapt4FGY20&feature=youtu.be&t=2m10s)
- [Google](https://www.google.com)
- [Youtube](https://www.youtube.com)

## Learning Objectives
- [When and why using linked lists vs arrays](#when-and-why-using-linked-lists-vs-arrays)
- [How to build and use linked lists](#how-to-build-and-use-linked-lists)

#### When and why using linked lists vs arrays
Linked lists and arrays are both data structures commonly used in programming.

Arrays are useful when you need to store a fixed amount of data and access elements in a specific order. They are typically faster for accessing elements than linked lists. However, arrays are less efficient for inserting and deleting elements in the middle of the array.

Linked lists, on the other hand, are useful when you need to store a variable amount of data and don't need to access elements in a specific order. They are typically better for inserting and deleting elements than arrays. However, linked lists are less efficient when it comes to accessing elements in the middle of the list.

So, the choice between linked lists and arrays depends on the specific use case and the operations that need to be performed on the data structure.

#### How to build and use linked lists
To build and use linked lists in C, you can create a `struct` to represent each node in the list. The `struct` should contain a data element and a pointer to the next node in the list.

Here is an example `struct` definition for a linked list node:

```c
struct node {
  int data;
  struct node* next;
};
```

To create a new node and add it to the list, you can use the `malloc` function to allocate memory for the new node, assign the data element, and set the `next` pointer to `NULL`.

Here is an example function that adds a new node to the beginning of a linked list:

```c
void push(struct node** head_ref, int new_data) {
  struct node* new_node = (struct node*)malloc(sizeof(struct node));
  new_node->data = new_data;
  new_node->next = (*head_ref);
  (*head_ref) = new_node;
}
```

To traverse a linked list, you can use a loop that follows the `next` pointers until `NULL` is reached.

Here is an example function that prints the data elements in a linked list:

```c
void print_list(struct node* node) {
  while (node != NULL) {
    printf("%d ", node->data);
    node = node->next;
  }
}
```

These are just a few examples of how to build and use linked lists in C. There are many other operations that can be performed on linked lists, such as removing nodes and sorting the list.


## Tasks

<details>
<summary>
<a href="./0-print_list.c">0. Print list</a>
</summary>

```c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    printf("\n");
    free(new->str);
    new->str = NULL;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    free(new);
    return (0);
}
```

> Compiled with: `gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-print_list.c -o a`

> Output:

```sh
[5] Hello
[5] World
-> 2 elements

[0] (nil)
[5] World
-> 2 elements
```

</details>

---

<details>
<summary>
<a href="./1-list_len.c">1. List length</a>
</summary>

```c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = list_len(head);
    printf("-> %lu elements\n", n);
    free(new->str);
    free(new);
    return (0);
}
```

> Compiled with: `gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-list_len.c -o b`

> Output:

```sh
-> 2 elements
```

</details>

---

<details>
<summary>
<a href="./2-add_node.c">2. Add node</a>
</summary>

```c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;

    head = NULL;
    add_node(&head, "Alexandro");
    add_node(&head, "Asaia");
    add_node(&head, "Augustin");
    add_node(&head, "Bennett");
    add_node(&head, "Bilal");
    add_node(&head, "Chandler");
    add_node(&head, "Damian");
    add_node(&head, "Daniel");
    add_node(&head, "Dora");
    add_node(&head, "Electra");
    add_node(&head, "Gloria");
    add_node(&head, "Joe");
    add_node(&head, "John");
    add_node(&head, "John");
    add_node(&head, "Josquin");
    add_node(&head, "Kris");
    add_node(&head, "Marine");
    add_node(&head, "Mason");
    add_node(&head, "Praylin");
    add_node(&head, "Rick");
    add_node(&head, "Rick");
    add_node(&head, "Rona");
    add_node(&head, "Siphan");
    add_node(&head, "Sravanthi");
    add_node(&head, "Steven");
    add_node(&head, "Tasneem");
    add_node(&head, "William");
    add_node(&head, "Zee");
    print_list(head);
    return (0);
}
```

> Compiled with: `gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-add_node.c 0-print_list.c -o c`

> Output:

```sh
[7] Zee
[8] William
[8] Tasneem
[7] Steven
[10] Sravanthi
[7] Siphan
[5] Rona
[4] Rick
[4] Rick
[8] Praylin
[5] Mason
[7] Marine
[4] Kris
[8] Josquin
[4] John
[4] John
[3] Joe
[6] Gloria
[7] Electra
[4] Dora
[6] Daniel
[6] Damian
[8] Chandler
[5] Bilal
[7] Bennett
[8] Augustin
[5] Asaia
[9] Alexandro
```

</details>

---

<details>
<summary>
<a href="./3-add_node_end.c">3. Add node at the end</a>
</summary>

```c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;

    head = NULL;
    add_node_end(&head, "Anne");
    add_node_end(&head, "Colton");
    add_node_end(&head, "Corbin");
    add_node_end(&head, "Daniel");
    add_node_end(&head, "Danton");
    add_node_end(&head, "David");
    add_node_end(&head, "Gary");
    add_node_end(&head, "Holden");
    add_node_end(&head, "Ian");
    add_node_end(&head, "Ian");
    add_node_end(&head, "Jay");
    add_node_end(&head, "Jennie");
    add_node_end(&head, "Jimmy");
    add_node_end(&head, "Justin");
    add_node_end(&head, "Kalson");
    add_node_end(&head, "Kina");
    add_node_end(&head, "Matthew");
    add_node_end(&head, "Max");
    add_node_end(&head, "Michael");
    add_node_end(&head, "Ntuj");
    add_node_end(&head, "Philip");
    add_node_end(&head, "Richard");
    add_node_end(&head, "Samantha");
    add_node_end(&head, "Stuart");
    add_node_end(&head, "Swati");
    add_node_end(&head, "Timothy");
    add_node_end(&head, "Victor");
    add_node_end(&head, "Walton");
    print_list(head);
    return (0);
}
```

> Compiled with: `gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-add_node_end.c 0-print_list.c -o d`

> Output
```shell
[4] Anne
[6] Colton
[6] Corbin
[6] Daniel
[6] Danton
[5] David
[4] Gary
[6] Holden
[3] Ian
[3] Ian
[3] Jay
[6] Jennie
[5] Jimmy
[6] Justin
[6] Kalson
[4] Kina
[7] Matthew
[3] Max
[7] Michael
[4] Ntuj
[6] Philip
[7] Richard
[8] Samantha
[6] Stuart
[5] Swati
[7] Timothy
[6] Victor
[6] Walton
```

</details>

---

<details>
<summary>
<a href="./4-free_list.c">4. Free list</a>
</summary>

```c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;

    head = NULL;
    add_node_end(&head, "Bob");
    add_node_end(&head, "&");
    add_node_end(&head, "Kris");
    add_node_end(&head, "love");
    add_node_end(&head, "asm");
    print_list(head);
    free_list(head);
    head = NULL;
    return (0);
}
```

> Compiled with: `gcc -Wall -pedantic -Werror -Wextra 4-main.c 4-free_list.c 3-add_node_end.c 0-print_list.c -o e`

> Output:
```shell
$ valgrind ./e
==3598== Memcheck, a memory error detector
==3598== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3598== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3598== Command: ./e
==3598== 
[6] Bob
[1] &
[3] Kris
[4] love
[3] asm
==3598== 
==3598== HEAP SUMMARY:
==3598==     in use at exit: 0 bytes in 0 blocks
==3598==   total heap usage: 11 allocs, 11 frees, 1,166 bytes allocated
==3598== 
==3598== All heap blocks were freed -- no leaks are possible
==3598== 
==3598== For counts of detected and suppressed errors, rerun with: -v
==3598== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```

</details>

---

<details>
<summary>
<a href="./100-first.c">5. The Hare and the Tortoise</a>
</summary>

```c
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
    return (0);
}
```

> Compiled with: `gcc -Wall -pedantic -Werror -Wextra 100-first.c 100-main.c -o first`

> Output:
```shell
$ ./first
You're beat! and yet, you must allow,
I bore my house upon my back!
```

</details>

---

<details>
<summary>
<a href="./101-hello_holberton.asm">6. Real programmers can write assembly code in any language</a>
</summary>

> Compiled with: `nasm -f elf64 101-hello_holberton.asm && gcc -no-pie -std=gnu89 101-hello_holberton.o -o hello`

> Output:
```shell
$ ./hello
Hello, Holberton
```

</details>

