#include <stdio.h>

char *ft_strdup(char *src);

int main()
{
	char a[123] = "abrrgrcd";
	char *b;

	b = ft_strdup(a);
	printf("%s\n", b);
}
