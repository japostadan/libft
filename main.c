#include <stdio.h>
#include "libft.h"

int main()
{
	printf("rest for strlen is : %zu\n", ft_strlen("sfdsfsd"));
	char *ft_str = {"      split       this  for   me  !       "};
	char **ft_res = ft_split(ft_str, ' ');

	for (int i = 0; i <= 5; i++)
		printf("res at %d : %s\n", i, ft_res[i]);
	return (0);
}
