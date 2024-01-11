#include "libft.h"
#include <stdio.h>

int	main()
{
	int	i = 0;

  int i=0;
  char str[]="C++";
  while (str[i])
  {
    if (ft_isalpha(str[i])) printf ("character %c is alphabetic\n",str[i]);
    else printf ("character %c is not alphabetic\n",str[i]);
    i++;
  }
  return 0;
}
