#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *s1, char *s2);

int	main(void)
{
	char s1[] = "23456";
	char s2[] = "hello";

	printf("%s\n", ft_strcpy(s1, s2));
	printf("%s\n", strcpy(s1, s2));
	return (0);
}

