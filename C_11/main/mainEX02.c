
#include <stdio.h>

int ft_any(char **tab, int (*f)(char*));

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
	char *ab[4] = {"0000","0000","0000"};
	ab[3] = 0;
	int i;
	int(*nbr)(char*);
	nbr = &ch;

//	i = ch(ab[2]);
//printf("%d", i);

	if(ft_any(ab, nbr))
		printf("1");
	else
		printf("0");
}
