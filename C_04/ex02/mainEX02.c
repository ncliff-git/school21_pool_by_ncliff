#include <string.h>
#include <stdio.h>

void ft_putnbr(int nb);

int main()
{
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(-2147483647);
	printf("\n");
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(2147483647);
	printf("\n");
}
