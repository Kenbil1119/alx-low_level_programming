# Structure (struct & typedef) In C

Welcome to my directory: 0x0E-structures_typedef
This directory contains C programs that demonstrate the use of structures and typedef in the C programming language.

## Files:

### 1. dog.h
Header file that contains the definition of a structure `dog` and prototypes for functions related to dog manipulation.

### 2. 1-init_dog.c
A program that initializes a variable of type `struct dog`.

### 3. 2-print_dog.c
A program that prints information about a dog using the `struct dog` structure.

### 4. 4-new_dog.c
A program that creates a new dog structure with specified information.

### 5. 5-free_dog.c
A program that frees memory allocated for a dog structure.

## Compilation and Execution:

To compile and execute these programs, follow the steps below:

1. Open a terminal.
2. Navigate to the directory containing these files.
3. Use the following commands:

```bash
gcc -Wall -pedantic -Werror -Wextra *.c -o dog_program
./dog_program
