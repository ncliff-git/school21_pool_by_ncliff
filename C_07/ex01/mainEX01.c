#include <stdio.h>

int *ft_range(int min, int max);

int main()
{
	int *mass;
	long int i;

	mass = ft_range(123, 123);
	i = 2147483647;
//	while(mass[20])
//	{
//		printf("%d ", mass[i]);
//		i++;
//	}
	if (mass == NULL)
		printf("NULL");
//	printf("%d ", mass[0]);
//	printf("%d ", mass[1]);
}
