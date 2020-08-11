#include <stdio.h>

void ft_putnbr_base(int nbr, char *base);

int main()
{
	char a[20] = "abc";

	ft_putnbr_base(-2147483645, a);
	printf("\n");
	ft_putnbr_base(0, a);
	printf("\n");
	ft_putnbr_base(2147483647, a);

}