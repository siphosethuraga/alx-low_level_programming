#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include "main.h"

/**
* create_file - the prototype to create file
* @filename: it is the file name
* @text_content:  it is the text content
* fd - file descripter
* len - string length
*
* Return: 1 success -1 fail
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		len = write(fd, text_content, strlen(text_content));


	close(fd);

	return (len == -1 ? -1 : 1);
}
