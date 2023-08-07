#include "main.h"

/**
 * read_textfile - Function that reada a text file and
 * print it to the POSIX stdout
 * @filename: Pointer to the file to read
 * @letters: Number of letters to read from the file
 * Return: Number of letters read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int r;
	int w;
	/*Buffer temporally stores content of the file to read*/
	char *buffer;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	/*check if the file opened/returned -1 indicating error*/
	if (file == -1)
		return (0);
	/*allocate mem to hold content of file including the null terminator*/
	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
		return (0);
	/*read the num of byte required(letter) from the file*/
	r = read(file, buffer, letters);
	if (r == -1)
		return (0);
	/*null-terminate the buffer*/
	buffer[letters] = '\0';
	/*write the bytes in the buffer to the stdout*/
	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1)
		return (0);

	close(file);
	free(buffer);
	return (w);
}
