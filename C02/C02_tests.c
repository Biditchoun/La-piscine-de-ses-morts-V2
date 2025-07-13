/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C02_tests.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 19:38:28 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/13 20:57:58 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <bsd/string.h>

int	main()
{
	//ex00
	char *ft_strcpy(char *dest, char *src);
	int i;
	char s1[] = "Jambonfromagequiroule VRAIMENT BIEN FORT";
	char s11[] = "Jambonfromagequiroule VRAIMENT BIEN FORT";
	char *cp = NULL;
	char *cp2 = NULL;
	char *s2 = "BOUH";
	char *s3 =  "";
	printf("ft_strcpy tests\n%s\n%s\n", s1, s11);
	i = strlen(s1);
	cp = ft_strcpy(s1, s2);
	cp2 = ft_strcpy(s11, s3);
	if (cp != s1 || cp2 != s11)
		printf("Bad return value\n");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s11, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s1, s2);
	ft_strcpy(s11, s2);
	strcpy(&s1[i-2], s2);
	ft_strcpy(&s11[i-2], s2);
	printf("%s\n%s\n", s1, s11);
	strcpy(s1, s3);
	ft_strcpy(s11, s3);
	printf("%s\n%s\n", s1, s11);
/*	printf("Crash tests\n");
	strcpy(s1, &s1[1]);
	ft_strcpy(s11, &s11[1]);
	printf("%s\n%s\n", s1, s11);
	strcpy(&s1[1], s1);
	ft_strcpy(&s11[1], s11);
	printf("%s\n%s\n", s1, s11);
	strcpy(s1, s1);
	ft_strcpy(s11, s11);
	printf("%s\n%s\n", s1, s11);
*/	//ft_strcpy should crash on each individual line below
//	ft_strcpy(NULL, s2);
//	ft_strcpy(s11, NULL);
//	ft_strcpy(NULL, NULL);

	//ex01
	char *ft_strncpy(char *dest, char *src, unsigned int n);	
	printf("\n\nft_strncpy tests\n");
	cp = cp2 = NULL;
	cp = ft_strncpy(s1, s2, 3);
	cp2 = ft_strncpy(s11, s3, 3);
	if (s1 != cp || s11 != cp2)
		printf("Bad return value\n");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s11, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strncpy(s1, s3, 1);
	ft_strncpy(s11, s3, 1);
	printf("%c%s\n%c%s\n", s1[0], &s1[1], s11[0], &s11[1]);
	strncpy(s1, s3, 3);
	ft_strncpy(s11, s3, 3);
	printf("%c%c%c%s\n%c%c%c%s\n", s1[0], s1[1], s1[2] ,&s1[3], s11[0], s11[1], s11[2], &s11[3]);
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s11, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strncpy(s1, s2, 1);
	ft_strncpy(s11, s2, 1);
	printf("%s\n%s\n", s1, s11);
	strncpy(s1, s2, 3);
	ft_strncpy(s11, s2, 3);
	printf("%s\n%s\n", s1, s11);
	strncpy(s1, s2, 4);
	ft_strncpy(s11, s2, 4);
	printf("%s\n%s\n", s1, s11);
	strncpy(s1, s2, 5);
	ft_strncpy(s11, s2, 5);
	printf("%s%c%s\n%s%c%s\n", s1, s1[4], &s1[5], s11, s11[4], &s11[5]);
	strncpy(s1, s2, 6);
	ft_strncpy(s11, s2, 6);
	printf("%s%c%c%s\n%s%c%c%s\n", s1, s1[4], s1[5], &s1[6], s11, s11[4], s11[5], &s11[6]);
