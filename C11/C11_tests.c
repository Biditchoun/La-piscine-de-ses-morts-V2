/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C11_tests.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 22:37:08 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/31 15:17:40 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

void	putnbr(int nb)
{
	if (nb > 9)
		putnbr(nb / 10);
	nb = nb % 10 + '0';
	write(1, &nb, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == INT_MIN)
		write (1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		putnbr(nb);
	}
	write(1, " ", 1);
}

int	ex01(int nb)
{
	ft_putnbr(nb);
	if (nb < 0)
		nb++;
	else if (nb > 0)
		nb--;
	return (nb);
}

int	ex02(char *str)
{
	if (!str[0])
		return (0);
	return (1);
}

int	ex04(int a, int b)
{
	return ((a % 3) - (b % 3));
}

int 	ex07(char *s1, char *s2)
{
    while (*s1 && *s2)
    {
        s1++;
        s2++;
    }
    if (*s1 == 0 && *s2 == 0)
        return (0);
    if (*s1 == 0)
        return (-1);
    return (1);
}

int main()
{
	//ex00
	void ft_foreach(int *tab, int length, void(*f)(int));
	void (*pt1)(int);
	int arr1[] = {INT_MIN, 35, 28, -25, INT_MAX, 0};
	printf("ft_foreach tests\n%i %i %i %i %i %i %i %i %i %i %i %i\n", INT_MIN, INT_MIN, 35, 28, -25, INT_MAX, INT_MIN, 35, 28, -25, INT_MAX, 0);
	pt1 = &ft_putnbr;
	ft_foreach(arr1, -1, pt1);
	ft_foreach(arr1, 0, pt1);
	ft_foreach(arr1, 1, pt1);
	ft_foreach(arr1, 5, pt1);
	ft_foreach(arr1, 6, pt1);
	printf("\n");
	//ft_for_each should not crash
	ft_foreach(NULL, 1, pt1);
	ft_foreach(arr1, 1, NULL);
	ft_foreach(NULL, 1, NULL);

	//ex01
	int *ft_map(int *tab, int length, int(*f)(int));
	printf("\n\nft_map tests\n");
	int (*pt2)(int);
	pt2 = &ex01;
	int *arr;
	arr = ft_map(arr1, -1, pt2);
	arr = ft_map(arr1, 0, pt2);
	printf("%i %i\n", INT_MIN, INT_MIN + 1);
	arr = ft_map(arr1, 1, pt2);
	printf("%i\n", arr1[0]);
	free(arr);
	printf("%i %i %i %i %i %i %i %i %i %i\n", INT_MIN, 35, 28, -25, INT_MAX, INT_MIN + 1, 34, 27, -24, INT_MAX - 1);
	arr = ft_map(arr1, 5, pt2);
	printf("%i %i %i %i %i\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	free(arr);
	printf("%i %i %i %i %i %i %i %i %i %i %i %i\n", INT_MIN, 35, 28, -25, INT_MAX, 0, INT_MIN + 1, 34, 27, -24, INT_MAX - 1, 0);
	arr = ft_map(arr1, 6, pt2);
	printf("%i %i %i %i %i %i\n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);
	free(arr);
	//ft_map should not crash
	ft_map(NULL, 1, pt2);
	ft_map(arr1, 1, NULL);
	ft_map(NULL, 1, NULL);

	//ex02
	printf("\n\nft_any tests\n");
	int ft_any(char **tab, int(*f)(char*));
	char *tab[] = {"", "", "", NULL, NULL, NULL, NULL, NULL, NULL, NULL};
	printf("0 %i\n", ft_any(tab, &ex02));
	tab[2] = "oui";
	printf("1 %i\n", ft_any(tab, &ex02));
	tab[1] = NULL;
	printf("0 %i\n", ft_any(tab, &ex02));
	tab[0] = "feur";
	printf("1 %i\n", ft_any(tab, &ex02));
	//ft_any should not crash
	ft_any(NULL, &ex02);
	ft_any(tab, NULL);
	ft_any(NULL, NULL);

	//ex03
	printf("\n\nft_count_if tests\n");
	int ft_count_if(char **tab, int length, int(*f)(char*));
	tab[0] = tab[1] = tab[2] = tab[3] = "";
	printf("0 0 0 0\n%i %i %i %i\n", ft_count_if(tab, -1, &ex02),ft_count_if(tab, 0, &ex02), ft_count_if(tab, 1, &ex02), ft_count_if(tab, 4, &ex02));  
	tab[0] = tab[1] = tab[3] = "feur";
	printf("0 0 1 3\n%i %i %i %i\n", ft_count_if(tab, -1, &ex02),ft_count_if(tab, 0, &ex02), ft_count_if(tab, 1, &ex02), ft_count_if(tab, 4, &ex02));  
	//ft_count_if should not crash
	ft_count_if(NULL, 1, &ex02);
	ft_count_if(tab, 1, NULL);
	ft_count_if(NULL, 1, NULL);

	//ex04
	printf("\n\nft_is_sort tests\n");
	int ft_is_sort(int *tab, int length, int(*f)(int, int));
	int arr2[] = {0, 6, 3, 7, 10, 4, 2, 8, 7};
	int arr3[] = {8, 2, 4, 10, 7, 3, 6, 0, 1};
	printf("1 1 1 1 1 0 1 0\n%i %i %i %i %i %i %i %i\n", ft_is_sort(arr2, -1, &ex04), ft_is_sort(arr2, 0, &ex04), ft_is_sort(arr2, 1, &ex04), ft_is_sort(arr2, 2, &ex04), ft_is_sort(arr2, 8, &ex04), ft_is_sort(arr2, 9, &ex04), ft_is_sort(arr3, 8, &ex04), ft_is_sort(arr3, 9, &ex04));
	//ft_is_sort should not crash
	ft_is_sort(NULL, 1, &ex04);
	ft_is_sort(arr2, 1, NULL);
	ft_is_sort(NULL, 1, NULL);

	//ex05
	printf("\n\ndo-op tests\nFor do-op, enter the exercice file and try your own tests.\nDo not forget about invalid operators, trying out dividing and moduling by 0, using an invalid number of arguments.\nAlso try out all the rules from the makefile. Remember that using \"*\" instead of * is needed because of shell limitations.");

	//ex06
	printf("\n\nft_sort_string_tab tests\n");
	void ft_sort_string_tab(char **tab);
	tab[0] = NULL;
	tab[1] = "Jambon";
	int i = -1;
	while (tab[++i])
		printf("%s ", tab[i]);
	printf("\n");
	ft_sort_string_tab(tab);
	i = -1;
	while (tab[++i])
		printf("%s ", tab[i]);
	printf("\n");
	tab[0] = tab[1];
	tab[1] = NULL;
	i = -1;
	while (tab[++i])
		printf("%s ", tab[i]);
	printf("\n");
	ft_sort_string_tab(tab);
	i = -1;
	while (tab[++i])
		printf("%s ", tab[i]);
	printf("\n");
	tab[1] = "Iambon";
	tab[2] = NULL;
	printf("%s %s", tab[1], tab[0]);
	printf("\n");
	ft_sort_string_tab(tab);
	i = -1;
	while (tab[++i])
		printf("%s ", tab[i]);
	printf("\n");
	tab[0] = "Jambon";
	tab[1] = "Kambon";
	i = -1;
	while (tab[++i])
		printf("%s ", tab[i]);
	printf("\n");
	ft_sort_string_tab(tab);
	i = -1;
	while (tab[++i])
		printf("%s ", tab[i]);
	printf("\n");
	tab[0] = "Jambon";
	tab[1] = "Jambom";
	printf("%s %s", tab[1], tab[0]);
	printf("\n");
	ft_sort_string_tab(tab);
	i = -1;
	while (tab[++i])
		printf("%s ", tab[i]);
	printf("\n");
	tab[0] = "Jambon";
	tab[1] = "Jamboo";
	i = -1;
	while (tab[++i])
		printf("%s ", tab[i]);
	printf("\n");
	ft_sort_string_tab(tab);
	i = -1;
	while (tab[++i])
		printf("%s ", tab[i]);
	printf("\n");
	tab[0] = "Jambon";
	tab[1] = "Jambonn";
	i = -1;
	while (tab[++i])
		printf("%s ", tab[i]);
	printf("\n");
	ft_sort_string_tab(tab);
	i = -1;
	while (tab[++i])
		printf("%s ", tab[i]);
	printf("\n");
	tab[0] = "Jambon";
	tab[1] = "Jambo";
	printf("%s %s", tab[1], tab[0]);
	printf("\n");
	ft_sort_string_tab(tab);
	i = -1;
	while (tab[++i])
		printf("%s ", tab[i]);
	printf("\n");
	tab[2] = "feur";
	tab[3] = "AH!!";
	tab[4] = "Zouiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii";
	tab[5] = "C'est NON";
	tab[6] = "C'est NON";
	tab[7] = "feur";
	tab[8] = NULL;
	printf("%s %s %s %s %s %s %s %s", tab[3], tab[5], tab[6], tab[0], tab[1], tab[4], tab[7], tab[2]);
	printf("\n");
	ft_sort_string_tab(tab);
	i = -1;
	while (tab[++i])
		printf("%s ", tab[i]);
	printf("\n");
	//ft_sort_string_tab should not crash
	ft_sort_string_tab(NULL);

	//ex07
	printf("\n\nft_advanced_sort_string_tab tests\n");
	void ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *));
	tab[0] = NULL;
	tab[1] = "Jambon";
	i = -1;
	while (tab[++i])
		printf("%s ", tab[i]);
	printf("\n");
	ft_advanced_sort_string_tab(tab, &ex07);
	i = -1;
	while (tab[++i])
		printf("%s ", tab[i]);
	printf("\n");
	tab[0] = tab[1];
	tab[1] = NULL;
	i = -1;
	while (tab[++i])
		printf("%s ", tab[i]);
	printf("\n");
	ft_advanced_sort_string_tab(tab, &ex07);
	i = -1;
	while (tab[++i])
		printf("%s ", tab[i]);
	printf("\n");
	tab[1] = "Iambon";
	tab[2] = NULL;
	printf("%s %s", tab[0], tab[1]);
	printf("\n");
	ft_advanced_sort_string_tab(tab, &ex07);
	i = -1;
	while (tab[++i])
		printf("%s ", tab[i]);
	printf("\n");
	tab[0] = "Jambon";
	tab[1] = "oui";
	printf("%s %s\n", tab[1], tab[0]);
	ft_advanced_sort_string_tab(tab, &ex07);
	i = -1;
	while (tab[++i])
		printf("%s ", tab[i]);
	printf("\n");
	printf("%s %s\n", tab[0], tab[1]);
	ft_advanced_sort_string_tab(tab, &ex07);
	i = -1;
	while (tab[++i])
		printf("%s ", tab[i]);
	tab[0] = "Zouiiiiiiiiiiiiii";
	tab[1] = "a";
	tab[2] = "LUKE";
	tab[3] = "J'ESSUYE";
	tab[4] = "CLAIREMENT";
	tab[5] = "TON PERE";
	tab[6] = "NON!";
	tab[7] = "ALED";
	tab[8] = NULL;
	printf("\n%s %s %s %s %s %s %s %s\n", tab[1], tab[2], tab[6], tab[7], tab[3], tab[5], tab[4], tab[0]);
	ft_advanced_sort_string_tab(tab, &ex07);
	i = -1;
	while (tab[++i])
		printf("%s ", tab[i]);
	tab[0] = "rohhh";
	tab[1] = "a";
	tab[2] = "LUKE";
	tab[3] = "J'ESSUYE";
	tab[4] = "CLAIREMENT";
	tab[5] = "TON PERE";
	tab[6] = "NON!";
	tab[7] = "ALED";
	tab[8] = NULL;
	printf("\n%s %s %s %s %s %s %s %s\n", tab[1], tab[2], tab[6], tab[7], tab[0], tab[3], tab[5], tab[4]);
	ft_advanced_sort_string_tab(tab, &ex07);
	i = -1;
	while (tab[++i])
		printf("%s ", tab[i]);
	printf("\n");
	char	*oui[] = {"Ed1fQk", "t", "ZNUd1Jaeb", "ix", "4exWtoRE1I",
		"1JcQ7W02DGCF", "x1", "szp4MYU176ZT", "qt6V", "QbU", "RwOKPj",
			"43r", "0", "yCTpo5n", "patAG", "m5G", NULL};
	printf("t 0 ix x1 QbU 43r m5G qt6V patAG Ed1fQk RwOKPj yCTpo5n ZNUd1Jaeb 4exWtoRE1I 1JcQ7W02DGCF szp4MYU176ZT\n");
	ft_advanced_sort_string_tab(oui, &ex07);
	i = -1;
	while (oui[++i])
		printf("%s ", oui[i]);
	printf("\n");
}
