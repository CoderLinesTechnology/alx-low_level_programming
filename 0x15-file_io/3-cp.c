#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

void print_error_and_exit(int code, const char *message, const char *filename)
{
	dprintf(STDERR_FILENO, message, filename);
	exit(code);
}

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	/* Check the number of arguments */
	if (argc != 3)
	{
		print_error_and_exit(97, "Usage: %s file_from file_to\n", argv[0]);
	}

	/* Open file_from for reading */
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		print_error_and_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}

	/* Open file_to for writing (and create it if it doesn't exist) */
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		close(fd_from);
		print_error_and_exit(99, "Error: Can't write to file %s\n", argv[2]);
	}

	/* Read from file_from, write to file_to */
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			print_error_and_exit(99, "Error: Can't write to file %s\n", argv[2]);
		}
	}

	/* Handle read errors */
	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		print_error_and_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}

	/* Close file descriptors */
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		print_error_and_exit(100, "Error: Can't close fd\n", 0);
	}

	return (0);
}
