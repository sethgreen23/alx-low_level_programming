#include "main.h"

/**
 * read_textfile - read the text file and print it to the standard output
 * @filename: the filename
 * @letters: number of letters it should read and print
 *
 * Return: number of letters i could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_output = 0;
	ssize_t bytes_read = 0;
	ssize_t bytes_written = 0;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	file_output = open(filename, O_RDONLY);
	bytes_read = read(file_output, buffer, letters);
	bytes_written = write(1, buffer, bytes_read);

	if (file_output == -1
		|| bytes_read == -1
		|| bytes_written == -1
		|| bytes_read != bytes_written)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(file_output);
	return (bytes_written);

}
