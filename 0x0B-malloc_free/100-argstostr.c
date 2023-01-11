#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: lists of arguments
 * Return: pointer to new string otherwise NULL
 */
char *argstostr(int ac, char **av)
{
	int count = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	char *array;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		count += strlen(av[i]);
		i++;
	}
	array = malloc(sizeof(char) * (count + 2));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	i = 0;
	while (i < ac || k < count)
	{
		while (av[i][j] != '\0')
		{
			array[k] = av[i][j];
			j++;
			k++;
		}
		array[k] = '\n';
		k++;
		i++;
		j = 0;
	}
	array[k] = '\0';
	return (array);
}
