#include "main.h"
/**
 * main - copy content of a file into another file
 * @argc: Argument count
 * @argv: argument velocity
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_src, file_dest, count;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	file_src =  open(argv[1], O_RDONLY, 0);
	if (file_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_dest = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_dest == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	/*read char in file_src to buffer*/
	while ((count = read(file_src, buffer, 1024)) > 0)
	{
		if (write(file_dest, buffer, count) != count)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(file_src) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_src),	exit(100);
	}
	if (close(file_dest) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_dest), exit(100);
	}
	return (0);
}
