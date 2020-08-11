#include <stdio.h>

void swap (int *tab)
{
    
}

void    ft_rev_int_tab(int *tab, int size)
{
    int i;
    int j;
    int tmp;

    i = 0;
    while (i < size - 1)
    {
        j = 0;
        while (j < size - i - 1)
        {
            tmp = *(tab + j);
            *(tab + j) = *(tab + j + 1);
            *(tab + j + 1) = tmp;
            j++;
        }
        i++;
    }
}

int main ()
{
    int i = 0;
    int n[7] = {2,5,1,3,6,4,7};
    
    ft_rev_int_tab(n, 7);
    
    while (i < 7)
    {
        printf("%d", n[i]);
        i++;
    }
}
