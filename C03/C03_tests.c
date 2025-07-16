/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C03_tests.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:09:55 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/16 18:32:31 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

int main()
{
	//ex00
	int	ft_strcmp(char *s1, char *s2);
	printf("ft_strcmp tests\n");
	char s0[100] = "";
	char s00[100] = "";
	char s1[100] = " ";
	char s11[100] = " ";
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
	printf("Expected output :\n%i %i %i %i %i %i %i %i %i %i %i %i %i\n", strcmp(s0, s00), strcmp(s1, s11), strcmp(s2, s22), strcmp(s3, s33), strcmp(s4, s44), strcmp(s5, s55), strcmp(s55, s5), strcmp(s6, s66), strcmp(s66, s6), strcmp(s7, s77), strcmp(s77, s7), strcmp(s8, s88), strcmp(s88, s8));
	printf("Gotten output :\n%i %i %i %i %i %i %i %i %i %i %i %i %i\n", ft_strcmp(s0, s00), ft_strcmp(s1, s11), ft_strcmp(s2, s22), ft_strcmp(s3, s33), ft_strcmp(s4, s44), ft_strcmp(s5, s55), ft_strcmp(s55, s5), ft_strcmp(s6, s66), ft_strcmp(s66, s6), ft_strcmp(s7, s77), ft_strcmp(s77, s7), ft_strcmp(s8, s88), ft_strcmp(s88, s8));
	//Crash tests
//	printf("Crash test :\n%i %i\n", strcmp(NULL, NULL), ft_strcmp(NULL, NULL));
	//ft_strcmp should crash on each individual line below
//	ft_strcmp(NULL, s1);
//	ft_strcmp(s1, NULL);
	
	//ex01
	int ft_strncmp(char *s1, char *s2, unsigned int n);
	printf("\n\nft_strncmp tests\n");
	s3[4] = 'o';
	printf("Expected output :\n%i %i %i %i %i %i %i %i %i %i %i %i %i\n", strncmp(s0, s00, 0), strncmp(s1, s11, 1), strncmp(s2, s22, 3), strncmp(s3, s33, 8), strncmp(s4, s44, 2), strncmp(s5, s55, 3), strncmp(s55, s5, 4), strncmp(s6, s66, 5), strncmp(s66, s6, 6), strncmp(s7, s77, 1), strncmp(s77, s7, 4), strncmp(s8, s88, 1), strncmp(s88, s8, 0));
	printf("Gotten output :\n%i %i %i %i %i %i %i %i %i %i %i %i %i\n", ft_strncmp(s0, s00, 0), ft_strncmp(s1, s11, 1), ft_strncmp(s2, s22, 3), ft_strncmp(s3, s33, 8), ft_strncmp(s4, s44, 2), ft_strncmp(s5, s55, 3), ft_strncmp(s55, s5, 4), ft_strncmp(s6, s66, 5), ft_strncmp(s66, s6, 6), ft_strncmp(s7, s77, 1), ft_strncmp(s77, s7, 4), ft_strncmp(s8, s88, 1), ft_strncmp(s88, s8, 0));
//	printf("Crash tests :\n%i %i\n%i %i\n", strncmp(NULL, NULL, 5), strncmp(s4, s44, -8), ft_strncmp(NULL, NULL, 5), ft_strncmp(s4, s44, -8));
	//ft_strncmp should crash on each individual line below
//	ft_strcmp(NULL, s1);
//	ft_strcmp(s1, NULL);

	//ex02
	char *ft_strcat(char *dest, char *src);
	printf("\n\nft_strcat tests\n");
	strcat(s0, "");
	ft_strcat(s00, "");
	printf("%s|\n%s|\n", s0, s00);
	strcat(s0, "|");
	ft_strcat(s00, "|");
	printf("%s\n%s\n", s0, s00);
	strcat(s1, "");
	ft_strcat(s11, "");
	printf("%s|\n%s|\n", s1, s11);
	strcat(s1, "|");
	ft_strcat(s11, "|");
	printf("%s\n%s\n", s1, s11);
	strcat(s4, " (ou pas)");
	ft_strcat(s44, " (ou pas)");
	printf("%s\n%s\n", s4, s44);
	//Crash tester
/*	strcat(s3, s3);
	ft_strcat(s33, s33);
	printf("%s\n%s\n", s3, s33);
	s55[3] = 'a';
	strcat(s5,&s5[1]);
	ft_strcat(s55, &s55[1]);
	printf("%s\n%s\n", s5, s55);
	s66[5] = 0;
	strcat(&s6[1], s6);
	ft_strcat(&s66[1], s66);
	printf("%s\n%s\n", s6, s66);
*/	//ft_strcat should crash on each individual line below
//	ft_strcat(NULL, s1);
//	ft_strcat(s1, NULL);
//	ft_strcat(NULL, NULL);

	//ex03
	char *ft_strncat(char *dest, char *src, unsigned int nb);
	printf("\n\nft_strncat tests\n");
	strncat(s0, "", 0);
	ft_strncat(s00, "", 0);
	printf("%s|\n%s|\n", s0, s00);
	strncat(s0, "", 1);
	ft_strncat(s00, "", 1);
	printf("%s|\n%s|\n", s0, s00);
	strncat(s0, "", 3);
	ft_strncat(s00, "", 3);
	printf("%s|\n%s|\n", s0, s00);
	strncat(s0, "|", 0);
	ft_strncat(s00, "|", 0);
	printf("%s\n%s\n", s0, s00);
	strncat(s0, "|", 2);
	ft_strncat(s00, "|", 2);
	printf("%s\n%s\n", s0, s00);
	strncat(s1, "", 0);
	ft_strncat(s11, "", 0);
	printf("%s|\n%s|\n", s1, s11);
	strncat(s1, "", 2);
	ft_strncat(s11, "", 2);
	printf("%s|\n%s|\n", s1, s11);
	strncat(s4, " (ou pas ?)", 4);
	ft_strncat(s44, " (ou pas ?)", 4);
	printf("%s\n%s\n", s4, s44);
	strncat(s4, " si ?)", 99);
	ft_strncat(s44, " si ?)", 99);
	printf("%s\n%s\n", s4, s44);
	strncat(s3, s4, 3);
	ft_strncat(s33, s44, 3);
	printf("%s\n%s\n", s3, s33);
	strncat(s3, s4, 4);
	ft_strncat(s33, s44, 4);
	printf("%s\n%s\n", s3, s33);
	strncat(s3, s4, 18);
	ft_strncat(s33, s44, 18);
	printf("%s\n%s\n", s3, s33);

	//Sorry I'm not in the mood to test out specific bad cases handling and crashes
	
	//ex04
	char *ft_strstr(char *str, char *to_find);
	printf("\n\nft_strstr tests\n");
	printf("%s\n%s\n", strstr(s4, ""), ft_strstr(s4, ""));
	printf("%s\n%s\n", strstr(s4, " "), ft_strstr(s4, " "));
	printf("%s\n%s\n", strstr(s4, "J"), ft_strstr(s4, "J"));
	printf("%s\n%s\n", strstr(s3, "F"), ft_strstr(s3, "F"));
	printf("%s\n%s\n", strstr(s0, ""), ft_strstr(s0, ""));
	printf("%s\n%s\n", strstr(s0, " "), ft_strstr(s0, " "));
	printf("%s\n%s\n", strstr(s4, "bo"), ft_strstr(s4, "bo"));
	printf("%s\n%s\n", strstr(s4, "rom"), ft_strstr(s4, "rom"));
	printf("%s\n%s\n", strstr(s4, "Ja"), ft_strstr(s4, "Ja"));
	printf("%s\n%s\n", strstr(s4, "Jam"), ft_strstr(s4, "Jam"));
	printf("%s\n%s\n", strstr(s4, "?)"), ft_strstr(s4, "?)"));
	printf("%s\n%s\n", strstr(s4, " ?)"), ft_strstr(s4, " ?)"));
	printf("%s\n%s\n", strstr(s4, ""), ft_strstr(s4, ""));
	s4[6] = 0;
	printf("%s\n%s\n", strstr(s4, "r"), ft_strstr(s4, "r"));
	s4[6] = 'f';
	strcpy(s2, "aaaaab");
	printf("%s\n%s\n", strstr(s2, "aaaab"), ft_strstr(s2, "aaaab"));

	//Sorry I'm still not in the mood to test out specific bad cases handling and crashes

	//ex05
	unsigned int ft_strlcat(char *dest, char *src, unsigned int size);	
	printf("\n\nft_strlcat tests\n");
	int rt1;
	int rt2;
	rt1 = strlcat(s0, "", 0);
	rt2 = ft_strlcat(s00, "", 0);
	printf("%i | %s\n%i | %s\n", rt1, s0, rt2, s00);
	rt1 = strlcat(s0, "", 1);
	rt2 = ft_strlcat(s00, "", 1);
	printf("%i | %s\n%i | %s\n", rt1, s0, rt2, s00);
	rt1 = strlcat(s0, "", 3);
	rt2 = ft_strlcat(s00, "", 3);
	printf("%i | %s\n%i | %s\n", rt1, s0, rt2, s00);
	rt1 = strlcat(s0, "|", 0);
	rt2 = ft_strlcat(s00, "|", 0);
	printf("%i | %s\n%i | %s\n", rt1, s0, rt2, s00);
	rt1 = strlcat(s0, "|", 2);
	rt2 = ft_strlcat(s00, "|", 2);
	printf("%i | %s\n%i | %s\n", rt1, s0, rt2, s00);
	rt1 = strlcat(s1, "", 0);
	rt2 = ft_strlcat(s11, "", 0);
	printf("%i | %s\n%i | %s\n", rt1, s1, rt2, s11);
	rt1 = strlcat(s1, "", 2);
	rt2 = ft_strlcat(s11, "", 2);
	printf("%i | %s\n%i | %s\n", rt1, s1, rt2, s11);
	rt1 = strlcat(s4, " ( ou non.)", strlen(s4) + 4);
	rt2 = ft_strlcat(s44, " ( ou non.)", strlen(s44) + 4);
	printf("%i | %s\n%i | %s\n", rt1, s4, rt2, s44);
	rt1 = strlcat(s4, "non.)", strlen(s4) + 6);
	rt2 = ft_strlcat(s44, "non.)", strlen(s44) + 6);
	printf("%i | %s\n%i | %s\n", rt1, s4, rt2, s44);
	strcpy(s3, "PAF");
	strcpy(s33, "PAF");
	rt1 = strlcat(s3, s4, 3);
	rt2 = ft_strlcat(s33, s44, 3);
	printf("%i | %s\n%i | %s\n", rt1, s3, rt2, s33);
	rt1 = strlcat(s3, s4, 4);
	rt2 = ft_strlcat(s33, s44, 4);
	printf("%i | %s\n%i | %s\n", rt1, s3, rt2, s33);
	rt1 = strlcat(s3, s4, 18);
	rt2 = ft_strlcat(s33, s44, 18);
	printf("%i | %s\n%i | %s\n", rt1, s3, rt2, s33);
	//This was a copy/paste of the strncat tests
}
