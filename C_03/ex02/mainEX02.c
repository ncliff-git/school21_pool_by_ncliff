#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main()
{
	char a[11] = "12345";
	char b[11] = "aaaaa";
	char c[11] = "12345";
	char d[11] = "aaaaa";

	printf("ft_strcat	%s\n", ft_strcat(a, b));
	printf("strcat		%s\n", strcat(c, d));
	printf("a 			%s\n", a);
	printf("b 			%s\n\n", b);
	printf("c 			%s\n", c);
	printf("d 			%s\n", d);
}

