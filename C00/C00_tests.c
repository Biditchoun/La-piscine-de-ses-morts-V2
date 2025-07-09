/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C00_tests.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 12:53:56 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/09 17:20:17 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	main()
{
	//ex00
	void ft_putchar(char c);
	char *s = "Jambonfromagequiroule";
	printf("Putchar tests\nOutput wanted :\n%s\nOutput gotten :\n", s);
	int i = -1;
	while (s[++i])
		ft_putchar(s[i]);
	//ex01
	void ft_print_alphabet(void);
	s = "abcdefghijklmnopqrstuvwxyz";
	printf("\n\n\nPrintf_alphabet test\nOutput wanted :\n%s\nOutput gotten :\n", s);
	ft_print_alphabet();
	//ex02
	void ft_print_reverse_alphabet(void);
	s = "zyxwvutsrqponmlkjihgfedbca";
	printf("\n\n\nPrintf_reverse_alphabet test\nOutput wanted :\n%s\nOutput gotten :\n", s);
	ft_print_reverse_alphabet();
	//ex03
	void ft_print_numbers(void);
	s = "0123456789";
	printf("\n\n\nft_print_numbers test\nOutput wanted :\n%s\nOutput gotten :\n", s);
	ft_print_numbers();
	//ex04
	void ft_is_negative(int n);
	int a = INT_MIN;
	int b = -1;
	int c = 0;
	int d = 1;
	int e = INT_MAX;
	printf("\n\n\nft_is_negative tests\n");
	ft_is_negative(a);
	printf(" N %i\n", a);
	ft_is_negative(b);
	printf(" N %i\n", b);
	ft_is_negative(c);
	printf(" P %i\n", c);
	ft_is_negative(d);
	printf(" P %i\n", d);
	ft_is_negative(e);
	printf(" P %i\n", e);
	//ex05
	void ft_print_comb(void);
	s = "012, 013, 014, 015, 016, 017, 018, 019, 023, 024, [...], 089, 123, 124, [...], 589, 678, 679, 689, 789";
	printf("\n\nft_print_cmb test\nExpected ouput :\n%s\nGotten ouput :\n", s);
	ft_print_comb();
	//ex06
	void ft_print_comb2(void);
	s = "00 01, 00 02, 00 03, [...], 00 09, 00 10, 00 11, [...], 00 99, 01 02, 01 03, [...], 09 99, 10 11, 10 12, [...], 96 98, 96 99, 97 98, 97 99, 98 99";
	printf("\n\n\nft_print_comb2 test\nExpected output :\n%s\nGotten output :\n", s);
	ft_print_comb2();
	//ex07
	void ft_putnbr(int nb);
	a = INT_MIN;
	b = INT_MIN+1;
	c = -10000;
	d = -1001;
	e = -999;
	int f = -42;
	int g = -1;
	int h = 0;
	i = 1;
	int j = 43;
	int k = 9999;
	int l = 1000000;
	int m = 1000000001;
	int n = INT_MAX;
	int o = 15;
	int p = 888;
	int q = 987654;
	int r = 666666666;
	printf("\n\n\nft_putnbr_tests\n");
	ft_putnbr(a);
	printf(" %i\n", a);
	ft_putnbr(b);
	printf(" %i\n", b);
	ft_putnbr(c);
	printf(" %i\n", c);
	ft_putnbr(d);
	printf(" %i\n", d);
	ft_putnbr(e);
	printf(" %i\n", e);
	ft_putnbr(f);
	printf(" %i\n", f);
	ft_putnbr(g);
	printf(" %i\n", g);
	ft_putnbr(h);
	printf(" %i\n", h);
	ft_putnbr(i);
	printf(" %i\n", i);
	ft_putnbr(j);
	printf(" %i\n", j);
	ft_putnbr(k);
	printf(" %i\n", k);
	ft_putnbr(l);
	printf(" %i\n", l);
	ft_putnbr(m);
	printf(" %i\n", m);
	ft_putnbr(n);
	printf(" %i\n", n);
	ft_putnbr(o);
	printf(" %i\n", o);
	ft_putnbr(p);
	printf(" %i\n", p);
	ft_putnbr(q);
	printf(" %i\n", q);
	ft_putnbr(r);
	printf(" %i\n", r);
	//ex08
	void ft_print_combn(int n);
	s = "0, 1, 2, 3, 4, 5, 6, 7, 8, 9";
	char *ss = "01, 02, [...], 09, 12, 13, [...], 78, 79, 89";
	char *sss = "01234567, 01234568, [...], 02456789, 03456789, 12345678, [...], 13456789, 23456789";
	char *ssss = "012345678, 012345679, 012345689, [...], 023456789, 123456789";
	printf("\n\nft_print_combn tests\nExpected output :\n%s\nGotten output :\n", s);
	ft_print_combn(1);
	printf("\nExpected output :\n%s\nGotten output :\n", ss);
	ft_print_combn(2);
	printf("\nExpected output :\n%s\nGotten output :\n", sss);
	ft_print_combn(8);
	printf("\nExpected output :\n%s\nGotten output :\n", ssss);
	ft_print_combn(9);
}	
