#include "main.h"

/**
 * append_text_to_file -  function that appends text at the end of a file
 * @filename: Pointer to the file to append content
 * @text_content: String to append to file
 * Return: 1 if file exist else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int a = 0;
	int append;

	if (filename == NULL)
		return (-1);
	/*O_EXCl ensures the file does not exist before appending*/
	file = open(filename, O_WRONLY | O_EXCL | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		/*count the number of character in the file*/
		while (text_content[a])
			a++;
		append = write(file, text_content, a);
		/*if write fails*/
		if (append == -1)
			return (-1);
	}
	close(file);
	return (1);
}
