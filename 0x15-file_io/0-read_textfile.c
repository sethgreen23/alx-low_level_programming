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
	int file_output = 0;
	ssize_t bytes_read = 0;
	ssize_t bytes_written = 0;
	ssize_t letter_count = 0;
	char buffer[BUFFER_SIZE];

	if (filename == NULL)
		return (0);
	file_output = open(filename, O_RDONLY);
	if (file_output == -1)
	{
		close(file_output);
		return (0);
	}
	while ((bytes_read = read(file_output, buffer, letters)) > 0)
	{
		bytes_written = write(1, buffer, bytes_read);
		if (bytes_written == -1)
		{
			close(file_output);
			return (0);
		}
		letter_count += bytes_written;
		if (letter_count >= (ssize_t)letters)
			break;
	}
	return (letter_count);

}
