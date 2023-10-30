#include "main.h"

/**
*append_text_to_file - Function to append text to a file
*@filename: filename parameter
*@text_content: Content to append to file
*
*Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	if (access(filename, F_OK) == -1 || access(filename, W_OK) == -1)
	{
		return (-1);
	}
	else
	{
		if (text_content == NULL)
			return (1);
		fd = open(filename, O_WRONLY | O_CREAT | O_APPEND, 0666);
		if (fd == -1)
			return (-1);

		write(fd, text_content, strlen(text_content));
		close(fd);
		return (1);
	}
}
