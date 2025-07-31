/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C11_tests.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 22:37:08 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/30 19:57:12 by sawijnbe         ###   ########.fr       */
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
	char *tab[] = {"", "", "", NULL};
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
	
}
