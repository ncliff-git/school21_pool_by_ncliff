#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_atoi(char *str);

int main ()
{
	char a[400] = "\t\n 34 +563hrg241345254y3y4";

	printf("%d\n", ft_atoi(a));
	printf("%d\n", atoi(a));
}
