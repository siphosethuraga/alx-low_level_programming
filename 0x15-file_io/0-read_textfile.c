#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
* read_textfile - reads a text file and prints to POSIX standard output
* @filename: file to be read
* @letters:  letters to be read
* @fd - file descripter
* @buffer - temporary storage
* @read_bytes - reads bytes in the buffer
* @write_bytes - writes the bytes in buffer
*
* return: readtextfile and returns to posix
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read_bytes, write_bytes;
	char *buffer;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	bytes_read = read(fd, buf, letters);
	if (bytes_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buf, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);

	return (bytes_written);
}
