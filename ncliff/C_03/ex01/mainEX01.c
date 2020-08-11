#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	char a[8] = "12345";
	char b[8] = "123";
	char c[8] = "12345";
	char d[8] = "123";

	printf("ft_strncmp	%d\n", ft_strncmp(a, b, 4));
	printf("strncmp		%d\n", strncmp(c, d, 4));
	printf("a 			%s\n", a);
	printf("b 			%s\n\n", b);
	printf("c 			%s\n", c);
	printf("d 			%s\n", d);
}
