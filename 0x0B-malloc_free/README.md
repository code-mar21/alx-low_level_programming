0X0B: MALLOC FREE
Learning Objectives

    What is the difference between automatic and dynamic allocation.
    What is malloc and free, and how to use them.
    Why and when to use malloc.
    How to use valgrind to check for memory leak.

File name 	Description
0-create_array.c 	This function creates an array of chars, and initializes it with a specific char.

    It returns NULL if size = 0.
    It returns a pointer to the array, or NULL if it fails.

1-strdup.c 	This function returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

    It returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and is freed with free.
    It returns NULL if str = NULL.
    On success, it returns a pointer to the duplicated string. It returns NULL if insufficient memory was available.

2-str_concat.c 	This function concatenates two strings.

    The returned pointer points to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated.
    If NULL is passed, it is treated as an empty string.
    The function returns NULL on failure.

3-alloc_grid.c 	This function returns a pointer to a 2 dimensional array of integers.

    Each element of the grid is initialized to 0.
    The function returns NULL on failure.
    If width or height is 0 or negative, it returns NULL.

4-free_grid.c 	This function frees a 2 dimensional grid previously created by the alloc_grid function.
main.h 	A header file, containing prototypes of all functions used and the prototype of the function _putchar.
