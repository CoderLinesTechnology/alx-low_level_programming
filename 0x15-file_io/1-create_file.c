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
	ssize_t result, written = 0;
	ssize_t len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT | O_WRONLY, 0666);
	}
	else 
	{
		fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

		if (fd == -1)
		{
			return (-1);
		}

		len = strlen(text_content);
		while (written < len)
		{
			result = write(fd, text_content, strlen(text_content));
			if (result == -1)
			{
				close(fd);
				return (-1);
			}
			written += result;
		}
		close(fd);
	}
	return (1);
}