/*	printf("Crash tests\n");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s11, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strncpy(s1, s2, 0);
	ft_strncpy(s11, s2, 0);
	printf("%s\n%s\n", s1, s11);
	strncpy(s1, s3, 0);
	ft_strncpy(s11, s3, 0);
	printf("%s\n%s\n", s1, s11);
	strncpy(&s1[1], s1, 3);
	ft_strncpy(&s11[1], s11, 3);
	printf("%s\n%s\n", s1, s11);
	strncpy(s1, &s1[2], 4);
	ft_strncpy(s11, &s11[2], 4);
	printf("%s\n%s\n", s1, s11);
	printf("Crash tests\n");	
	strncpy(s1, s1, 3);
	ft_strncpy(s11, s11, 3);
	printf("%s\n%s\n", s1, s11);
*/	//ft_strncpy should crash on each of the individual lines below
//	ft_strncpy(NULL, s2, 3);
//	ft_strncpy(s11, NULL, 3);
//	ft_strncpy(NULL, NULL, 3);
//	ft_strncpy(s1, s2, -5);
//	ft_strncpy(NULL, s2, -5);
//	ft_strncpy(s11, NULL, -5);
//	ft_strncpy(NULL, NULL, -5);

	//ex02
	int ft_str_is_alpha(char *str);
	printf("\n\nft_str_is_alpha tests\nExpected output :\n1 1 1 0 0 0 0 0 0 0 0 1\nGotten output :\n%i %i %i %i %i %i %i %i %i %i %i %i\n", ft_str_is_alpha("oui"), ft_str_is_alpha("NON"), ft_str_is_alpha(""), ft_str_is_alpha(" "), ft_str_is_alpha("aa "), ft_str_is_alpha(" aa"), ft_str_is_alpha("a a"), ft_str_is_alpha("@"), ft_str_is_alpha("["), ft_str_is_alpha("`"), ft_str_is_alpha("{"), ft_str_is_alpha("azAZ"));
	//null test
//	ft_str_is_alpha(NULL);

	//ex03
	int ft_str_is_numeric(char *str);
	printf("\n\nft_str_is_numeric tests\nExpected ouput :\n1 1 1 0 0 0 0 0 0 0\nGotten output :\n%i %i %i %i %i %i %i %i %i %i\n", ft_str_is_numeric(""), ft_str_is_numeric("00"), ft_str_is_numeric("9"), ft_str_is_numeric("zouiii"), ft_str_is_numeric(" "), ft_str_is_numeric(" 009"), ft_str_is_numeric("990 "), ft_str_is_numeric("00 99"), ft_str_is_numeric("/"), ft_str_is_numeric(":"));
	//null test
//	ft_str_is_numeric(NULL);

	//ex04
	int ft_str_is_lowercase(char *str);
	printf("\n\nft_str_is_lowercase tests\nExpected ouput :\n1 1 1 0 0 0 0 0 0 0\nGotten output :\n%i %i %i %i %i %i %i %i %i %i\n", ft_str_is_lowercase(""), ft_str_is_lowercase("aa"), ft_str_is_lowercase("z"), ft_str_is_lowercase("NON"), ft_str_is_lowercase(" "), ft_str_is_lowercase(" aaz"), ft_str_is_lowercase("zza "), ft_str_is_lowercase("aa zz"), ft_str_is_lowercase("`"), ft_str_is_lowercase("{"));
	//null test
//	ft_str_is_lowercase(NULL);

	//ex05
	int ft_str_is_uppercase(char *str);
	printf("\n\nft_str_is_uppercase tests\nExpected ouput :\n1 1 1 0 0 0 0 0 0 0\nGotten output :\n%i %i %i %i %i %i %i %i %i %i\n", ft_str_is_uppercase(""), ft_str_is_uppercase("AA"), ft_str_is_uppercase("Z"), ft_str_is_uppercase("oui"), ft_str_is_uppercase(" "), ft_str_is_uppercase(" aaz"), ft_str_is_uppercase("zza "), ft_str_is_uppercase("aa zz"), ft_str_is_uppercase("@"), ft_str_is_uppercase("["));
	//null test
//	ft_str_is_uppercase(NULL);
	
	//ex06
	int ft_str_is_printable(char *str);
	char c = 127;
	printf("\n\nft_str_is_printable tests\nExpected ouput :\n1 1 1 0 0 0 0 0 0 0\nGotten output :\n%i %i %i %i %i %i %i %i %i %i\n", ft_str_is_printable(""), ft_str_is_printable("  "), ft_str_is_printable("~"), ft_str_is_printable("\n\n"), ft_str_is_printable("\n"), ft_str_is_printable("\naaz"), ft_str_is_printable("zza\n"), ft_str_is_printable("aa\nzz"), ft_str_is_printable("\31"), ft_str_is_printable(&c));
	//null test
