#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
* read_textfile - reads a text file and prints to POSIX standard output
* filename - file to be read
* letters - letters to be read
* @fd - file descripter
* @buffer - temporary storage
* @read_bytes - reads bytes in the buffer
* @write_bytes - writes the bytes in buffer
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read_bytes, write_bytes;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	read_bytes = read(fd, buffer, letters);
	if (read_bytes == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	if (write_bytes == -1 || write_bytes != read_bytes)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (read_bytes);
}
