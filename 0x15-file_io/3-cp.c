#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - This function allocates 1024 bytes for a buffer.
 * @file: This is the name of the file buffer
 *
 * Return: A pointer to new buffer.
 */

char *create_buffer(char *file)
{
	char *fb;

	fb = malloc(sizeof(char) * 1024);

	if (fb == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (fb);
}

/**
 * close_file - Closes file descriptor
 * @fd: The specific file descriptor
 */

void close_file(int fd)
{
	int i;

	i = close(fd);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - This function copies the contents
 * of a file to another file.
 * @argc: The number of arguments
 * @argv: represents an array of pointers to the arguments.
 *
 * Return: 0.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */

int main(int argc, char *argv[])
{
	int start, end, r, w;
	char *fb;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fb = create_buffer(argv[2]);
	start = open(argv[1], O_RDONLY);
	r = read(start, fb, 1024);
	end = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (start == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(fb);
			exit(98);
		}

		w = write(end, fb, r);
		if (end == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(fb);
			exit(99);
		}

		r = read(start, fb, 1024);
		end = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(fb);
	close_file(start);
	close_file(end);

	return (0);
}