//	ft_str_is_printable(NULL);

	//ex07
	char *ft_strupcase(char *str);
	printf("\n\nft_strupcase tests\n");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	cp = cp2 = NULL;
	cp = ft_strupcase(s1);
	cp2 = ft_strupcase(s3);
	if (cp != s1 || cp2 != s3)
		printf("Bad return value\n");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s11, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	ft_strupcase(s11);
	printf("JAMBONFROMAGEQUIROULE VRAIMENT TOUJOURS\n%s\n", s11);
	strcpy(s11, "a");
	ft_strupcase(s11);
	printf("A\n%s\n", s11);
	strcpy(s11, "z");
	ft_strupcase(s11);
	printf("Z\n%s\n", s11);
	strcpy(s11, "`abcdefghijklmnopqrstuvwxy z{");
	ft_strupcase(s11);
	printf("`ABCDEFGHIJKLMNOPQRSTUVWXY Z{\n%s\n", s11);
	strcpy(s11, "");
	ft_strupcase(s11);
	printf("\n%s\n", s11);
	//null test
//	ft_strupcase(NULL);

	//ex08	
	char *ft_strlowcase(char *str);
	printf("\n\nft_strlowcase tests\n");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	cp = cp2 = NULL;
	cp = ft_strlowcase(s1);
	cp2 = ft_strlowcase(s3);
	if (cp != s1 || cp2 != s3)
		printf("Bad return value\n");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s11, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	ft_strlowcase(s11);
	printf("jambonfromagequiroule vraiment toujours\n%s\n", s11);
	strcpy(s11, "A");
	ft_strlowcase(s11);
	printf("a\n%s\n", s11);
	strcpy(s11, "Z");
	ft_strlowcase(s11);
	printf("z\n%s\n", s11);
	strcpy(s11, "@ABCDEFGHIJKLMNOPQRSTUVWXY Z[");
	ft_strlowcase(s11);
	printf("@abcdefghijklmnopqrstuvwxy z[\n%s\n", s11);
	strcpy(s11, "");
	ft_strlowcase(s11);
	printf("\n%s\n", s11);
	//null test
//	ft_strlowcase(NULL);

	//ex09
	char *ft_strcapitalize(char *str);
	printf("\n\nft_strcapitalize tests\n");
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	cp = cp2 = NULL;
	cp = ft_strcapitalize(s1);
	cp2 = ft_strcapitalize(s3);
	if (cp != s1 || cp2 != s3)
		printf("Bad return value\n");
	strcpy(s11, "hi, how are you? 42words forty-two; f+a");	
	ft_strcapitalize(s11);
	printf("Hi, How Are You? 42words Forty-Two; F+A\n%s\n", s11);
	strcpy(s11, "0Aled 0zEUR 9Aca 9zZZ");	
	ft_strcapitalize(s11);
	printf("0aled 0zeur 9aca 9zzz\n%s\n", s11);
	strcpy(s11, "@Agrid @zouZou [ARry [zeeLand");	
	ft_strcapitalize(s11);
	printf("@Agrid @Zouzou [Arry [Zeeland\n%s\n", s11);
	strcpy(s11, "`AGrou `zooTOPia {AveCaeSar {zaluCAESAR");	
	ft_strcapitalize(s11);
	printf("`Agrou `Zootopia {Avecaesar {Zalucaesar\n%s\n", s11);
	strcpy(s11, "/ACTHUALLY /zoo000ne :APeuTeu :ziNe-e");	
	ft_strcapitalize(s11);
	printf("/Acthually /Zoo000ne :Apeuteu :Zine-E\n%s\n", s11);
	//null test
