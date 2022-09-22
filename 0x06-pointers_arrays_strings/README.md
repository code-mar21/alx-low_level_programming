THis read belongs to 0x06-pointers_arrays_strings Project

0-strcat.c   This function concatenates two strings, and appends the string src to the string dest, overwriting the terminating null byte (\0) at the end of the string dest, and then adds a new terminating null byte. The function returns a pointer to the resulting string dest.

1-strncat.c This functions concatenates two strings. It is similar to function strcat, except that it will use at most n bytes from the string src; and src does not need to be null-terminated if it contains n or more bytes. The function returns a pointer to the resulting string dest.

2-strncpy.c  This function copies a string.

3-strcmp.c   This function compares two strings.

4-rev_array.c  This function reverses the content of an array of integers, where n is the number of elements of the array.

5-string_toupper.c  This function changes all lowercase letters of a string to uppercase.

6-cap_string.c  This function capitalizes all words of a string.
Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }

7-leet.c   This function encodes a string into 1337.
Letters a and A are replaced by 4.
Letters e and E are replaced by 3.
Letters o and O are replaced by 0.
Letters t and T are replaced by 7.
Letters l and L are replaced by 1.

100-rot13.c   This function encodes a string using rot13.

101-print_number.c   This functions prints an integer.

102-magic.c  One line of code is added to this code, so that the program prints a[2] = 98, followed by a new line.

103-infinite_add.c   This function adds two numbers.
Where
n1 and n2 are the two numbers,
r is the buffer that the function will use to store the result,
size_r is the buffer size.
The function returns a pointer to the result.
The function returns 0 if the result cannot be stored in r.

104-print_buffer.c  The function prints the content of size bytes of the buffer pointed by b.
The output prints 10 bytes per line.
Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with 0.
Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space.
Each line shows the content of the buffer. If the byte is a printable character, prints the letter; if not, prints .
Each line ends with a new line \n.
If size is 0 or less, the output should be a new line only \n.
The output looks like the example below this table, and is formatted exactly the same way.

main.h   A header file, containing prototypes of all functions used and the prototype of the function _putchar.
