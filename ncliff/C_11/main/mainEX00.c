
void		ft_foreach(int *tab, int length, void(*f)(int));

int		my_fnk(int nb)
{
	return (nb * 5);
}

int			main()
{
	int ab[6] = {1,2,3,4,5,6};

	void (*nbr)(int);
	nbr = &my_fnk;

	ft_foreach(ab, 6, nbr);
}
