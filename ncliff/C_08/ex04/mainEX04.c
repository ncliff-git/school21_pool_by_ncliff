#include <stdio.h>
#include "ft_stock_str.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

int main(int argc, char **argv)
{
	struct s_stock_str *vam;
	vam = ft_strs_to_tab(argc, argv);

	printf("%d\n", vam[2].size);
	printf("%s\n", vam[2].str);
	printf("%s\n", vam[2].copy);
}
