#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char a[20] = "123456789";
	char b[20] = "aaaaaaaaa";
	char c[20] = "123456789";
	char d[20] = "aaaaaaaaa";

	printf("ft_strncat	%d\n", ft_strlcat(a, b, 15));
	printf("strncat		%lu\n", strlcat(c, d, 15));
	printf("a 			%s\n", a);
	printf("b 			%s\n\n", b);
	printf("c 			%s\n", c);
	printf("d 			%s\n", d);
}

