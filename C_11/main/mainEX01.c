
#include <stdio.h>
#include <stdlib.h>

int			*ft_map(int *tab, int length, int (*f)(int));
int			my_fnk(int nb)
{
	return (nb * 2);
}

int         main()
{
    int ab[6] = {1,2,3,4,5,6};
	int *a;

    int (*nbr)(int);
    nbr = &my_fnk;
	a = malloc(sizeof(ft_map(ab, 6, nbr)));
    a = ft_map(ab, 6, nbr);

	for(int i = 0;i < 6;i++)
		printf("%d", a[i]);
}
