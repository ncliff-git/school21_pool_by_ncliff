#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int main()
{
	char a[11] = "";
	char b[11] = "";
	char c[11] = "";
	char d[11] = "";

	printf("ft_strstr	%s\n", ft_strstr(a, b));
	printf("strstr		%s\n", strstr(c, d));
	printf("a 			%s\n", a);
	printf("b 			%s\n\n", b);
	printf("c 			%s\n", c);
	printf("d 			%s\n", d);
}

