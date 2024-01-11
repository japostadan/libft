#include "libft.h"
#include <string.h>

char	*reverse(char *s)
{
	int len = strlen(s);
	for  (int i=0; i < len/2; i++)
	{
		char temp = s[i];
		s[i] = s[len-1-i];
		s[len-1-i] = temp;
	}
	return s;
}
