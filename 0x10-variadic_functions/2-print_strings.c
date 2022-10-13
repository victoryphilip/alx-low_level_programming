#include "variadic_functions.h"
/**
 * print_strings - prints strings passed as arguments
 *
 * @separator: separates strings passed
 * @n: number of arguments passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	/*variables needed*/
	size_t i;
	va_list ap;
	char *tmp;

	i = 0;
	/*process*/
	va_start(ap, n);
	tmp = va_arg(ap, char *);
	if (n)
	{
		for (i = 0; i < n - 1; i++)
		{
			if (separator == NULL)
			{
				if (tmp  == NULL)
					printf("(nil)");
				else
					printf("%s", tmp);
			} else
			{
				if (tmp == NULL)
					printf("(nil)");
				else
					printf("%s%s", tmp, separator);
			}
			tmp = va_arg(ap, char *);
		}
		/*tmp = va_arg(ap, char *);*/
		if (tmp == NULL)
			printf("(nil)");
		else
			printf("%s", tmp);
	}
	va_end(ap);
	printf("\n");
}
