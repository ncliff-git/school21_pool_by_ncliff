#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main()
{
	char a[8] = "12345";
	char b[8] = "12345";
	char c[8] = "12345";
	char d[8] = "12345";

	printf("ft_strcmp	%d\n", ft_strcmp(a, b));
	printf("strcmp		%d\n", strcmp(c, d));
	printf("a 			%s\n", a);
	printf("b 			%s\n\n", b);
	printf("c 			%s\n", c);
	printf("d 			%s\n", d);

}