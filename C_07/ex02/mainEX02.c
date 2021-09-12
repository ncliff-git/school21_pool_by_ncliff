#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int main()
{
	int *rng;
	int size;
	int n;

	n = 0;
	size = ft_ultimate_range(&rng, 45, 10);
//	while (n < size)
//	{
//		printf("%d ", rng[n]);
//		n++;
//	}
	printf("%d\n", size);
	printf("%d ", rng[0]);
	printf("%d ", rng[2147483646]);
	printf("%d ", rng[2147483647]);
}
