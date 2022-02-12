#include <unistd.h>

int	main()
{
	char	*str;
	char	a = 'a';

	str = &a;

	*str += 1;
	write(1, str, 1);
	write(1, "\n", 1);
}
