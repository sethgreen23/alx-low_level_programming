#include "main.h"
/**
 * create_file - creates file
 * @filename: filename
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t o, size, i;
	char *buffer;

	if (filename == NULL)
		return (-1);
	o = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (o == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(o);
		return (1);
	}

	size = 0;
	while (text_content[size] != '\0')
		size++;
	buffer = malloc(sizeof(char) * size);
	if (buffer == NULL)
	{
		close(o);
		return (-1);
	}
	for (i = 0; i < size; i++)
		buffer[i] = text_content[i];
	if (write(o, buffer, sizeof(buffer)) == -1)
	{
		free(buffer);
		close(o);
		return (-1);
	}
	free(buffer);
	close(o);
	return (1);

}
