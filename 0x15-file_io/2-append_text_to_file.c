#include <unistd.h>
#include <fcntl.h>
#include <stdio h>
#include <sys/stat.h>
#include <stdlib.h>
#include "main.h"

/**
* append_text_to_file - appends the text to the file
* @filename: it is the general name of the file used
* @text_content: text inside file
* @fd: is the fike descripter
* @len: it is the string length
*
* Return: 1 success 0 fail
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = write(fd, text_content, strlen(text_content));
		if (len == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
