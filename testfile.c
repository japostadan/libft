#include "libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc > 0)
	{
		printf("%s\n", argv[1]);
		printf("%s\n", reverse(argv[1]));
	}

	int i = 0;
	char str[] = "test";
	while (str[i])
	{
		if(ft_isalpha(str[i]))
			printf("character %c is alphabet\n", str[i]);
		else
			printf("character %c in not alphabet\n",str[i]);
		i++;
	}

	int j = 0;
	char s[] = "isd1git";
	while (s[j])
	{
		if (ft_isdigit(s[j]))
			printf("char  %c isdigit\n", s[j]);
		else
			printf("char %c is not digit\n", s[j]);
		j++;
	}
	return 0;
}
