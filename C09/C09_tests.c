/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C09_tests.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 20:57:33 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/29 22:08:37 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
	//ex00 && ex01
	void ft_putchar(char c);
	char *s = "Jambonfromagequiroule";
	printf("Putchar tests\n%s\n", s);
	int i = -1;
	while (s[++i])
		ft_putchar(s[i]);

	void ft_swap(int *a, int *b);
	int a = INT_MIN;
	int b = -1;
	int c = 0;
	int d = 42;
	int e = INT_MAX;
	printf("\n\nft_swap tests\n%i %i %i %i %i\n", e, d, c, b, a);
	ft_swap(&a, &e);
	ft_swap(&b, &d);
	ft_swap(&c, &c);
	printf("%i %i %i %i %i\n", a, b, c, d, e);

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

	int ft_strlen(char *str);
	printf("\n\nft_strlen tests\n%i %i %i %i\n%i %i %i %i\n", (int)strlen(pt1), (int)strlen(pt2), (int)strlen(pt3), (int)strlen(pt4), ft_strlen(pt1), ft_strlen(pt2), ft_strlen(pt3), ft_strlen(pt4));

	int	ft_strcmp(char *s1, char *s2);
	printf("\n\nft_strcmp tests\n");
	char s0[100] = "";
	char s00[100] = "";
	char ss1[100] = " ";
	char ss11[100] = " ";
	char s2[100] = "ah";
	char s22[100] = "ah";
	char s3[100] = "PAF";
	char s33[100] = "PAF";
	char s4[100] = "Jambonfromagequiroule toujours";
	char s44[100] = "Jambonfromagequiroule toujours";
	char s5[100] = "Dora";
	char s55[100] = "Dore";
	char s6[100] = "Plouf";
	char s66[100] = "Plouf!";
	char s7[100] = "  ";
	char s77[100] = " ";
	char s8[100] = "";
	char s88[100] = " ";
	printf("%i %i %i %i %i %i %i %i %i %i %i %i %i\n", strcmp(s0, s00), strcmp(ss1, ss11), strcmp(s2, s22), strcmp(s3, s33), strcmp(s4, s44), strcmp(s5, s55), strcmp(s55, s5), strcmp(s6, s66), strcmp(s66, s6), strcmp(s7, s77), strcmp(s77, s7), strcmp(s8, s88), strcmp(s88, s8));
	printf("%i %i %i %i %i %i %i %i %i %i %i %i %i\n", ft_strcmp(s0, s00), ft_strcmp(ss1, ss11), ft_strcmp(s2, s22), ft_strcmp(s3, s33), ft_strcmp(s4, s44), ft_strcmp(s5, s55), ft_strcmp(s55, s5), ft_strcmp(s6, s66), ft_strcmp(s66, s6), ft_strcmp(s7, s77), ft_strcmp(s77, s7), ft_strcmp(s8, s88), ft_strcmp(s88, s8));


	//ex02
	char **ft_split(char *str, char *charset);
	printf("\n\nft_split tests\n");
	char **oui;
	char *s11 = NULL;
	char *s1 = "";
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
