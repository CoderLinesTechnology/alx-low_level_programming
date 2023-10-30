#include "main.h"

/**
*create_file - Function to create a file
*@filename: filename parameter
*@text_content: file content
*
*Return: 1 on success and -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		return (-1);
	}

	if (write(fd, text_content, strlen(text_content)) == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
