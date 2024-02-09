#include <stdio.h>
#include <ctype.h>
#include <string.h>
// #include <bsd/string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <time.h>

#include "libft.h"

#define BHRED "\e[1;91m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define reset "\e[0m"

# define INT_MIN -2147483648
# define INT_MAX 2147483647

int	main(void)
{
	int	i;
	clock_t t;
	double time_taken;

	//Part 1 - Libc functions
	printf(BHRED "Part 1 - Libc functions\n" reset);


	////////////////////////////////
	//         ft_isalpha         //
	////////////////////////////////
	t = clock();

	i = -128;
	int	check_isalpha_or = 0;
	int	check_isalpha_ft = 0;

	while (i <= 255)
	{
		if (isalpha(i))
			check_isalpha_or++;
		if (ft_isalpha(i))
			check_isalpha_ft++;
		printf("OR:%d | FT:%d\n", isalpha(i), ft_isalpha(i));
		i++;
	}

	t = clock() - t;
	time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf(" %0.6fs \n", time_taken);

	////////////////////////////////
	//         ft_isdigit         //
	////////////////////////////////
	t = clock();

	i = -128;
	int	check_isdigit_or = 0;
	int	check_isdigit_ft = 0;

	while (i <= 255)
	{
		if (isdigit(i))
			check_isdigit_or++;
		if (ft_isdigit(i))
			check_isdigit_ft++;
		printf("OR:%d | FT:%d\n", isdigit(i), ft_isdigit(i));
		i++;
	}
	if (check_isdigit_or == check_isdigit_ft)
		printf(GRN "FT_ISDIGIT: [OK]" reset);
	else
		printf(RED "FT_ISDIGIT: [KO]" reset);

	t = clock() - t;
	time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf(" %0.6fs \n", time_taken);

	////////////////////////////////
	//         ft_isalnum         //
	////////////////////////////////
	t = clock();

	i = -128;
	int	check_isalnum_or = 0;
	int	check_isalnum_ft = 0;

	while (i <= 255)
	{
		if (isalnum(i))
			check_isalnum_or++;
		if (ft_isalnum(i))
			check_isalnum_ft++;
		printf("OR:%d | FT:%d | i: %d\n", isalnum(i), ft_isalnum(i), i);
		i++;
	}
	if (check_isalnum_or == check_isalnum_ft)
		printf(GRN "FT_ISALNUM: [OK]" reset);
	else
		printf(RED "FT_ISALNUM: [KO]" reset);

	t = clock() - t;
	time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf(" %0.6fs \n", time_taken);

	////////////////////////////////
	//         ft_isascii         //
	////////////////////////////////
	t = clock();

	i = -128;
	int	check_isascii_or = 0;
	int	check_isascii_ft = 0;

	while (i <= 255)
	{
		if (isascii(i))
			check_isascii_or++;
		if (ft_isascii(i))
			check_isascii_ft++;
		printf("OR:%d | FT:%d\n", isascii(i), ft_isascii(i));
		i++;
	}
	if (check_isascii_or == check_isascii_ft)
		printf(GRN "FT_ISASCII: [OK]" reset);
	else
		printf(RED "FT_ISASCII: [KO]" reset);

	t = clock() - t;
	time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf(" %0.6fs \n", time_taken);

	////////////////////////////////
	//         ft_isprint         //
	////////////////////////////////
	t = clock();

	i = -128;
	int	check_isprint_or = 0;
	int	check_isprint_ft = 0;

	while (i <= 255)
	{
		if (isprint(i))
			check_isprint_or++;
		if (ft_isprint(i))
			check_isprint_ft++;
		printf("OR:%d | FT:%d\n", isprint(i), ft_isprint(i));
		i++;
	}
	if (check_isprint_or == check_isprint_ft)
		printf(GRN "FT_ISPRINT: [OK]" reset);
	else
		printf(RED "FT_ISPRINT: [KO]" reset);

	t = clock() - t;
	time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf(" %0.6fs \n", time_taken);

	////////////////////////////////
	//         ft_strlen          //
	////////////////////////////////
	t = clock();

	if (strlen("") == ft_strlen(""))
		printf(GRN "FT_STRLEN:  [OK]" reset);
	else
		printf(RED "FT_STRLEN:  [KO]" reset);

	if (strlen("Nome") == ft_strlen("Nome"))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (strlen("Opnf") == ft_strlen("Opnf"))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	printf("\nLEN: %zu", ft_strlen("1234"));

	t = clock() - t;
	time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf(" %0.6fs \n", time_taken);

	////////////////////////////////
	//         ft_memset          //
	////////////////////////////////
	t = clock();

	char	str_memset[11];

	if (str_memset == ft_memset(str_memset, 'c', 5) && memcmp(str_memset, "ccccc", 5) == 0)
		printf(GRN "FT_MEMSET:  [OK]" reset);
	else
		printf(RED "FT_MEMSET:  [KO]" reset);

	if (str_memset == ft_memset(str_memset, '\n', 6) && memcmp(str_memset, "\n\n\n\n\n\n", 6) == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (str_memset == ft_memset(str_memset, '\0', 1) && memcmp(str_memset, "\0", 1) == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (str_memset == ft_memset(str_memset, -1, 11))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	

	t = clock() - t;
	time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf(" %0.6fs \n", time_taken);

	////////////////////////////////
	//         ft_bzero           //
	////////////////////////////////
	t = clock();

	char	str_bzero_or[11];
	char	str_bzero_ft[11];
	char	str_bzero_or_e[2];
	char	str_bzero_ft_e[2];

	strcpy(str_bzero_or,"npw0FcjYF5");
	strcpy(str_bzero_ft,"npw0FcjYF5");

	strcpy(str_bzero_or_e,"X");
	strcpy(str_bzero_ft_e,"X");

	bzero(str_bzero_or, 10);
	ft_bzero(str_bzero_ft, 10);

	bzero(str_bzero_or_e, 1);
	ft_bzero(str_bzero_ft_e, 1);

	printf("OR:%s\nFT:%s\n", str_bzero_or, str_bzero_ft);
	printf("OR:%s\nFT:%s\n", str_bzero_or_e, str_bzero_ft_e);

	if (strcmp(str_bzero_or, str_bzero_ft) == 0)
		printf(GRN "FT_BZERO:   [OK]" reset);
	else
		printf(RED "FT_BZERO:   [KO]" reset);

	if (strcmp(str_bzero_or_e, str_bzero_ft_e) == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	t = clock() - t;
	time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf(" %0.6fs \n", time_taken);

	////////////////////////////////
	//         ft_memcpy          //
	////////////////////////////////
	t = clock();

	char	str_memcpy[11];
	char	*src_memcpy = "zyxwvutsrqponmlkjihgfedcba";

	if (str_memcpy == ft_memcpy(str_memcpy, src_memcpy, 10))
		printf(GRN "FT_MEMCPY:  [OK]" reset);
	else
		printf(RED "FT_MEMCPY:  [KO]" reset);

	if (str_memcpy == ft_memcpy(str_memcpy, "zyxwvutst", 0))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (ft_memcpy(NULL, NULL, 3) == NULL)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (str_memcpy == ft_memcpy(str_memcpy, "zy\0xw\0vu\0\0tsr", 11))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	char	str_memcpy_src[17] = { "Lorem Ipsum is s" };

	if (strcmp(str_memcpy_src, "Lorem Ipsum is s" ) == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	//visual debug
	printf("VAR: %s\n", str_memcpy_src);
	t = clock() - t;
	time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf(" %0.6fs \n", time_taken);


	////////////////////////////////
	//         ft_memmove         //
	////////////////////////////////
	t = clock();

	char	str_memmove_or[0xF0];
	char	str_memmove_ft[0xF0];
	char	*str_memmove_data = "Lorem Ipsum is simply dummy text of the printing";
	int		memmove_size = 0xF0 - 0xF;

	memset(str_memmove_or, 'A', sizeof(str_memmove_or));
	memset(str_memmove_ft, 'A', sizeof(str_memmove_ft));

	memcpy(str_memmove_or, str_memmove_data, strlen(str_memmove_data));
	memcpy(str_memmove_ft, str_memmove_data, strlen(str_memmove_data));

	memmove(str_memmove_or + 3, str_memmove_or, memmove_size);
	ft_memmove(str_memmove_ft + 3, str_memmove_ft, memmove_size);

	if (memcmp(str_memmove_or, str_memmove_ft, memmove_size) == 0)
		printf(GRN "FT_MEMMOVE: [OK]" reset);
	else
		printf(RED "FT_MEMMOVE: [KO]" reset);

	char str_memmove_src[] = { "There are many variations of" };
	char str_memmove_dest[50];

	ft_memmove(str_memmove_dest, str_memmove_src, 29);

	if (strcmp(str_memmove_src,"There are many variations of") == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);
	printf("\nOR:%s\n\nFT:%s\n", str_memmove_or, str_memmove_ft);


	t = clock() - t;
	time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf(" %0.6fs \n", time_taken);

	////////////////////////////////
	//         ft_strlcpy         //
	////////////////////////////////
	t = clock();

	const char	str_strlcpy_or_src[21] = { "xGOcndW9M12J81QPzIva" };
	const char	str_strlcpy_ft_src[21] = { "xGOcndW9M12J81QPzIva" };
	char	str_strlcpy_or_dest[11];
	char	str_strlcpy_ft_dest[11];
	size_t	size_strlcpy_or;
	size_t	size_strlcpy_ft;

	printf("OR:%s\nFT:%s\n", str_strlcpy_or_dest, str_strlcpy_ft_dest);
	printf("OR:%zu\nFT:%zu\n", size_strlcpy_or, size_strlcpy_ft);

	

	

	printf("%zu\n", ft_strlcpy(str_strlcpy_ft_dest, str_strlcpy_ft_src, -1));

	t = clock() - t;
	time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf(" %0.6fs \n", time_taken);

	////////////////////////////////
	//         ft_strlcat         //
	////////////////////////////////
	


	////////////////////////////////
	//         ft_toupper         //
	////////////////////////////////
	t = clock();

	i = 0;
	int	check_toupper_or = 0;
	int	check_toupper_ft = 0;

	while (i <= 255)
	{
		if (toupper(i) != i)
			check_toupper_or++;
		if (ft_toupper(i) != i)
			check_toupper_ft++;
		printf("OR:%d | FT:%d\n", toupper(i), ft_toupper(i));
		if (toupper(i) != ft_toupper(i))
			printf("OR:%d | FT:%d | i = %d\n", toupper(i), ft_toupper(i), i);
		i++;
	}
	t = clock() - t;
	time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf(" %0.6fs \n", time_taken);


	////////////////////////////////
	//         ft_tolower         //
	////////////////////////////////
	t = clock();

	i = 0;
	int	check_tolower_or = 0;
	int	check_tolower_ft = 0;

	while (i <= 255)
	{
		if (tolower(i) != i)
			check_tolower_or++;
		if (ft_tolower(i) != i)
			check_tolower_ft++;
		printf("OR:%d | FT:%d\n", tolower(i), ft_tolower(i));
		if (tolower(i) != ft_tolower(i))
			printf("OR:%d | FT:%d | i = %d\n", tolower(i), ft_tolower(i), i);
		i++;
	}

	t = clock() - t;
	time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf(" %0.6fs \n", time_taken);


	////////////////////////////////
	//         ft_strchr          //
	////////////////////////////////
	t = clock();

	char	check_strchr_or[] = { "mIsG8eZyTKgK2kz6btzg" };
	char	check_strchr_ft[] = { "mIsG8eZyTKgK2kz6btzg" };
	char	*check_strchr_or_r;
	char	*check_strchr_ft_r;

	check_strchr_or_r = strchr(check_strchr_or, 'A');
	check_strchr_ft_r = ft_strchr(check_strchr_ft, 'A');

	if (check_strchr_or_r == NULL && check_strchr_ft_r == NULL)
		printf(GRN "FT_STRCHR:  [OK]" reset);
	else
		printf(RED "FT_STRCHR:  [KO]" reset);

	//visual debug
	 printf("\nOR:%p ", check_strchr_or_r);
	 printf("FT:%p\n", check_strchr_ft_r);

	check_strchr_or_r = strchr(check_strchr_or, '\0');
	check_strchr_ft_r = ft_strchr(check_strchr_ft, '\0');

	//visual debug
	 printf("\nOR:%c ", *check_strchr_or_r);
	printf("FT:%c\n", *check_strchr_ft_r);

	if (*check_strchr_or_r == *check_strchr_ft_r)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	check_strchr_or_r = strchr(check_strchr_or, 'G');
	check_strchr_ft_r = ft_strchr(check_strchr_ft, 'G');


	t = clock() - t;
	time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf(" %0.6fs \n", time_taken);

	////////////////////////////////
	//         ft_strrchr         //
	////////////////////////////////
	t = clock();

	char	check_strrchr_or[] = { "mIsG8eZyTKgtzgK2kz6b" };
	char	check_strrchr_ft[] = { "mIsG8eZyTKgtzgK2kz6b" };
	char	*check_strrchr_or_r;
	char	*check_strrchr_ft_r;

	check_strrchr_or_r = strrchr(check_strrchr_or, 'A');
	check_strrchr_ft_r = ft_strrchr(check_strrchr_ft, 'A');

	if (check_strrchr_or_r == NULL && check_strrchr_ft_r == NULL)
		printf(GRN "FT_STRRCHR: [OK]" reset);
	else
		printf(RED "FT_STRRCHR: [KO]" reset);

	//visual debug
	printf("\nOR:%p ", check_strrchr_or_r);
	printf("FT:%p\n", check_strrchr_ft_r);

	check_strrchr_or_r = strrchr(check_strrchr_or, '\0');
	check_strrchr_ft_r = ft_strrchr(check_strrchr_ft, '\0');

	//visual debug
	printf("\nOR:%c ", *check_strrchr_or_r);
	printf("FT:%c\n", *check_strrchr_ft_r);


	check_strrchr_or_r = strrchr(check_strrchr_or, 'g');
	check_strrchr_ft_r = ft_strrchr(check_strrchr_ft, 'g');

	if (*check_strrchr_or_r == *check_strrchr_ft_r)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	//visual debug
	printf("\nOR:%s ", check_strrchr_or_r);
	printf("FT:%s\n", check_strrchr_ft_r);

	t = clock() - t;
	time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf(" %0.6fs \n", time_taken);


	////////////////////////////////
	//         ft_strncmp         //
	////////////////////////////////
	t = clock();

	if (ft_strncmp("PrzAWztGNNXedA0idZJp", "PrzAWztGNNXedA0idZJp", 20)
	==     strncmp("PrzAWztGNNXedA0idZJp", "PrzAWztGNNXedA0idZJp", 20))
		printf(GRN "FT_STRNCMP: [OK]" reset);
	else
		printf(RED "FT_STRNCMP: [OK]\n" reset);

	if (ft_strncmp("abcdefgh", "abcdwxyz", 4)
	==     strncmp("abcdefgh", "abcdwxyz", 4))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (ft_strncmp("", "", 1)
	==     strncmp("", "", 1))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (ft_strncmp("ts4EBcHGifQcEIQpQLyH", "0WIVoBkpDEh541LN4zbV", 10)
	&&     strncmp("ts4EBcHGifQcEIQpQLyH", "0WIVoBkpDEh541LN4zbV", 10))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (ft_strncmp("ts4EBcHGifQcEIQpQLyH", "0WIVoBkpDEh541LN4zbV", 0)
	==     strncmp("ts4EBcHGifQcEIQpQLyH", "0WIVoBkpDEh541LN4zbV", 0))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	char strncmp_str[] = { "It is a long established fact that" };

	ft_strncmp(strncmp_str, strncmp_str, 34);

	if (strcmp(strncmp_str, "It is a long established fact that") == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	//visual debug
	printf("\nOR:%d ", strncmp("abcdefgh", "abcdwxyz", 4));
	printf("FT:%d\n", ft_strncmp("abcdefgh", "abcdwxyz", 4));
	printf("OR: It is a long established fact that\n");
	printf("FT: %s\n", strncmp_str);

	t = clock() - t;
	time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf(" %0.6fs \n", time_taken);

	////////////////////////////////
	//         ft_memchr          //
	////////////////////////////////
	t = clock();

	char	check_memchr_or[] = { "mIsG8eZyAKgtzgK2kz6b" };
	char	check_memchr_ft[] = { "mIsG8eZyAKgtzgK2kz6b" };
	char	*check_memchr_or_r;
	char	*check_memchr_ft_r;

	check_memchr_or_r = memchr(check_memchr_or, 'A', 8);
	check_memchr_ft_r = ft_memchr(check_memchr_ft, 'A', 8);

	//visual debug
	 printf("\nOR:%p ", check_memchr_or_r);
	printf("FT:%p\n", check_memchr_ft_r);

	check_memchr_or_r = memchr(check_memchr_or, '\0', 21);
	check_memchr_ft_r = ft_memchr(check_memchr_ft, '\0', 21);

	//visual debug
	printf("\nOR:%c ", *check_memchr_or_r);
	printf("FT:%c\n", *check_memchr_ft_r);

	check_memchr_or_r = memchr(check_memchr_or, 'A', 10);
	check_memchr_ft_r = ft_memchr(check_memchr_ft, 'A', 10);


	int memchr_tab[7] = {-49, 49, 1, -1, 0, -2, 2};

	check_memchr_or_r = memchr(memchr_tab, -1, 7);
	check_memchr_ft_r = ft_memchr(memchr_tab, -1, 7);
	char	check_memchr_str[] = { "mIsG8eZyAKgtzgK2kz6b" };
	ft_memchr(memchr_tab, 'b', 20);

	if (strcmp(check_memchr_str, "mIsG8eZyAKgtzgK2kz6b") == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	//visual debug
	printf("\nOR:%s ", check_memchr_or_r);
	printf("FT:%s\n", check_memchr_ft_r);
	printf("OR: mIsG8eZyAKgtzgK2kz6b\n");
	printf("FT: %s\n", check_memchr_str);

	t = clock() - t;
	time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf(" %0.6fs \n", time_taken);

	////////////////////////////////
	//         ft_memcmp          //
	////////////////////////////////
	t = clock();

	if (ft_memcmp("PrzAWztGNNXedA0idZJp", "PrzAWztGNNXedA0idZJp", 20)
	==     memcmp("PrzAWztGNNXedA0idZJp", "PrzAWztGNNXedA0idZJp", 20))
		printf(GRN "FT_MEMCMP:  [OK]" reset);
	else
		printf(RED "FT_MEMCMP:  [OK]\n" reset);

	if (ft_memcmp("", "", 1)
	==     memcmp("", "", 1))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (ft_memcmp("ts4EBcHGifQcEIQpQLyH", "0WIVoBkpDEh541LN4zbV", 10)
	&&     memcmp("ts4EBcHGifQcEIQpQLyH", "0WIVoBkpDEh541LN4zbV", 10))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (ft_memcmp("ts4EBcHGifQcEIQpQLyH", "0WIVoBkpDEh541LN4zbV", 0)
	==     memcmp("ts4EBcHGifQcEIQpQLyH", "0WIVoBkpDEh541LN4zbV", 0))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (ft_memcmp("abcdefghij", "abcdefgxyz", 7)
	==     memcmp("abcdefghij", "abcdefgxyz", 7))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	char	memcmp_str[] = { "traset sheets containing L" };

	ft_memcmp("traset sheets containing L", "traset sheets containing L", 27);

	if (strcmp(memcmp_str, "traset sheets containing L") == 0)
		printf(GRN " [OK]\n" reset);
	else
		printf(RED " [KO]\n" reset);

	//visual debug
	 printf("\nOR:%d ", memcmp("abcdefghij", "abcdefgxyz", 7));
	 printf("FT:%d\n", ft_memcmp("abcdefghij", "abcdefgxyz", 7));
	 printf("OR: traset sheets containing L\n");
	  printf("FT: %s\n", memcmp_str);

	////////////////////////////////
	//         ft_strnstr         //
	////////////////////////////////
	t = clock();

	char	strnstr_or_big[] = { "paae3fRs6frctbs5thQp" };
	char	strnstr_ft_big[] = { "paae3fRs6frctbs5thQp" };
	char	strnstr_or_little[] = { "mada" };
	char	strnstr_ft_little[] = { "mada" };
	char	*strnstr_or_r;
	char	*strnstr_ft_r;



	strnstr_ft_r = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15);

	printf("\nOR:%s ", strnstr_or_r);
	printf("FT:%s\n", strnstr_ft_r);

	t = clock() - t;
	time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf(" %0.6fs \n", time_taken);

	////////////////////////////////
	//         ft_atoi            //
	////////////////////////////////
	t = clock();

	if (atoi(" -1234ab567") == ft_atoi(" -1234ab567"))
		printf(GRN "FT_ATOI:    [OK]" reset);
	else
		printf(RED "FT_ATOI:    [KO]" reset);

	if (atoi("12345/1234") == ft_atoi("12345/1234"))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (atoi(" -12x34ab567") == ft_atoi(" -12x34ab567"))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (atoi("2147483647") == ft_atoi("2147483647"))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (atoi("-2147483648") == ft_atoi("-2147483648"))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (atoi("99999999999999999999999999") == ft_atoi("99999999999999999999999999"))
		printf(GRN " [OK]" reset);
	else
		printf(YEL " [KO]" reset);

	if (atoi("-99999999999999999999999999") == ft_atoi("-99999999999999999999999999"))
		printf(GRN " [OK]" reset);
	else
		printf(YEL " [KO]" reset);

	if (atoi("+-54") == ft_atoi("+-54"))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (atoi("-+48") == ft_atoi("-+48"))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (atoi("--47") == ft_atoi("--47"))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (atoi("++47") == ft_atoi("++47"))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (atoi("+47+5") == ft_atoi("+47+5"))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (atoi("-47-5") == ft_atoi("-47-5"))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (atoi("\t\n\r\v\fd469 \n") == ft_atoi("\t\n\r\v\fd469 \n"))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (atoi("\e475") == ft_atoi("\e475"))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (atoi("\e475") == ft_atoi("\e475"))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (atoi("") == ft_atoi(""))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	char atoi_str[] = { "2147483648" };

	ft_atoi(atoi_str);

	if (strcmp(atoi_str, "2147483648") == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	//visual debug
	printf("\nOR:%d ", atoi("99999999999999999999999999"));
	 printf("FT:%d", ft_atoi("99999999999999999999999999"));
	 printf("\nOR:%d ", atoi("-99999999999999999999999999"));
	 printf("FT:%d\n", ft_atoi("-99999999999999999999999999"));
	 printf("\nOR:%d ", atoi("-999999999999999999"));
	 printf("FT:%d\n", ft_atoi("-999999999999999999"));
	 printf("VAR: %s\n", atoi_str);

	t = clock() - t;
	time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf(" %0.6fs \n", time_taken);

	////////////////////////////////
	//         ft_calloc          //
	////////////////////////////////
	t = clock();

	char	*calloc_ft;

	calloc_ft = ft_calloc(5, sizeof(char));
	ft_strlcpy(calloc_ft, "ABCD", 5);
	//visual debug
	printf("\nOR:%s\n", calloc_ft);

	free(calloc_ft);

	t = clock() - t;
	time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf(" %0.6fs \n", time_taken);

	////////////////////////////////
	//         ft_strdup          //
	////////////////////////////////
	t = clock();

	char	*strdup_ft;

	strdup_ft = ft_strdup("Teste");


	//visual debug
	printf("\nOR:%s\n", strdup_ft);

	free(strdup_ft);

	t = clock() - t;
	time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf(" %0.6fs \n", time_taken);


	//Part 2 - Additional functions
	printf(BHRED "\nPart 2 - Additional functions\n" reset);

	////////////////////////////////
	//         ft_substr          //
	////////////////////////////////
	t = clock();

	char *substr_str = "Apples are round, and apples are juicy.";
	char *ft_substr_res;

	ft_substr_res = ft_substr(substr_str, 0, 6);
	if (strcmp(ft_substr_res, "Apples") == 0)
		printf(GRN "FT_SUBSTR:  [OK]" reset);
	else
		printf(RED "FT_SUBSTR:  [KO]" reset);

	free(ft_substr_res);
	ft_substr_res = ft_substr("tripouille", 1, 1);
	if (strcmp(ft_substr_res, "r") == 0)
		printf(GRN " [OK]" reset);
	//visual debug
	 printf("\nRES:%s$\n", ft_substr("", 0, 100));

	free(ft_substr_res);

	t = clock() - t;
	time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf(" %0.6fs \n", time_taken);

	////////////////////////////////
	//         ft_strjoin          //
	////////////////////////////////
	t = clock();

	char const *strjoin_str_1 = "Apples are round,";
	char const *strjoin_str_2 = " and apples are juicy.";
	char *strjoin_str_res;

	strjoin_str_res = ft_strjoin(strjoin_str_1, strjoin_str_2);
	if (strcmp(strjoin_str_res, "Apples are round, and apples are juicy.") == 0)
		printf(GRN "FT_STRJOIN: [OK]" reset);
	else
		printf(RED "FT_STRJOIN: [KO]" reset);

	if (strjoin_str_res[38] == '.')
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (strjoin_str_res[39] == '\0')
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	free(strjoin_str_res);
	strjoin_str_res = ft_strjoin("AAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAA");
	if (strcmp(strjoin_str_res, "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (strjoin_str_res[46] == '\0')
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	//visual debug
	 printf("\nRES: $%s$\n", ft_strjoin(strjoin_str_1, strjoin_str_2));
	 printf("\nRES: $%c$\n", strjoin_str_res[38]);
	 printf("\n45 => A: $%c$", strjoin_str_res[45]);
	 printf("\n46 => A: $%c$", strjoin_str_res[46]);
	 printf("\n47 => 0: $%c$\n", strjoin_str_res[47]);
	 printf("\nRES: $AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA$");
	 printf("\nRES: $%s$\n", strjoin_str_res);
	 printf("\nLEN: %lu\n", strlen(strjoin_str_res));

	t = clock() - t;
	time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf(" %0.6fs \n", time_taken);

	free(strjoin_str_res);

	////////////////////////////////
	//         ft_strtrim          //
	////////////////////////////////
	t = clock();

	char *strtrim_str_res;

	strtrim_str_res = ft_strtrim("lorem \n ipsum \t dolor \n sit \t amet", " ");
	if (strcmp(strtrim_str_res, "lorem \n ipsum \t dolor \n sit \t amet") == 0)
		printf(GRN "FT_STRTRIM: [OK]" reset);
	else
		printf(RED "FT_STRTRIM: [KO]" reset);

	free(strtrim_str_res);
	strtrim_str_res = ft_strtrim("lorem ipsum dolor sit amet", "te");
	if (strcmp(strtrim_str_res, "lorem ipsum dolor sit am") == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	free(strtrim_str_res);
	strtrim_str_res = ft_strtrim(" lorem ipsum dolor sit amet", "l ");
	if (strcmp(strtrim_str_res, "orem ipsum dolor sit amet") == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	 free(strtrim_str_res);
	 strtrim_str_res = ft_strtrim("          ", " ");
	 if (strcmp(strtrim_str_res, "") == 0)
	 	printf(GRN " [OK]" reset);
	 else
	 	printf(RED " [KO]" reset);

	free(strtrim_str_res);
	strtrim_str_res = ft_strtrim("lorem ipsum dolor sit amet", "tel");
	if (strcmp(strtrim_str_res, "orem ipsum dolor sit am") == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	free(strtrim_str_res);
	strtrim_str_res = ft_strtrim("   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ", " \n\t");
	if (strcmp(strtrim_str_res, "Hello \t  Please\n Trim me !") == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	free(strtrim_str_res);
	strtrim_str_res = ft_strtrim(NULL, NULL);
	if (strtrim_str_res == NULL)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	free(strtrim_str_res);
	strtrim_str_res = ft_strtrim("", "");
	if (strcmp(strtrim_str_res, "") == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	//visual debug
	 printf("\nEXP: $orem ipsum dolor sit am$     => SET: tel");
	 printf("\nRES: $%s$\n", ft_strtrim("lorem ipsum dolor sit amet", "tel"));

	free(strtrim_str_res);

	t = clock() - t;
	time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf(" %0.6fs \n", time_taken);

	////////////////////////////////
	//         ft_split           //
	////////////////////////////////
	t = clock();

	char	*ft_split_str = { "      split       this  for   me  !       " };
	char	*ft_split_str2 = { "1-2-3-4-5-6-7-8--8-8--8-4------4--4" };
	char	*ft_split_str3 = { "--1-2-3-4-5-6-7-8--8-8--8-4------4--4" };
	char	**ft_split_res;
	char	**ft_split_res2;
	char	**ft_split_res3;

	//test 1
	ft_split_res = ft_split(ft_split_str, ' ');
	if (!strcmp(ft_split_res[0], "split")
	 && !strcmp(ft_split_res[1], "this")
	 && !strcmp(ft_split_res[2], "for")
	 && !strcmp(ft_split_res[3], "me")
	 && !strcmp(ft_split_res[4], "!")
	 && ft_split_res[5] == NULL
	)
		printf(GRN "FT_SPLIT:   [OK]" reset);
	else
		printf(RED " [KO]" reset);

	// visual debug
	 for (i = 0; i <= 5; i++)
	 	printf("\nRES[%d]: $%s$ -> %p", i, ft_split_res[i] , ft_split_res[i]);

	//test 2
	ft_split_res2 = ft_split(ft_split_str2, '-');
	if (!strcmp(ft_split_res2[0], "1")
	 && !strcmp(ft_split_res2[1], "2")
	 && !strcmp(ft_split_res2[2], "3")
	 && !strcmp(ft_split_res2[3], "4")
	 && !strcmp(ft_split_res2[4], "5")
	 && !strcmp(ft_split_res2[5], "6")
	 && !strcmp(ft_split_res2[6], "7")
	 && !strcmp(ft_split_res2[7], "8")
	 && !strcmp(ft_split_res2[8], "8")
	 && !strcmp(ft_split_res2[9], "8")
	 && !strcmp(ft_split_res2[10], "8")
	 && !strcmp(ft_split_res2[11], "4")
	 && !strcmp(ft_split_res2[12], "4")
	 && !strcmp(ft_split_res2[13], "4")
	 && ft_split_res2[14] == NULL
	)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	// visual debug
	 for (i = 0; i <= 14; i++)
	 	printf("\nRES[%d]: $%s$ 	-> %p", i, ft_split_res2[i] , ft_split_res2[i]);

	//test 3
	ft_split_res3 = ft_split(ft_split_str3, '-');
	if (!strcmp(ft_split_res3[0], "1")
	 && !strcmp(ft_split_res3[1], "2")
	 && !strcmp(ft_split_res3[2], "3")
	 && !strcmp(ft_split_res3[3], "4")
	 && !strcmp(ft_split_res3[4], "5")
	 && !strcmp(ft_split_res3[5], "6")
	 && !strcmp(ft_split_res3[6], "7")
	 && !strcmp(ft_split_res3[7], "8")
	 && !strcmp(ft_split_res3[8], "8")
	 && !strcmp(ft_split_res3[9], "8")
	 && !strcmp(ft_split_res3[10], "8")
	 && !strcmp(ft_split_res3[11], "4")
	 && !strcmp(ft_split_res3[12], "4")
	 && !strcmp(ft_split_res3[13], "4")
	 && ft_split_res3[14] == NULL
	)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	// visual debug
	 for (i = 0; i <= 14; i++)
	 	printf("\nRES[%d]: $%s$ 	-> %p", i, ft_split_res3[i] , ft_split_res3[i]);


	//free
	for (i = 0; i < 5; i++)
		free(ft_split_res[i]);
	free(ft_split_res);
	for (i = 0; i < 14; i++)
		free(ft_split_res2[i]);
	free(ft_split_res2);
	for (i = 0; i < 14; i++)
		free(ft_split_res3[i]);
	free(ft_split_res3);


	t = clock() - t;
	time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf(" %0.6fs \n", time_taken);

	////////////////////////////////
	//         ft_itoa            //
	////////////////////////////////
	t = clock();

	char *ft_itoa_res;

	ft_itoa_res = ft_itoa(INT_MIN);
	if (strcmp(ft_itoa_res, "-2147483648") == 0)
		printf(GRN "FT_ITOA:    [OK]" reset);
	else
		printf(RED "FT_ITOA:    [KO]" reset);

	free(ft_itoa_res);
	ft_itoa_res = ft_itoa(INT_MAX);
	if (strcmp(ft_itoa_res, "2147483647") == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	free(ft_itoa_res);
	ft_itoa_res = ft_itoa(-2147483648LL);
	if (strcmp(ft_itoa_res, "-2147483648") == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	free(ft_itoa_res);
	ft_itoa_res = ft_itoa(9);
	if (strcmp(ft_itoa_res, "9") == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	free(ft_itoa_res);
	ft_itoa_res = ft_itoa(-9);
	if (strcmp(ft_itoa_res, "-9") == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	free(ft_itoa_res);
	ft_itoa_res = ft_itoa(10);
	if (strcmp(ft_itoa_res, "10") == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	free(ft_itoa_res);
	ft_itoa_res = ft_itoa(-10);
	if (strcmp(ft_itoa_res, "-10") == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	free(ft_itoa_res);
	ft_itoa_res = ft_itoa(-1);
	if (strcmp(ft_itoa_res, "-1") == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	free(ft_itoa_res);
	ft_itoa_res = ft_itoa(0);
	if (strcmp(ft_itoa_res, "0") == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	//visual debug
	 printf("\nRES:%s", ft_itoa(2147483647));
	 printf("\nRES:%s", ft_itoa(-2147483648));

	free(ft_itoa_res);

	t = clock() - t;
	time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf(" %0.6fs \n", time_taken);

	////////////////////////////////
	//         ft_strmapi         //
	////////////////////////////////
	t = clock();

	char	*strmapi_res;
	void	*strmapi_f;


	strmapi_res = ft_strmapi("AAAAAAAAAAAAAAAAAAAAAAAAAA", strmapi_f);
	if (strcmp(strmapi_res, "ABCDEFGHIJKLMNOPQRSTUVWXYZ") == 0)
		printf(GRN "FT_STRMAPI: [OK]" reset);
	else
		printf(RED "FT_STRMAPI:    [KO]" reset);

	//visual debug
	 printf("\nRES:%s\n", strmapi_res);

	free(strmapi_res);
	strmapi_res = ft_strmapi(NULL, strmapi_f);


	free(strmapi_res);

	//visual debug
	 printf("\nRES:%s", strmapi_res);

	t = clock() - t;
	time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf(" %0.6fs \n", time_taken);

	////////////////////////////////
	//         ft_striteri        //
	////////////////////////////////


	////////////////////////////////
	//         ft_putchar_fd      //
	////////////////////////////////
	t = clock();

	char	putchar_c;
	int		putchar_fd_read;
	int		putchar_fd_write;

	//READ WRITE 'a'
	putchar_fd_write = open("file.z", O_WRONLY | O_CREAT, 0777);
	ft_putchar_fd('a', putchar_fd_write);

	putchar_fd_read = open("file.z", O_RDONLY);
	read(putchar_fd_read, &putchar_c, 1);

	if (putchar_c == 'a')
		printf(GRN "FT_PUTCHAR_FD:   [OK]" reset);
	else
		printf(RED "FT_PUTCHAR_FD:   [KO]" reset);
	//READ WRITE 'a'

	//READ WRITE 'Z'
	putchar_fd_write = open("file.z", O_WRONLY | O_CREAT, 0777);
	ft_putchar_fd('Z', putchar_fd_write);

	putchar_fd_read = open("file.z", O_RDONLY);
	read(putchar_fd_read, &putchar_c, 1);

	if (putchar_c == 'Z')
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);
	//READ WRITE 'Z'

	//READ WRITE '-1'
	putchar_fd_write = open("file.z", O_WRONLY | O_CREAT, 0777);
	ft_putchar_fd(-1, putchar_fd_write);

	putchar_fd_read = open("file.z", O_RDONLY);
	read(putchar_fd_read, &putchar_c, 1);

	if (putchar_c == -1)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);
	//READ WRITE '-1'

	//READ WRITE '\0'
	putchar_fd_write = open("file.z", O_WRONLY | O_CREAT, 0777);
	ft_putchar_fd('\0', putchar_fd_write);

	putchar_fd_read = open("file.z", O_RDONLY);
	read(putchar_fd_read, &putchar_c, 1);

	if (putchar_c == '\0')
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);
	//READ WRITE '\0'


	//visual debug
	// printf("\nFD:%c", putchar_c);

	unlink("./file.z");
	close(putchar_fd_read);
	close(putchar_fd_write);

	t = clock() - t;
	time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf(" %0.6fs \n", time_taken);

	////////////////////////////////
	//         ft_putstr_fd       //
	////////////////////////////////
	t = clock();

	char	*putstr_str;
	char	putstr_str_d[] = { -1, -2, -3, -4, -5, -6, '\0' };
	int		putstr_fd_read;
	int		putstr_fd_write;

	putstr_str = (char *)malloc(sizeof(char) * 80);

	//READ WRITE "They floated in the center"
	memset(putstr_str, 0, 45);
	putstr_fd_write = open("file.z", O_WRONLY | O_CREAT, 0777);
	ft_putstr_fd("They floated in the center", putstr_fd_write);

	putstr_fd_read = open("file.z", O_RDONLY);
	read(putstr_fd_read, putstr_str, ft_strlen("They floated in the center"));

	if (strcmp(putstr_str, "They floated in the center") == 0)
		printf(GRN "FT_PUTSTR_FD:    [OK]" reset);
	else
		printf(RED "FT_PUTSTR_FD:    [KO]" reset);
	//READ WRITE "They floated in the center"

	//READ WRITE "He tried to walk past her back into the dark"
	memset(putstr_str, 0, 45);
	putstr_fd_write = open("file.z", O_WRONLY | O_CREAT, 0777);
	ft_putstr_fd("He tried to walk past her back into the dark", putstr_fd_write);

	putstr_fd_read = open("file.z", O_RDONLY);
	read(putstr_fd_read, putstr_str, ft_strlen("He tried to walk past her back into the dark"));

	if (strcmp(putstr_str, "He tried to walk past her back into the dark") == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);
	//READ WRITE "He tried to walk past her back into the dark"

	//READ WRITE "-1, -2, -3, -4, -5, -6, '\0'"
	memset(putstr_str, 0, 30);
	putstr_fd_write = open("file.z", O_WRONLY | O_CREAT, 0777);
	ft_putstr_fd(putstr_str_d, putstr_fd_write);

	putstr_fd_read = open("file.z", O_RDONLY);
	read(putstr_fd_read, putstr_str, ft_strlen(putstr_str_d));

	if (strcmp(putstr_str, putstr_str_d) == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);
	//READ WRITE "-1, -2, -3, -4, -5, -6, '\0'"

	//READ WRITE "NULL"
	putstr_fd_write = open("file.z", O_WRONLY | O_CREAT, 0777);
	ft_putstr_fd(NULL, putstr_fd_write);

	putstr_fd_read = open("file.z", O_RDONLY);
	read(putstr_fd_read, putstr_str, ft_strlen(putstr_str_d));

	if (strcmp(putstr_str, putstr_str_d) == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);
	//READ WRITE "NULL"

	//visual debug
	// printf("\nFD:%s", putstr_str);

	unlink("./file.z");
	free(putstr_str);
	close(putstr_fd_read);
	close(putstr_fd_write);

	t = clock() - t;
	time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf(" %0.6fs \n", time_taken);

	////////////////////////////////
	//         ft_putendl_fd      //
	////////////////////////////////
	t = clock();

	char	*putendl_str;
	char	putendl_str_d[] = { -1, -2, -3, -4, -5, -6, '\0' };
	int		putendl_fd_read;
	int		putendl_fd_write;

	putendl_str = (char *)malloc(sizeof(char) * 80);

	//READ WRITE "They floated in the center"
	memset(putendl_str, 0, 30);
	putendl_fd_write = open("file.z", O_WRONLY | O_CREAT, 0777);
	ft_putendl_fd("They floated in the center", putendl_fd_write);

	putendl_fd_read = open("file.z", O_RDONLY);
	read(putendl_fd_read, putendl_str, strlen("They floated in the center") + 1);

	if (strcmp(putendl_str, "They floated in the center\n") == 0)
		printf(GRN "FT_PUTENDL_FD:   [OK]" reset);
	else
		printf(RED "FT_PUTENDL_FD:   [KO]" reset);
	//READ WRITE "They floated in the center"

	//visual debug
	// printf("\nFD:%s", putendl_str);

	//READ WRITE "He tried to walk past her back into the dark"
	memset(putendl_str, 0, 46);
	putendl_fd_write = open("file.z", O_WRONLY | O_CREAT, 0777);
	ft_putendl_fd("He tried to walk past her back into the dark", putendl_fd_write);

	putendl_fd_read = open("file.z", O_RDONLY);
	read(putendl_fd_read, putendl_str, ft_strlen("He tried to walk past her back into the dark") + 1);

	if (strcmp(putendl_str, "He tried to walk past her back into the dark\n") == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);
	//READ WRITE "He tried to walk past her back into the dark"

	//READ WRITE "-1, -2, -3, -4, -5, -6, '\0'"
	memset(putendl_str, 0, 30);
	putendl_fd_write = open("file.z", O_WRONLY | O_CREAT, 0777);
	ft_putendl_fd(putendl_str_d, putendl_fd_write);

	putendl_fd_read = open("file.z", O_RDONLY);
	read(putendl_fd_read, putendl_str, ft_strlen(putendl_str_d) + 1);

	if (putendl_str[5] == -6 && putendl_str[6] == '\n')
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);
	//READ WRITE "-1, -2, -3, -4, -5, -6, '\0'"

	//READ WRITE "NULL"
	putendl_fd_write = open("file.z", O_WRONLY | O_CREAT, 0777);
	ft_putendl_fd(NULL, putendl_fd_write);

	putendl_fd_read = open("file.z", O_RDONLY);
	read(putendl_fd_read, putendl_str, ft_strlen(putendl_str_d));

	if (putendl_str[5] == -6 && putendl_str[6] == '\n')
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);
	//READ WRITE "NULL"

	unlink("./file.z");
	free(putendl_str);
	close(putendl_fd_read);
	close(putendl_fd_write);

	t = clock() - t;
	time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf(" %0.6fs \n", time_taken);

	////////////////////////////////
	//         ft_putnbr_fd       //
	////////////////////////////////
	t = clock();

	char	*putnbr_str;
	int		putnbr_fd_read;
	int		putnbr_fd_write;

	putnbr_str = (char *)malloc(sizeof(char) * 30);

	//READ WRITE "2147483647"
	memset(putnbr_str, 0, 30);
	putnbr_fd_write = open("file_2.z", O_WRONLY | O_CREAT, 0777);
	ft_putnbr_fd(2147483647, putnbr_fd_write);
	lseek(putnbr_fd_write, SEEK_SET, 0);

	putnbr_fd_read = open("file_2.z", O_RDONLY);
	read(putnbr_fd_read, putnbr_str, 30);

	if (strcmp(putnbr_str, "2147483647") == 0)
		printf(GRN "FT_PUTNBR_FD:    [OK]" reset);
	else
		printf(RED "FT_PUTNBR_FD:    [KO]" reset);
	unlink("./file_2.z");
	//READ WRITE "2147483647"

	//READ WRITE "-2147483648"
	memset(putnbr_str, 0, 30);
	putnbr_fd_write = open("file_2.z", O_WRONLY | O_CREAT, 0777);
	ft_putnbr_fd(-2147483648, putnbr_fd_write);
	lseek(putnbr_fd_write, SEEK_SET, 0);

	putnbr_fd_read = open("file_2.z", O_RDONLY);
	read(putnbr_fd_read, putnbr_str, 30);

	if (strcmp(putnbr_str, "-2147483648") == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);
	unlink("./file_2.z");
	//READ WRITE "-2147483648"

	//READ WRITE "0"
	memset(putnbr_str, 0, 30);
	putnbr_fd_write = open("file_2.z", O_WRONLY | O_CREAT, 0777);
	ft_putnbr_fd(0, putnbr_fd_write);
	lseek(putnbr_fd_write, SEEK_SET, 0);

	putnbr_fd_read = open("file_2.z", O_RDONLY);
	read(putnbr_fd_read, putnbr_str, 30);

	if (strcmp(putnbr_str, "0") == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);
	unlink("./file_2.z");
	//READ WRITE "0"

	//READ WRITE "0"
	memset(putnbr_str, 0, 30);
	putnbr_fd_write = open("file_2.z", O_WRONLY | O_CREAT, 0777);
	ft_putnbr_fd(0, putnbr_fd_write);
	lseek(putnbr_fd_write, SEEK_SET, 0);

	putnbr_fd_read = open("file_2.z", O_RDONLY);
	read(putnbr_fd_read, putnbr_str, 30);

	if (strcmp(putnbr_str, "0") == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);
	unlink("./file_2.z");
	//READ WRITE "0"

	//READ WRITE "10"
	memset(putnbr_str, 0, 30);
	putnbr_fd_write = open("file_2.z", O_WRONLY | O_CREAT, 0777);
	ft_putnbr_fd(10, putnbr_fd_write);
	lseek(putnbr_fd_write, SEEK_SET, 0);

	putnbr_fd_read = open("file_2.z", O_RDONLY);
	read(putnbr_fd_read, putnbr_str, 30);

	if (strcmp(putnbr_str, "10") == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);
	unlink("./file_2.z");
	//READ WRITE "10"

	//visual debug
	// printf("\nFD: %s", putnbr_str);


	free(putnbr_str);
	close(putendl_fd_read);
	close(putendl_fd_write);

	t = clock() - t;
	time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf(" %0.6fs \n", time_taken);
}