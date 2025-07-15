/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C04_tests.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 20:19:06 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/15 15:48:16 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
	//ex00
	int ft_strlen(char *str);
	char s1[100] = "";
	char s2[100] = " ";
	char s3[100] = "Il y avait une histoire de jambon fromage roulants";
	printf("ft_strlen tests\nExpected output :\n%lu %lu %lu\nGotten output :\n%i %i %i\n", strlen(s1), strlen(s2), strlen(s3), ft_strlen(s1), ft_strlen(s2), ft_strlen(s3));
	//ft_strlen should not crash
//	printf("%u\n", ft_strlen(NULL));

	//ex01
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
	//ft_putstr should not crash
//	ft_putstr(NULL);

	//ex02
	void ft_putnbr(int nb);
	int a = INT_MIN;
	int b = INT_MIN+1;
	int c = -10000;
	int d = -1001;
	int e = -999;
	int f = -42;
	int g = -1;
	int h = 0;
	int i = 1;
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

	//ex03
	int ft_atoi(char *str);
	printf("\n\nft_atoi tests\n");
	strcpy(s1, "");
	strcpy(s2, "  \v 45 7");
	strcpy(s3, "\f 457 ");
	char s4[100] = " \n -020/5";
	char s5[100] = "    \r +038:5";
	char s6[100] = "\n\v\r\f\t--02000/5";
	char s7[100] = "++-00069/5";
	char s8[100] = "+++-0086/5";
	char s9[100] = "+-+-+-+0000000000000000000000000444/5";
	char s10[100] = "+++-00123/5";
	char s11[100] = "+++-002222222/9";
	char s12[100] = "----------1010101/0";
	char s13[100] = "+\n++-002222222/5";
	char s14[100] = "+++-\r002222222/5";
	char s15[100] = "+++-\v002222222/5";
	char s16[100] = "+++- 00\f2222222/5";
	char s17[100] = "+++- 0022\t22222/5";
	printf("Expexted output :\n0 45 457 -20 38 2000 -69 -86 -444 -123 -2222222 1010101 0 0 0 0 0\nGotten output :\n%i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i\n", ft_atoi(s1), ft_atoi(s2), ft_atoi(s3), ft_atoi(s4), ft_atoi(s5), ft_atoi(s6), ft_atoi(s7), ft_atoi(s8), ft_atoi(s9), ft_atoi(s10), ft_atoi(s11), ft_atoi(s12), ft_atoi(s13), ft_atoi(s14), ft_atoi(s15), ft_atoi(s16), ft_atoi(s17));
}
