#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to POSIX stdout
 * @filename: name of file to be read
 * @letters: number of letters to read and print
 * Return: actual number of letters read and printed, or 0 if filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
	ssize_t o, r, w;
	char *buffe;

	if (filename == NULL)
		return (0);

	buffe = malloc(sizeof(char) * letters);
	if (buffe == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffe, letters);
	w = write(STDOUT_FILENO, buffe, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffe);
		return (0);
	}

	free(buffe);
	close(o);

	return (w);
}
