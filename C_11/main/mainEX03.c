
#include <stdio.h>

int ft_count_if(char **tab, int length, int(*f)(char*));

int ch(char *ch)
{
	int n;

	n = 0;
	while (ch[n] != '\0')
	{
		if (ch[n] == '1')
			return (1);
		n++;
	}
	return (0);
}

int main()
{
	char *ab[3] = {"","0","0000"};
	int n;

	n = 0;
	int(*nbr)(char*);
	nbr = &ch;

	n = ft_count_if(ab, 3, nbr);
		printf("%d", n);
}
