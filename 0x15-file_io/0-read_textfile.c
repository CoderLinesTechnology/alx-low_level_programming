#include "main.h"

/**
*read_textfile - Function to read file content on a standard output
*@filename: Filename parameter
*@letters: size of letter to print
*
*Return: print the letters on success or 0 when failed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t char_read;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return 0;

	if ((fd = open(filename, O_RDONLY)) == -1)
	{
		free(buffer);
		return (0);
	}

	char_read = read(fd, buffer, letters);
	
	if (char_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	write(STDOUT_FILENO, buffer, char_read);

	free(buffer);
	close(fd);

	return (char_read);
}
