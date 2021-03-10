#include "function_pointers.h"

/**
* print_name - function that prints a name.
* @name: name to print
* @f: formater
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
