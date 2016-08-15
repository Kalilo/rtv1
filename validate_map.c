#include "rtv1.h"

int		count_tabs(char **tab)
{
	int		k;

	k = 0;
	if (!tab || !*tab || !**tab)
		return (-1);
	while (*tab[k])
		k++;
	return (k);
}

int		val_tab_count(char **tab)
{
	return (count_tabs(tab) != 13);
}

void	remove_tabs(char **str)
{
	char 	*s;

	s = *str;
	while (s && *s)
	{
		if (*s == '\t')
			*s = ' ';
		s++;
	}
}
