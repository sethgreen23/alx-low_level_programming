#include "main.h"
/**
 * read_textfile - read a text
 * @filename: file name
 * @letters: the number of letter it should read
 * Return: the actual number it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rcount, wcount;
	char *buff;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULLL)
	{
		free(buff);
		return (0);
	}
	rcount = read(fd, buff, letters);
	if (rcount == -1)
	{
		free(buff);
		return (0);
	}
	wcount = write(STDOUT_FILENO, buff, rcount);
	if (wcount == -1 || wcount != rcount)
		return (0);
	free(buff);
	close(fd);
	return (wcount);
}
