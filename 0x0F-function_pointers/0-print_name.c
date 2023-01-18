/**
 * print_name - fuction that feed string as arguments
 * capable of printing it.
 * @name: string to print.
 * @f:pointer to function able to print.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
