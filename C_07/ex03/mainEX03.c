#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int main()
{
	char ch[3][13] = {"Abcd","Good","Summertime"};
	char ch2[3] = "...";
	char *ch3;

	ch3 = ft_strjoin(3, ch, ch2);
}
