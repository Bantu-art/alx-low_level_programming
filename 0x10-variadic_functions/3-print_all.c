#include "variadic_functions.h"

/**
 * print_all - function prints anything.
 * @format: list of types of arguments passed to the function
 *
 * Return 0 (succes)
 */


void print_all(const char * const format, ...)
{
	va_list args;
	char *separator = "";
	unsigned int i = 0;
	char *s;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
				{
					printf("%s(nil)", separator);
				}
				else
	{
		printf("%s%s", separator, s);
	}
	break;
	default:
	break;
}
separator = ", ";
i++;
}

printf("\n");
va_end(args);
}

