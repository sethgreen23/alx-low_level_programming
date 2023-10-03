#include "main.h"
/**
 * check_97 - check the correct number of arguments
 * @argc: number of arguments
 *
 * Return: nothing
 */
void check_97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
/**
 * check_98 - check that file descirptors whre closed
 * @check: check if true or false
 * @file: file
 * @f_from: file descriptor from
 * @f_to: file desciroptr to
 *
 * Return: nothing
 */
void check_98(ssize_t check, char *file, int f_from, int f_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (f_from != -1)
			close(f_from);
		if (f_to != -1)
			close(f_to);
		exit(98);
	}
}
/**
 * check_99 - check that file descirptors whre closed
 * @check: check if true or false
 * @file: file
 * @f_from: file descriptor from
 * @f_to: file descirptor to
 *
 * Return: nothing
 */
void check_99(ssize_t check, char *file, int f_from, int f_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (f_from != -1)
			close(f_from);
		if (fd_to != -1)
			close(f_to);
		exit(99);
	}
}
/**
 * check_100 - check that file descirptors whre closed
 * @check: check if true or false
 * @f_d: file descriptor
 *
 * Return: nothing
 */
void check_100(int check, int f_d)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_d);
		exit(100);
	}
}
/**
 * main - main function
 * @argc: argument count
 * @argv: argument values
 *
 * Return: 0 if success , exit 97 if fails
 */
int main(int argc, char **argv)
{
	int f_from, f_to, close_to, close_from;
	ssize_t lenr, lenw;
	char buffer[BUFFER_SIZE];

	check_97(argc);
	f_from = open(argv[1], O_RDONLY);
	check_98((ssize_t)f_from, argv[1], -1, -1);
	f_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	check_99((ssize_t)f_to, argv[2], f_from, -1);
	lenr = BUFFER_SIZE;
	while (lenr == BUFFER_SIZE)
	{
		lenr = read(f_from, buffer, BUFFER_SIZE);
		check_98(lenr, argv[1], f_from, f_to);
		lenw = write(f_to, buffer, lenr);
		if (lenw != lenr)
			lenw = -1;
		check_99(lenw, argv[2], f_from, f_to);
	}
	close_to = close(f_to);
	close_from = close(f_from);
	check_100(close_to, f_to);
	check_100(close_from, f_from);
	return (0);
}
