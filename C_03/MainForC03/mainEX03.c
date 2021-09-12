#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	char a[11] = "12345";
	char b[11] = "aaaaa";
	char c[11] = "12345";
	char d[11] = "aaaaa";

	printf("ft_strncat	%s\n", ft_strncat(a, b, 15));
	printf("strncat		%s\n", strncat(c, d, 15));
	printf("a 			%s\n", a);
	printf("b 			%s\n\n", b);
	printf("c 			%s\n", c);
	printf("d 			%s\n", d);
}
