#include "main.h"
/**
 * read_textfile - read text in files.
 * @filename: name of file.
 * @letters: number of letters in file.
 * Return: number of letters print otherwise 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_wright;
	char *letter;


	if (!filename)
		return (0);

	if (!letters)
		return (0);

	fd  = open(filename, O_RDONLY, 0);

	if (fd == -1)
		return (0);

	letter = malloc(sizeof(char) * (letters));
	if (letter == NULL)
	{
		close(fd);
		return (0);
	}


	n_read = read(fd, letter, letters);
	n_wright = write(STDOUT_FILENO, letter, n_read);

	close(fd);
	free(letter);

	return (n_wright);

}
