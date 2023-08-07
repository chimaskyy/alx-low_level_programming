#include "main.h"

/**
 * create_file - function that creates a file with read and write permission
 * @filename: Pointer to the file to create
 * @text_content: Content of the file to create
 * Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	int a = 0;
	int write_read;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[a])
			a++;
		write_read = write(file, text_content, a);

		if (write_read != a)
			return (-1);
	}
	close(file);
	return (1);
}
