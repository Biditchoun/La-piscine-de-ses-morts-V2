/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C07_tests.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 21:34:01 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/24 20:03:17 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <limits.h>
#include <unistd.h>

int	main()
{
	char *p1 ,*p11;
	char *s1 = "";
	char *s2 = "Jambonfromagequiroule";
	char *s3 = "PAF";
	char *s4 = "_";

	//ex00
	char *ft_strdup(char *src);
	printf("ft_strdup tests\n");
	p1 = strdup(s2);
	p11 = ft_strdup(s2);
	printf("%s\n%s\n", p1, p11);
	free(p1);
	free(p11);
	p1 = strdup(s3);
	p11 = ft_strdup(s3);
	printf("%s\n%s\n", p1, p11);
	free(p1);
	free(p11);
	p1 = strdup(s4);
	p11 = ft_strdup(s4);
	printf("%s\n%s\n", p1, p11);
	free(p1);
	free(p11);
	p1 = strdup(s1);
	p11 = ft_strdup(s1);
	printf("%s\n%s\n", p1, p11);
	free(p1);
	free(p11);
	//ft_strdup should crash
	//ft_strdup(NULL);

	//ex01
	int *ft_range(int min, int max);
	int i, i2, j, *p2;
	printf("ft_range tests\n");
	i = i2 = 0;
	j = 1;
	p2 = ft_range(i, j);
	while (i < j)
		printf("%i ", i++);
	printf("\n");
	i = -1;
	while (++i < j - i2)
		printf("%i ", p2[i]);
	free(p2);
	printf("\n");
	i = i2 = 3;
	j = 12;
	p2 = ft_range(i, j);
	while (i < j)
		printf("%i ", i++);
	printf("\n");
	i = -1;
	while (++i < j - i2)
		printf("%i ", p2[i]);
	free(p2);
	printf("\n");
	i = i2 = INT_MIN;
	j = INT_MIN + 6;
	p2 = ft_range(i, j);
	while (i < j)
		printf("%i ", i++);
	printf("\n");
	i = -1;
	while (++i < j - i2)
		printf("%i ", p2[i]);
	free(p2);
	printf("\n");
	i = i2 = -8;
	j = 1;
	p2 = ft_range(i, j);
	while (i < j)
		printf("%i ", i++);
	printf("\n");
	i = -1;
	while (++i < j - i2)
		printf("%i ", p2[i]);
	free(p2);
	printf("\n");
	i = i2 = 0;
	j = 0;
	p2 = ft_range(i, j);
	while (i < j)
		printf("%i ", i++);
	printf("\n");
	i = -1;
	while (++i < j - i2)
		printf("%i ", p2[i]);
	free(p2);
	printf("\n");
	i = i2 = 19;
	j = 18;
	p2 = ft_range(i, j);
	while (i < j)
		printf("%i ", i++);
	printf("\n");
	i = -1;
	while (++i < j - i2)
		printf("%i ", p2[i]);
	free(p2);
	printf("\n");
	i = i2 = -4;
	j = -5;
	p2 = ft_range(i, j);
	while (i < j)
		printf("%i ", i++);
	printf("\n");
	i = -1;
	while (++i < j - i2)
		printf("%i ", p2[i]);
	free(p2);
	printf("\n");
	i = i2 = INT_MAX - 3;
	j = INT_MAX;
	p2 = ft_range(i, j);
	while (i < j)
		printf("%i ", i++);
	printf("\n");
	i = -1;
	while (++i < j - i2)
		printf("%i ", p2[i]);
	free(p2);
	printf("\n");
	i = i2 = 1;
	j = 0;
	p2 = ft_range(i, j);
	while (i < j)
		printf("%i ", i++);
	printf("\n");
	i = -1;
	while (++i < j - i2)
		printf("%i ", p2[i]);
	free(p2);
	printf("\n");

	//ex02
	int ft_ultimate_range(int **range, int min, int max);	
	int *tab[1], rt, k;
	printf("ft_ultimate_range tests\n");
	tab[0] = p2;
	i = i2 = 0;
	j = 1;
	k = -1;
	rt = ft_ultimate_range(tab, i, j);
	while (i + ++k < j)
		printf("%i ", i + k);
	printf("| %i\n", k);
	i = 0;
	while (i < j - i2)
		printf("%i ", tab[0][i++]);
	free(tab[0]);
	printf("| %i\n", rt);
	tab[0] = p2;
	i = i2 = 3;
	j = 12;
	k = -1;
	rt = ft_ultimate_range(tab, i, j);
	while (i + ++k < j)
		printf("%i ", i + k);
	printf("| %i\n", k);
	i = 0;
	while (i < j - i2)
		printf("%i ", tab[0][i++]);
	free(tab[0]);
	printf("| %i\n", rt);
	tab[0] = p2;
	i = i2 = INT_MIN;
	j = INT_MIN + 6;
	k = -1;
	rt = ft_ultimate_range(tab, i, j);
	while (i + ++k < j)
		printf("%i ", i + k);
	printf("| %i\n", k);
	i = 0;
	while (i < j - i2)
		printf("%i ", tab[0][i++]);
	free(tab[0]);
	printf("| %i\n", rt);
	tab[0] = p2;
	i = i2 = -8;
	j = 1;
	k = -1;
	rt = ft_ultimate_range(tab, i, j);
	while (i + ++k < j)
		printf("%i ", i + k);
	printf("| %i\n", k);
	i = 0;
	while (i < j - i2)
		printf("%i ", tab[0][i++]);
	free(tab[0]);
	printf("| %i\n", rt);
	tab[0] = p2;
	i = i2 = 0;
	j = 0;
	rt = ft_ultimate_range(tab, i, j);
	printf("%p | %i\n", NULL, 0);
	printf("%p | %i\n", tab[0], rt);
	tab[0] = p2;
	i = i2 = 19;
	j = 18;
	rt = ft_ultimate_range(tab, i, j);
	printf("%p | %i\n", NULL, 0);
	printf("%p | %i\n", tab[0], rt);
	tab[0] = p2;
	i = i2 = -4;
	j = -5;
	rt = ft_ultimate_range(tab, i, j);
	printf("%p | %i\n", NULL, 0);
	printf("%p | %i\n", tab[0], rt);
	tab[0] = p2;
	i = i2 = INT_MAX - 3;
	j = INT_MAX;
	k = -1;
	rt = ft_ultimate_range(tab, i, j);
	while (i + ++k < j)
		printf("%i ", i + k);
	printf("| %i\n", k);
	i = 0;
	while (i < j - i2)
		printf("%i ", tab[0][i++]);
	free(tab[0]);
	printf("| %i\n", rt);
	i = i2 = 1;
	j = 0;
	rt = ft_ultimate_range(tab, i, j);
	printf("%p | %i\n", NULL, 0);
	printf("%p | %i\n", tab[0], rt);
	//ft_ultimate_range should not crash.
	ft_ultimate_range(NULL , -1, 1);

	//ex03
	char *ft_strjoin(int size, char **strs, char *sep);
	printf("\n\nft_strjoin tests\n");
	char *ppt[20];
	char *s5 = "wouiiiiiiii";
	char *s6 = "mais";
	char *s7 = "t'avais";
	char *s8 = "dit";
	char *s9 = "qu'il";
	char *s10 = "y";
	char *s11 = "aurait";
	char *s12 = "des";
	char *s13 = "knackis";
	char *s14 = "D:";
	ppt[0] = s1;
	ppt[1] = s2;
	ppt[2] = s3;
	ppt[3] = s4;
	ppt[4] = s5;
	ppt[5] = s6;
	ppt[6] = s7;
	ppt[7] = s8;
	ppt[8] = s9;
	ppt[9] = s10;
	ppt[10] = s11;
	ppt[11] = s12;
	ppt[12] = s13;
	ppt[13] = s14;
	ppt[14] = s14;
	ppt[15] = s14;
	ppt[16] = s14;
	ppt[17] = s14;
	ppt[18] = s14;
	p1 = ft_strjoin(0, ppt, s4);
	printf("%s\n%s\n", "", p1);
	free(p1);
	j = 1;
	p1 = ft_strjoin(j, ppt, s4);
	i = -1;
	while (++i < j)
	{
		printf("%s", ppt[i]);
		if (i + 1 != j)
			printf("%s", s4);
	}
	printf("\n%s\n", p1);
	free(p1);
	j = 14;
	p1 = ft_strjoin(j, ppt, s4);
	i = -1;
	while (++i < j)
	{
		printf("%s", ppt[i]);
		if (i + 1 != j)
			printf("%s", s4);
	}
	printf("\n%s\n", p1);
	free(p1);
	j = 19;
	s4 = " ";
	p1 = ft_strjoin(j, ppt, s4);
	i = -1;
	while (++i < j)
	{
		printf("%s", ppt[i]);
		if (i + 1 != j)
			printf("%s", s4);
	}
	printf("\n%s\n", p1);
	free(p1);
	ppt[0] = "";
	ppt[1] = "";
	j = 10;
	s4 = " |_| ";
	p1 = ft_strjoin(j, ppt, s4);
	i = -1;
	while (++i < j)
	{
		printf("%s", ppt[i]);
		if (i + 1 != j)
			printf("%s", s4);
	}
	printf("\n%s\n", p1);
	free(p1);
	j = 2;
	s4 = "rab";
	p1 = ft_strjoin(j, ppt, s4);
	i = -1;
	while (++i < j)
	{
		printf("%s", ppt[i]);
		if (i + 1 != j)
			printf("%s", s4);
	}
	printf("\n%s\n", p1);
	free(p1);
	//ft_strjoin should not crash
	ft_strjoin(-3, ppt, s4);
	ft_strjoin(-3, NULL, s4);
	ft_strjoin(-3, ppt, NULL);
	ft_strjoin(-3, NULL, NULL);
	ft_strjoin(3, NULL, s4);
	ft_strjoin(3, ppt, NULL);
	ft_strjoin(3, NULL, NULL);

	//ex04
	char *ft_convert_base(char *nbr, char *base_from, char *base_to);
	printf("\n\nft_convert_base tests\n");
	s1 = NULL;
	p1 = ft_convert_base("25", "", "123");
	char *p3 = ft_convert_base("aa", "a", "123");
	char *p4 = ft_convert_base("||", "||", "123");
	char *p5 = ft_convert_base("25", "0123456789-", "123");
	char *p6 = ft_convert_base("25", "+0123456789", "123");
	char *p7 = ft_convert_base("c", "aabcdefgh", "123");
	char *p18 = ft_convert_base("c", "abcdefghh", "123");
	char *p19 = ft_convert_base("c", "abcdeffgh", "123");
	char *p8 = ft_convert_base("c", "abcdefa", "123");
	char *p9 = ft_convert_base("c", "abcdaefg", "123");
	char *p10 = ft_convert_base("c", "abcdefga", "123");
	p11 = ft_convert_base("c", "bcdeafga", "123");
	char *p12 = ft_convert_base("c", " abcdef", "123");
	char *p13 = ft_convert_base("c", "abcdef\n", "123");
	char *p14 = ft_convert_base("c", "abc\vdef", "123");
	char *p15 = ft_convert_base("c", "abcde\rf", "123");
	char *p16 = ft_convert_base("c", "abcd\fef", "123");
	char *p17 = ft_convert_base("c", "a\tbcdef", "123");
	printf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n", s1, s1, s1, s1, s1, s1, s1, s1, s1, s1, s1, s1, s1, s1, s1, s1, s1, s1, p1, p3, p4, p5, p6, p7, p18, p19, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17);
	free(p1);
	free(p3);
	free(p4);
	free(p5);
	free(p6);
	free(p7);
	free(p8);
	free(p9);
	free(p10);
	free(p11);
	free(p12);
	free(p13);
	free(p14);
	free(p15);
	free(p16);
	free(p17);
	free(p18);
	free(p19);
	p1 = ft_convert_base("25", "123", "");
	p3 = ft_convert_base("aa", "bac", "a");
	p4 = ft_convert_base("||", "|_/", "||");
	p5 = ft_convert_base("25", "98765421", "0123456789-");
	p6 = ft_convert_base("25", "98765421", "+0123456789");
	p7 = ft_convert_base("c", "abc", "aabcdefgh");
	p18 = ft_convert_base("c", "abc", "abcdefghh");
	p19 = ft_convert_base("c", "abc", "abcdeffgh");
	p8 = ft_convert_base("c", "abc", "abcdefa");
	p9 = ft_convert_base("c", "abc", "abcdaefg");
	p10 = ft_convert_base("c", "abc", "abcdefga");
	p11 = ft_convert_base("c", "abc", "bcdeafga");
	p12 = ft_convert_base("c", "abc", " abcdef");
	p13 = ft_convert_base("c", "abc", "abcdef\n");
	p14 = ft_convert_base("c", "abc", "abc\vdef");
	p15 = ft_convert_base("c", "abc", "abcde\rf");
	p16 = ft_convert_base("c", "abc", "abcd\fef");
	p17 = ft_convert_base("c", "abc", "a\tbcdef");
	printf("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n", s1, s1, s1, s1, s1, s1, s1, s1, s1, s1, s1, s1, s1, s1, s1, s1, s1, s1, p1, p3, p4, p5, p6, p7, p18, p19, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17);
	free(p1);
	free(p3);
	free(p4);
	free(p5);
	free(p6);
	free(p7);
	free(p8);
	free(p9);
	free(p10);
	free(p11);
	free(p12);
	free(p13);
	free(p14);
	free(p15);
	free(p16);
	free(p17);
	free(p18);
	free(p19);
	p1 = ft_convert_base("-80000000", "0bcdefgh8jklmnop", "0123456789");
	p3 = ft_convert_base("bab", "ab", "0123456789");
	p4 = ft_convert_base("ca", "abcdefghijklmn", "0123456");
	p5 = ft_convert_base("-2147483648", "0123456789", "9876543210");
	p6 = ft_convert_base("-2147483647", "0123456789", "9876543210");
	p7 = ft_convert_base("-10000", "0123456789", "9876543210");
	p8 = ft_convert_base("-1001", "0123456789", "9876543210");
	p9 = ft_convert_base("-999", "0123456789", "9876543210");
	p10 = ft_convert_base("-42", "0123456789", "9876543210");
	p11 = ft_convert_base("-1", "0123456789", "9876543210");
	p12 = ft_convert_base("0", "0123456789", "9876543210");
	p13 = ft_convert_base("1", "0123456789", "9876543210");
	printf("-2147483648 5 40 -7852516351 -7852516352 -89999 -8998 -000 -57 -8 9 8\n%s %s %s %s %s %s %s %s %s %s %s %s\n", p1, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13);
	free(p1);
	free(p3);
	free(p4);
	free(p5);
	free(p6);
	free(p7);
	free(p8);
	free(p9);
	free(p10);
	free(p11);
	free(p12);
	free(p13);
	p1 = ft_convert_base(" -+-43", "0123456789", "9876543210");
	p3 = ft_convert_base("\f+-+-9999", "0123456789", "9876543210");
	p4 = ft_convert_base("\n+++1000000 1", "0123456789", "9876543210");
	p5 = ft_convert_base("\r------+--+++---+-1000000001\t3", "0123456789", "9876543210");
	p6 = ft_convert_base("\t2147483647\f1", "0123456789", "9876543210");
	p7 = ft_convert_base("\v+15\r0", "0123456789", "9876543210");
	p8 = ft_convert_base("  \f 888\n7", "0123456789", "9876543210");
	p9 = ft_convert_base("   \r \v 987654\f6", "0123456789", "9876543210");
	p10 = ft_convert_base("\f\n\r\t\v 666666666+6", "0123456789", "9876543210");
	p11 = ft_convert_base("\t\f \v\n\r--5-3", "0123456789", "ab");
	p12 = ft_convert_base("----24 9", "0123456789", "abcdefghijkl");
	p13 = ft_convert_base("-----2147483648a", "0123456789", "01234567|9abcdef");
	printf("56 0000 8999999 8999999998 7852516352 84 111 012345 333333333 bab ca -|0000000\n%s %s %s %s %s %s %s %s %s %s %s %s\n", p1, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13);
	free(p1);
	free(p2);
	free(p3);
	free(p4);
	free(p5);
	free(p6);
	free(p7);
	free(p8);
	free(p9);
	free(p10);
	free(p11);
	free(p12);
	free(p13);
	p1 = ft_convert_base("+ 43", "0123456789", "9876543210");
	p3 = ft_convert_base("-\t9999", "0123456789", "9876543210");
	p4 = ft_convert_base("+-+\v1000000", "0123456789", "9876543210");
	p5 = ft_convert_base("+++++\f1000000001", "0123456789", "9876543210");
	p6 = ft_convert_base("---\n2147483647", "0123456789", "9876543210");
	p7 = ft_convert_base("--\r15", "0123456789", "9876543210");
	p8 = ft_convert_base("-+++-\t888", "0123456789", "9876543210");
	p9 = ft_convert_base("-+-\f+-+-+987654", "0123456789", "9876543210");
	p10 = ft_convert_base("-+-+-+++++\v+-++666666666", "0123456789", "9876543210");
	p11 = ft_convert_base("---\n5", "0123456789", "ab");
	p12 = ft_convert_base("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r-24", "0123456789", "abcdefghijkl");
	p13 = ft_convert_base("-- -2147483648", "0123456789", "0123456789abcdef");
	printf("9 9 9 9 9 9 9 9 9 a a 0\n%s %s %s %s %s %s %s %s %s %s %s %s\n", p1, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13);
	free(p1);
	free(p2);
	free(p3);
	free(p4);
	free(p5);
	free(p6);
	free(p7);
	free(p8);
	free(p9);
	free(p10);
	free(p11);
	free(p12);
	free(p13);
	//ft_convert_base should not crash
	ft_convert_base(NULL, "9876543210", "0123456789");
	ft_convert_base(NULL, NULL, "0123456789");
	ft_convert_base(NULL, "9876543210", NULL);
	ft_convert_base(NULL, NULL, NULL);
	ft_convert_base("0", "9876543210", "0123456789");
	ft_convert_base("0", NULL, "0123456789");
	ft_convert_base("0", "9876543210", NULL);

	//ex05
	char **ft_split(char *str, char *charset);
	printf("\n\nft_split tests\n");
	char **oui;
	s11 = NULL;
	s1 = "";
	oui = ft_split(s1, " ");
	printf("%s \n", s11);
	i = -1;
	while (oui[++i])
		printf("%s ", oui[i]);
	printf("%s \n", oui[i]);
	i = -1;
	while (oui[++i])
		free(oui[i]);
	free(oui[i]);
	free(oui);
	s1 = "feur";
	oui = ft_split(s1, "");
	printf("feur %s \n", s11);
	i = -1;
	while (oui[++i])
		printf("%s ", oui[i]);
	printf("%s \n", oui[i]);
	i = -1;
	while (oui[++i])
		free(oui[i]);
	free(oui[i]);
	free(oui);
	s1 = "";
	oui = ft_split(s1, "");
	printf("%s \n", s11);
	i = -1;
	while (oui[++i])
		printf("%s ", oui[i]);
	printf("%s \n", oui[i]);
	i = -1;
	while (oui[++i])
		free(oui[i]);
	free(oui[i]);
	free(oui);
	s1 = "feur";
	oui = ft_split(s1, " ");
	printf("feur %s \n", s11);
	i = -1;
	while (oui[++i])
		printf("%s ", oui[i]);
	printf("%s \n", oui[i]);
	i = -1;
	while (oui[++i])
		free(oui[i]);
	free(oui[i]);
	free(oui);
	s1 = "feur";
	oui = ft_split(s1, "| ");
	printf("feur %s \n", s11);
	i = -1;
	while (oui[++i])
		printf("%s ", oui[i]);
	printf("%s \n", oui[i]);
	i = -1;
	while (oui[++i])
		free(oui[i]);
	free(oui[i]);
	free(oui);
	s1 = "feur";
	oui = ft_split(s1, "e");
	printf("f ur %s \n", s11);
	i = -1;
	while (oui[++i])
		printf("%s ", oui[i]);
	printf("%s \n", oui[i]);
	i = -1;
	while (oui[++i])
		free(oui[i]);
	free(oui[i]);
	free(oui);
	s1 = "feur";
	oui = ft_split(s1, "f");
	printf("eur %s \n", s11);
	i = -1;
	while (oui[++i])
		printf("%s ", oui[i]);
	printf("%s \n", oui[i]);
	i = -1;
	while (oui[++i])
		free(oui[i]);
	free(oui[i]);
	free(oui);
	s1 = "feur";
	oui = ft_split(s1, "r");
	printf("feu %s \n", s11);
	i = -1;
	while (oui[++i])
		printf("%s ", oui[i]);
	printf("%s \n", oui[i]);
	i = -1;
	while (oui[++i])
		free(oui[i]);
	free(oui[i]);
	free(oui);
	s1 = "feur";
	oui = ft_split(s1, "uee");
	printf("f r %s \n", s11);
	i = -1;
	while (oui[++i])
		printf("%s ", oui[i]);
	printf("%s \n", oui[i]);
	i = -1;
	while (oui[++i])
		free(oui[i]);
	free(oui[i]);
	free(oui);
	s1 = "feur";
	oui = ft_split(s1, "rff");
	printf("eu %s \n", s11);
	i = -1;
	while (oui[++i])
		printf("%s ", oui[i]);
	printf("%s \n", oui[i]);
	i = -1;
	while (oui[++i])
		free(oui[i]);
	free(oui[i]);
	free(oui);
	s1 = "feur";
	oui = ft_split(s1, "fuu");
	printf("e r %s \n", s11);
	i = -1;
	while (oui[++i])
		printf("%s ", oui[i]);
	printf("%s \n", oui[i]);
	i = -1;
	while (oui[++i])
		free(oui[i]);
	free(oui[i]);
	free(oui);
	s1 = "feur";
	oui = ft_split(s1, "rer");
	printf("f u %s \n", s11);
	i = -1;
	while (oui[++i])
		printf("%s ", oui[i]);
	printf("%s \n", oui[i]);
	i = -1;
	while (oui[++i])
		free(oui[i]);
	free(oui[i]);
	free(oui);
	s1 = "Jambonfromagequiroulevraiment";
	oui = ft_split(s1, "a");
	printf("J mbonfrom gequiroulevr iment %s \n", s11);
	i = -1;
	while (oui[++i])
		printf("%s ", oui[i]);
	printf("%s \n", oui[i]);
	i = -1;
	while (oui[++i])
		free(oui[i]);
	free(oui[i]);
	free(oui);
	s1 = "Jambonfromagequiroulevraiment";
	oui = ft_split(s1, "Jambon");
	printf("fr gequir ulevr i e t %s \n", s11);
	i = -1;
	while (oui[++i])
		printf("%s ", oui[i]);
	printf("%s \n", oui[i]);
	i = -1;
	while (oui[++i])
		free(oui[i]);
	free(oui[i]);
	free(oui);
	s1 = NULL;
	oui = ft_split(s1, " ");
	printf("%s \n", s11);
	i = -1;
	while (oui[++i])
		printf("%s ", oui[i]);
	printf("%s \n", oui[i]);
	i = -1;
	while (oui[++i])
		free(oui[i]);
	free(oui[i]);
	free(oui);
	s1 = NULL;
	oui = ft_split(s1, NULL);
	printf("%s \n", s11);
	i = -1;
	while (oui[++i])
		printf("%s ", oui[i]);
	printf("%s \n", oui[i]);
	i = -1;
	while (oui[++i])
		free(oui[i]);
	free(oui[i]);
	free(oui);
	s1 = "Jambonfromagequiroulevraiment";
	oui = ft_split(s1, NULL);
	printf("Jambonfromagequiroulevraiment %s \n", s11);
	i = -1;
	while (oui[++i])
		printf("%s ", oui[i]);
	printf("%s \n", oui[i]);
	i = -1;
	while (oui[++i])
		free(oui[i]);
	free(oui[i]);
	free(oui);
}
