#include <unistd.h>

/* putchar putchar putchar
 *
 *
 *
 */
	int _putchar(char c)
{
	return (write(1, &c, 1));
}
