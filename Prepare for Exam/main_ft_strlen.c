#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_strlen(char *s1);

int	main(void)
{
	char *s1 = "";
	int l;

	l = ft_strlen(s1);
	printf("%i", l);
	return (0);
}
