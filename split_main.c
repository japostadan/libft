#include <stdio.h>


int main(int argc, char **argv)
{
    char **splitted;

    splitted = ft_split(argv[1], ' ');
    int i = 0;

    while (splitted[i])
    {
        printf("[%s]", splitted[i]);
        i++;
    }

    // Don't forget to free the memory allocated by ft_split
    ft_free(splitted, i);

    return (0);
}

