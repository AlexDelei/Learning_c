#include "main.h"
/**
 * custom_getline - custom implementation of getline
 * @lineptr: pointer to the line buffer
 * @n: pointer to the size of the line buffer
 * @stream: input stream (usually stdin)
 * Return: number of characters read, or -1 on error
 */
ssize_t custom_getline(char **lineptr, size_t *n, FILE *stream)
{
	ssize_t read_chars = 0;
	ssize_t total_chars = 0;
	char *line = *lineptr;

	if (line == NULL || *n == 0)
	{
		*n = MAX_LINE_LENGTH;
		line = malloc(*n);
		if (line == NULL)
		{
			return (-1); // Allocation error
		}
	*lineptr = line;
	}

	while (1)
	{
		char c;
		read_chars = read(STDIN_FILENO, &c, 1);
		if (read_chars == -1)
		{
      			if (total_chars == 0)
			{
     				return (-1); /*Read error*/
			}
			else
			{
				break; /*Partial line is read*/
			}
		}
		if (read_chars == 0)
		{
			break; /* End of input*/
		}
		if (c == '\n')
		{
			line[total_chars] = '\0';
			break;
		}
		line[total_chars] = c;
		total_chars++;
		if (total_chars >= *n - 1)
		{
			*n *= 2;
			char *new_line = realloc(line, *n);
			if (new_line == NULL)
			{
				return (-1); /*Allocation error*/
			}
		line = new_line;
		*lineptr = line;
		}
	}
	return (total_chars);
}

ChatGPT
Certainly! This code is an implementation of a custom getline-like function called custom_getline. It reads characters from a given input stream (FILE *stream) and dynamically allocates memory for the input line. Here's a step-by-step explanation of the code:

ssize_t custom_getline(char **lineptr, size_t *n, FILE *stream):
This is the function signature. It takes three parameters:
lineptr: A pointer to a pointer that will be used to store the address of the input line.
n: A pointer to a size_t variable that will be used to store the size of the allocated buffer.
stream: The input stream (usually stdin).
ssize_t read_chars = 0; ssize_t total_chars = 0; char *line = *lineptr;:
These are variable declarations. read_chars and total_chars are used to keep track of the number of characters read and the total characters in the line.
line is a pointer to the input line, initialized with the value pointed to by lineptr.
if (line == NULL || *n == 0) { ... }:
This block of code checks whether the input line is NULL or if the allocated buffer size (*n) is zero.
If either condition is true, it means that the buffer needs to be allocated or reallocated.
*n = MAX_LINE_LENGTH;:
If the buffer needs to be allocated, it sets the initial buffer size to MAX_LINE_LENGTH. You can adjust this constant as needed.
line = malloc(*n);:
Allocates memory for the input line using malloc. The size of the allocated buffer is *n.
if (line == NULL) { return -1; }:
Checks if the memory allocation was successful. If not, it returns -1 to indicate an allocation error.
*lineptr = line;:
Updates the pointer pointed to by lineptr to point to the newly allocated buffer.
while (1) { ... }:
This loop reads characters from the input stream and constructs the input line.
read_chars = read(STDIN_FILENO, &c, 1);:
Reads a single character (1 byte) from the input stream (stream) into the variable c. The result is stored in read_chars, which can be:
-1 in case of a read error.
0 at the end of input.
1 if a character is successfully read.
if (read_chars == -1) { ... }:
Checks if there was a read error. If a read error occurs and no characters have been read (total_chars == 0), it returns -1 to indicate a read error. Otherwise, it breaks the loop, indicating that a partial line has been read.
if (read_chars == 0) { ... }:
Checks if the end of input has been reached. If so, it breaks the loop, indicating the end of input.
if (c == '\n') { ... }:
Checks if the character c is a newline character ('\n'). If so, it null-terminates the line and breaks the loop, indicating the end of the line.
line[total_chars] = c; total_chars++;:
Stores the character c in the input line and increments the total_chars count.
if (total_chars >= *n - 1) { ... }:
Checks if the buffer is too small to hold more characters. If so, it resizes the buffer by doubling its size (*n *= 2) and reallocating memory.
char *new_line = realloc(line, *n);:
Attempts to reallocate memory for the input line with the new size.
If reallocation fails (returns NULL), it returns -1 to indicate an allocation error.
Otherwise, it updates the line pointer to point to the newly allocated buffer.
Finally, the function returns total_chars, which represents the number of characters read in the line. If an error occurs, it returns -1.
This custom custom_getline function reads characters efficiently and resizes the buffer as needed to accommodate longer lines. It can be used as a replacement for the standard getline function in your code.

