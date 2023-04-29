#include "variadic_functions.h"
/**
 * format_char - ...
 * @separator: ...
 * @ap: ...
 */
void format_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}
/**
 * format_int - ...
 * @separator: ...
 * @ap: ...
 */
void format_int(char *separator, va_list ap)
{
printf("%s%d", separator, va_arg(ap, int));
}
/**
 * format_float - ...
 * @separator: ...
 * @ap: ...
 */
void format_float(char *separator, va_list ap)
{
printf("%s%f", separator, va_arg(ap, double));
}
/**
 * format_string - ...
 * @separator: ...
 * @ap: ...
 */
void format_string(char *separator, va_list ap)
{
	char *str = va_arg(ap, char *);

	switch ((int)(!str))
	case 1:
		str = "(nil)";
printf("%s%s", separator, str);
}
/**
 * print_all - ...
 * @format: ...
 * Return: ...
 */
void print_all(const char * const format, ...);
{
	int i = 0, j;
	
}
