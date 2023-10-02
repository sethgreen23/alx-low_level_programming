#include "main.h"
#define BUFFER_SIZE 1024
/**
 * main - main function
 * @argc: argument count
 * @argv: argument values
 *
 * Return: 0 if success , exit 97 if fails
 */
int main(int argc, char **argv)
{
	int o, r, w1, o1, c, c1;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		perror("Usage: cp file_from file_to\n");
		exit(97);
	}
	o = open(argv[1], O_RDONLY);
	o1 = open(argv[2], O_CREAT | O_TRUNC | O_RDWR, 0664);
	while ((r = read(o, buffer, BUFFER_SIZE)) > 0)
	{
		w1 = write(o1, buffer, r);
		if (w1 == -1)
		{
			fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (o1 == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (o == -1 || r == -1)
	{
		fprintf(stderr, "Error: Can't read to %s\n", argv[1]);
		exit(98);
	}
	if (close(o) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", o);
		close(o1);
		exit(100);
	}
	if (close(o1) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", o1);
		exit(100);
	}
	return (0);
}
