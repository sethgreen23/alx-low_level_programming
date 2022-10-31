#include "main.h"
/**
 * create_file - create a file with read/write access for user
 * @filename: name of file to create
 * @text_content: string to write to file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, count;
	ssize_t wcount;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (count = 0; text_content[count] != '\0', count++)
		;
	wcount = write(fd, text_content, count);
	if (wcount == -1)
		return (-1);
	return (1);
}
