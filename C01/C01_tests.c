/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C01_tests.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:42:14 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/10 15:33:53 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main()
{
	//ex00
	void ft_ft(int *nbr);
	int a = INT_MIN;
	int b = -1;
	int c = 0;
	int d = 42;
	int e = INT_MAX;
	ft_ft(&a);
	ft_ft(&b);
	ft_ft(&c);
	ft_ft(&d);
	ft_ft(&e);
	printf("ft_ft tests\nExpected ouput :\n42 42 42 42 42\nGotten output :\n%i %i %i %i %i\n", a, b, c, d, e);
	//null ?
	printf("Null test :\n");
	ft_ft(NULL);
	printf("Valid\n");
	//ex01
	printf("\n\nft_ultimate_ft tests\n");
	void ft_ultimate_ft(int *********nbr);
	a = INT_MIN;
	b = -1;
	c = 0;
	d = 42;
	e = INT_MAX;
	int *ptr1 = &a;
	int **ptr2 = &ptr1;
	int ***ptr3 = &ptr2;
	int ****ptr4 = &ptr3;
	int *****ptr5 = &ptr4;
	int ******ptr6 = &ptr5;
	int *******ptr7 = &ptr6;
	int ********ptr8 = &ptr7;
	int *********ptr9 = &ptr8;
	ft_ultimate_ft(ptr9);
	ptr1 = &b;
	ft_ultimate_ft(ptr9);
	ptr1 = &c;
	ft_ultimate_ft(ptr9);
	ptr1 = &d;
	ft_ultimate_ft(ptr9);
	ptr1 = &e;
	ft_ultimate_ft(ptr9);
	printf("Expected output :\n42 42 42 42 42\nGotten output :\n%i %i %i %i %i\n", a, b, c, d, e);
	//null ?
	printf("Null tests :\n");
	ptr1 = NULL;
	ft_ultimate_ft(ptr9);
	ptr2 = NULL;
	ft_ultimate_ft(ptr9);
	ptr3 = NULL;
	ft_ultimate_ft(ptr9);
	ptr4 = NULL;
	ft_ultimate_ft(ptr9);
	ptr5 = NULL;
	ft_ultimate_ft(ptr9);
	ptr6 = NULL;
	ft_ultimate_ft(ptr9);
	ptr7 = NULL;
	ft_ultimate_ft(ptr9);
	ptr8 = NULL;
	ft_ultimate_ft(ptr9);
	ft_ultimate_ft(NULL);
	printf("Valid\n");
	//ex02
	void ft_swap(int *a, int *b);
	a = INT_MIN;
	b = -1;
	c = 0;
	d = 42;
	e = INT_MAX;
	printf("\n\nft_swap tests\nExpected output :\n%i %i %i %i %i\nGotten output :\n", e, d, c, b, a);
	ft_swap(&a, &e);
	ft_swap(&b, &d);
	ft_swap(&c, &c);
	printf("%i %i %i %i %i\n", a, b, c, d, e);
	//null ?
	printf("Null tests :\n");
	ft_swap(&a, NULL);
	ft_swap(NULL, &e);
	ft_swap(NULL, NULL);
	printf("Valid\n");
	//ex03
	void ft_div_mod(int a, int b, int *div, int *mod);
	printf("\n\nft_div_mod tests\n");
	a = INT_MIN;
	b = -22;
	ft_div_mod(a, b, &c, &d);
	printf("%i %i, %i %i\n", a/b, a%b, c, d);
	a = -42;
	b = -84;
	ft_div_mod(a, b, &c, &d);
	printf("%i %i, %i %i\n", a/b, a%b, c, d);
	a = -8;
	b = -1;
	ft_div_mod(a, b, &c, &d);
	printf("%i %i, %i %i\n", a/b, a%b, c, d);
	a = -1137;
	b = 1137;
	ft_div_mod(a, b, &c, &d);
	printf("%i %i, %i %i\n", a/b, a%b, c, d);
	a = 666;
	b = -666;
	ft_div_mod(a, b, &c, &d);
	printf("%i %i, %i %i\n", a/b, a%b, c, d);
	a = 28;
	b = 29;
	ft_div_mod(a, b, &c, &d);
	printf("%i %i, %i %i\n", a/b, a%b, c, d);
	a = 31;
	b = 27;
	ft_div_mod(a, b, &c, &d);
	printf("%i %i, %i %i\n", a/b, a%b, c, d);
	a = INT_MAX;
	b = INT_MIN;
	ft_div_mod(a, b, &c, &d);
	printf("%i %i, %i %i\n", a/b, a%b, c, d);
	a = 0;
	b = -2;
	ft_div_mod(a, b, &c, &d);
	printf("%i %i, %i %i\n", a/b, a%b, c, d);
	a = 0;
	b = 29;
	ft_div_mod(a, b, &c, &d);
	printf("%i %i, %i %i\n", a/b, a%b, c, d);
	//null ?
	printf("Null and /0 tests :\n");
	ft_div_mod(-1, 0, &a, &b);
	ft_div_mod(-1, 1, NULL, &b);
	ft_div_mod(-1, 1, &a, NULL);
	ft_div_mod(-1, 0, NULL, &b);
	ft_div_mod(-1, 0, &a, NULL);
	ft_div_mod(-1, 1, NULL, NULL);
	ft_div_mod(-1, 0, NULL, NULL);
	printf("Valid\n");
	//ex04
	void ft_ultimate_div_mod(int *a, int *b);
	printf("\n\nft_ultimate_div_mod tests\n");
	a = c = INT_MIN;
	b = d = -22;
	ft_ultimate_div_mod(&c, &d);
	printf("%i %i, %i %i\n", a/b, a%b, c, d);
	a = c = -42;
	b = d = -84;
	ft_ultimate_div_mod(&c, &d);
	printf("%i %i, %i %i\n", a/b, a%b, c, d);
	a = c = -8;
	b = d = -1;
	ft_ultimate_div_mod(&c, &d);
	printf("%i %i, %i %i\n", a/b, a%b, c, d);
	a = c = -1137;
	b = d = 1137;
	ft_ultimate_div_mod(&c, &d);
	printf("%i %i, %i %i\n", a/b, a%b, c, d);
	a = c = 666;
	b = d = -666;
	ft_ultimate_div_mod(&c, &d);
	printf("%i %i, %i %i\n", a/b, a%b, c, d);
	a = c = 28;
	b = d = 29;
	ft_ultimate_div_mod(&c, &d);
	printf("%i %i, %i %i\n", a/b, a%b, c, d);
	a = c = 31;
	b = d = 27;
	ft_ultimate_div_mod(&c, &d);
	printf("%i %i, %i %i\n", a/b, a%b, c, d);
	a = c = INT_MAX;
	b = d = INT_MIN;
	ft_ultimate_div_mod(&c, &d);
	printf("%i %i, %i %i\n", a/b, a%b, c, d);
	a = c = 0;
	b = d = -2;
	ft_ultimate_div_mod(&c, &d);
	printf("%i %i, %i %i\n", a/b, a%b, c, d);
	a = c = 0;
	b = d = 29;
	ft_ultimate_div_mod(&c, &d);
	printf("%i %i, %i %i\n", a/b, a%b, c, d);
	//null ?
	printf("Null and /0 tests :\n");
	ft_ultimate_div_mod(NULL, &d);
	ft_ultimate_div_mod(&c, NULL);
	ft_ultimate_div_mod(NULL, NULL);
	d = 0;
	ft_ultimate_div_mod(&c, &d);
	ft_ultimate_div_mod(NULL, &d);
	printf("Valid\n");
	//ex05
	void ft_putstr(char *str);
	printf("\n\nft_putstr tests\n");
	char *pt1 = "E";
	char *pt2 = "";
	char *pt3 = "Jambonfromagequiroule VRAIMENT";
	char pt4[4];
	pt4[0] = '0';
	pt4[1] = 'o';
	pt4[2] = 0;
	pt4[3] = '0';
	printf("%s\n", pt1);
	ft_putstr(pt1);
	printf("\n%s\n", pt2);
	ft_putstr(pt2);
	printf("\n%s\n", pt3);
	ft_putstr(pt3);
	printf("\n%s\n", pt4);
	ft_putstr(pt4);
	//null ?
	printf("\nNull test :\n");
	ft_putstr(NULL);
	printf("Valid\n");
	//ex06
	int ft_strlen(char *str);
	printf("\n\nft_strlen tests\nExpected outputs :\n%i %i %i %i\nGotten outputs :\n%i %i %i %i\n", (int)strlen(pt1), (int)strlen(pt2), (int)strlen(pt3), (int)strlen(pt4), ft_strlen(pt1), ft_strlen(pt2), ft_strlen(pt3), ft_strlen(pt4));
	//null ?
	printf("Null test :\n");
	ft_strlen(NULL);
	printf("Valid\n");
	//ex07
	void ft_rev_int_tab(int *tab, int size);
	int tab1[0];
	int tab2[5];
	tab2[0] = 11;
	tab2[1] = 121;
	tab2[2] = 12321;
	tab2[3] = 1234321;
	tab2[4] = 123454321;
	printf("\n\nft_rev_int_tab tests\n%i\n", tab1[0]);
	ft_rev_int_tab(tab1, 0);
	printf("%i\n11\n", tab1[0]);
	ft_rev_int_tab(tab2, 0);
	printf("%i\n11 121\n", tab2[0]);
	ft_rev_int_tab(tab2, 1);
	printf("%i %i\n121 11 12321\n", tab2[0], tab2[1]);
	ft_rev_int_tab(tab2, 2);
	printf("%i %i %i\n12321 11 121 1234321\n", tab2[0], tab2[1], tab2[2]);
	ft_rev_int_tab(tab2, 3);
	printf("%i %i %i %i\n1234321 121 11 12321 123454321\n", tab2[0], tab2[1], tab2[2], tab2[3]);
	ft_rev_int_tab(tab2, 4);
	printf("%i %i %i %i %i\n123454321 12321 11 121 1234321\n", tab2[0], tab2[1], tab2[2], tab2[3], tab2[4]);
	ft_rev_int_tab(tab2, 5);
	printf("%i %i %i %i %i\n", tab2[0], tab2[1], tab2[2], tab2[3], tab2[4]);
	//null ?
	printf("Null test :\n");
	ft_rev_int_tab(NULL, 8);
	printf("Valid\n");
	//ex08
	void ft_sort_int_tab(int *tab, int size);
	tab2[0] = 123454321;
	tab2[1] = 1234321;
	tab2[2] = 12321;
	tab2[3] = 121;
	tab2[4] = 11;
	printf("\n\nft_sort_int_tab tests\n%i\n", tab1[0]);
	ft_sort_int_tab(tab1, 0);
	printf("%i\n123454321\n", tab1[0]);
	ft_sort_int_tab(tab2, 0);
	printf("%i\n123454321 1234321\n", tab2[0]);
	ft_sort_int_tab(tab2, 1);
	printf("%i %i\n1234321 123454321 12321\n", tab2[0], tab2[1]);
	ft_sort_int_tab(tab2, 2);
	printf("%i %i %i\n12321 1234321 123454321 121\n", tab2[0], tab2[1], tab2[2]);
	tab2[0] = 1234321;
	tab2[1] = 12321;
	tab2[2] = 123454321;
	ft_sort_int_tab(tab2, 3);
	printf("%i %i %i %i\n121 12321 1234321 12345421 11\n", tab2[0], tab2[1], tab2[2], tab2[3]);
	tab2[0] = 123454321;
	tab2[1] = 1234321;
	tab2[2] = 12321;
	tab2[3] = 121;
	ft_sort_int_tab(tab2, 4);
	printf("%i %i %i %i %i\n11 121 12321 1234321 123454321\n", tab2[0], tab2[1], tab2[2], tab2[3], tab2[4]);
	tab2[0] = 121;
	tab2[1] = 12321;
	tab2[2] = 123454321;
	tab2[3] = 11;
	tab2[4] = 1234321;
	ft_sort_int_tab(tab2, 5);
	printf("%i %i %i %i %i\n", tab2[0], tab2[1], tab2[2], tab2[3], tab2[4]);
	//null ?
	printf("Null test :\n");
	ft_sort_int_tab(NULL, 8);
	printf("Valid\n");
}
