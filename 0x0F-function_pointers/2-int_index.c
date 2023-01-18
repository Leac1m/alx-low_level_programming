/**
 * int_index - searches for number in array.
 * @array: array of int.
 * @size: size of int.
 * @cmp: pointer to comparism fucntion.
 * Return: idex of first occurance otherwise -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
