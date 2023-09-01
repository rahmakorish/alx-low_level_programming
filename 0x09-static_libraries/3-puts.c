nclude "main.h"
/**
 *  * _puts-prints a string followed by new line
 *   * @str:strring to be printed
 *    **/
void _puts(char *str)
{
		while (*str != '\0')
				{
							_putchar(*str);
									str++;
										};
			_putchar('\n');
}
