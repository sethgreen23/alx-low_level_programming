#include "main.h"
/**
 * append_text_to_file - append text to the end of a file
 * @filename: filename
 * @text_content: text you wish to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, size = 0, w, i;

	if (filename == NULL)
		return (-1);
	o = open(filename, O_APPEND | O_WRONLY, 0664);
	if (o == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(o);
		return (-1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
		size++;
	w = write(o, text_content, size);
	if (w == -1)
		return (-1);
	close(o);
	return (1);
}