//	ft_strcapitalize(NULL);

	//ex10
	unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
	printf("\n\nft_strlcpy tests\n");
	unsigned int rt1, rt2;
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s11, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	rt1 = strlcpy(s1, "oui", 0);
	rt2 = ft_strlcpy(s11, "oui", 0);
	printf("%u | %s\n", rt1, s1);
	printf("%u | %s\n", rt2, s11);
	rt1 = strlcpy(s1, "oui", 1);
	rt2 = ft_strlcpy(s11, "oui", 1);
	printf("%u | %c%s\n", rt1, s1[0], &s1[1]);
	printf("%u | %c%s\n", rt2, s11[0], &s11[1]);
	rt1 = strlcpy(s1, "oui", 3);
	rt2 = ft_strlcpy(s11, "oui", 3);
	printf("%u | %s%c%s\n", rt1, s1, s1[2], &s1[3]);
	printf("%u | %s%c%s\n", rt2, s11, s11[2], &s11[3]);
	rt1 = strlcpy(s1, "oui", 4);
	rt2 = ft_strlcpy(s11, "oui", 4);
	printf("%u | %s%c%s\n", rt1, s1, s1[3], &s1[4]);
	printf("%u | %s%c%s\n", rt2, s11, s11[3], &s11[4]);
	rt1 = strlcpy(s1, "oui", 5);
	rt2 = ft_strlcpy(s11, "oui", 5);
	printf("%u | %s%c%c%s\n", rt1, s1, s1[3], s1[4], &s1[5]);
	printf("%u | %s%c%c%s\n", rt2, s11, s11[3], s11[4], &s11[5]);
	strcpy(s1, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	strcpy(s11, "Jambonfromagequiroule VRAIMENT TOUJOURS");
	rt1 = strlcpy(s1, "", 0);
	rt2 = ft_strlcpy(s11, "", 0);
	printf("%u | %c%s\n", rt1, s1[0], &s1[1]);
	printf("%u | %c%s\n", rt2, s11[0], &s11[1]);
	s1[0] = s11[0] = 'J';
	rt1 = strlcpy(s1, "", 1);
	rt2 = ft_strlcpy(s11, "", 1);
	printf("%u | %c%s\n", rt1, s1[0], &s1[1]);
	printf("%u | %c%s\n", rt2, s11[0], &s11[1]);
	s1[0] = s11[0] = 'J';
	rt1 = strlcpy(s1, "", 3);
	rt2 = ft_strlcpy(s11, "", 3);
	printf("%u | %c%s\n", rt1, s1[0], &s1[1]);
	printf("%u | %c%s\n", rt2, s11[0], &s11[1]);
	s1[0] = s11[0] = 'J';
	//Crah tester
/*	rt1 = strlcpy(s1, &s1[1], 3);
	rt2 = ft_strlcpy(s11, &s11[1], 3);
	printf("%u | %s%c%s\n", rt1, s1, s1[2], &s1[3]);
	printf("%u | %s%c%s\n", rt2, s11, s11[2], &s11[3]);
	s1[2] = s11[2] = 'm';
	rt1 = strlcpy(&s1[5], s1, 8);
	rt2 = ft_strlcpy(&s11[5], s1, 8);
	printf("%u | %s\n", rt1, s1);
	printf("%u | %s\n", rt2, s11);
	rt1 = strlcpy(s1, s1, 8);
	rt2 = ft_strlcpy(s11, s11, 8);
	printf("%u | %s\n", rt1, s1);
	printf("%u | %s\n", rt2, s11);
	rt1 = strlcpy(s1, s3, -5);
	rt2 = ft_strlcpy(s11, s3, -5);
	printf("%u | %s\n", rt1, s1);
	printf("%u | %s\n", rt2, s11);
*/	//ft_strlcpy should crash on every line below
//	ft_strlcpy(NULL, s1, 5);
//	ft_strlcpy(s1, NULL, 5);
//	ft_strlcpy(NULL, NULL, 5);

	//ex11
	void ft_putstr_non_printable(char *str);
	printf("\n\nft_putstr_non_printable tests\n");
	strcpy(s1, "Jambonfromage c'est bon on a compris");
	printf("Jambonfromage c'est bon on a compris\n");
	ft_putstr_non_printable(s1);
	s1[3] = '\n';
	s1[8] = 31;
	s1[11] = 127;
	s1[15] = 126;
	s1[17] = 147;
	printf("\nJam\\0aonfr\\1fma\\7fe c~e\\mot bon on a compris\n");
	ft_putstr_non_printable(s1);
	s1[25] = -8;
	printf("\nJam\\0aonfr\\1fma\\7fe c~e\\mot bon o\\f8 a compris\n");
	ft_putstr_non_printable(s1);
	//null test
//	ft_putstr_non_printable(NULL);

	//ex12
	void *ft_print_memory(void *addr, unsigned int size);
	printf("\n\n\nft_print_memory tests\nNothing should display here :\n");
	strcpy(s1, "Jambo\\f8fromage on dort depuis 12h");
	s1[5] = -8;
	ft_print_memory((void *)s1, 0);
	printf("Now the adress is the string below, have fun reading\n%s\n", s1);
	ft_print_memory((void *)s1, 800);
}
