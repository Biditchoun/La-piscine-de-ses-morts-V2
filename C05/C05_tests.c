/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C05_tests.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 17:01:47 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/17 21:07:54 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int main()
{
	//ex00
	int ft_iterative_factorial(int nb);
	printf("ft_iterative_factorial tests\n0 0 1 1 2 6 120 3628800\n%i %i %i %i %i %i %i %i\n", ft_iterative_factorial(-5),  ft_iterative_factorial(-1),  ft_iterative_factorial(0),  ft_iterative_factorial(1),  ft_iterative_factorial(2),  ft_iterative_factorial(3),  ft_iterative_factorial(5), ft_iterative_factorial(10));

	//ex01
	int ft_recursive_factorial(int nb);
	printf("\n\nft_recursive_factorial tests\n0 0 1 1 2 6 120 3628800\n%i %i %i %i %i %i %i %i\n", ft_recursive_factorial(-5),  ft_recursive_factorial(-1),  ft_recursive_factorial(0),  ft_recursive_factorial(1),  ft_recursive_factorial(2),  ft_recursive_factorial(3),  ft_recursive_factorial(5), ft_recursive_factorial(10));

	//ex02
	int ft_iterative_power(int nb, int power);
	printf("\n\nft_iterative_power tests\n0 0 1 1 6 25 -27 1024\n%i %i %i %i %i %i %i %i\n", ft_iterative_power(3, -5),  ft_iterative_power(5, -1),  ft_iterative_power(0, 0),  ft_iterative_power(8, 0),  ft_iterative_power(6, 1),  ft_iterative_power(5, 2), ft_iterative_power(-3, 3), ft_iterative_power(-2, 10));

	//ex03
	int ft_recursive_power(int nb, int power);
	printf("\n\nft_recursive_power tests\n0 0 1 1 6 25 -27 1024\n%i %i %i %i %i %i %i %i\n", ft_iterative_power(3, -5),  ft_iterative_power(5, -1),  ft_iterative_power(0, 0),  ft_iterative_power(8, 0),  ft_iterative_power(6, 1),  ft_iterative_power(5, 2), ft_iterative_power(-3, 3), ft_iterative_power(-2, 10));

	//ex04
	int ft_fibonacci(int index);
	printf("\n\nft_fibonacci tests\n-1 -1 0 1 1 2 3 5 55 701408733\n%i %i %i %i %i %i %i %i %i %i\n", ft_fibonacci(-18), ft_fibonacci(-1), ft_fibonacci(0), ft_fibonacci(1), ft_fibonacci(2), ft_fibonacci(3), ft_fibonacci(4), ft_fibonacci(5), ft_fibonacci(10), ft_fibonacci(44));

	//ex05
	int ft_sqrt(int nb);	
	printf("\n\nft_sqrt tests\n0 0 0 0 1 0 0 2 3 5 11 111 1111 46337 0\n%i %i %i %i %i %i %i %i %i %i %i %i %i %i %i\n", ft_sqrt(INT_MIN), ft_sqrt(-8), ft_sqrt(-1), ft_sqrt(0), ft_sqrt(1), ft_sqrt(2), ft_sqrt(3), ft_sqrt(4), ft_sqrt(9), ft_sqrt(25), ft_sqrt(121), ft_sqrt(12321), ft_sqrt(1234321), ft_sqrt(2147117569), ft_sqrt(INT_MAX)); 

	//ex06
	int ft_is_prime(int nb);
	printf("\n\nft_prime tests\n0 0 0 0 0 1 1 1 0 1 0 0 0 0 1\n%i %i %i %i %i %i %i %i %i %i %i %i %i %i %i\n", ft_is_prime(INT_MIN), ft_is_prime(-5), ft_is_prime(-1), ft_is_prime(0), ft_is_prime(1), ft_is_prime(2), ft_is_prime(3), ft_is_prime(5), ft_is_prime(32), ft_is_prime(97), ft_is_prime(343), ft_is_prime(123454321), ft_is_prime(2147483645), ft_is_prime(2147117569), ft_is_prime(INT_MAX)); 

	//ex07
	int ft_find_next_prime(int nb);
	printf("\n\nft_find_next_prime\n2 2 2 2 2 2 3 5 37 97 347 1234531 2147483647 2147117617 2147483647\n%i %i %i %i %i %i %i %i %i %i %i %i %i %i %i\n", ft_find_next_prime(INT_MIN), ft_find_next_prime(-5), ft_find_next_prime(-1), ft_find_next_prime(0), ft_find_next_prime(1), ft_find_next_prime(2), ft_find_next_prime(3), ft_find_next_prime(5), ft_find_next_prime(32), ft_find_next_prime(97), ft_find_next_prime(343), ft_find_next_prime(1234521), ft_find_next_prime(2147483644), ft_find_next_prime(2147117569), ft_find_next_prime(INT_MAX)); 

	//ex08
	int ft_ten_queens_puzzle(void);
	printf("\n\nft_ten_queens_puzzle test\n");
	int i = ft_ten_queens_puzzle();
	printf("\nIt should return 724, it returned %i.\nEach individual line from the output should never have two identical numbers, and when you imagine the grid, you should be careful about the diagonals.\n", i);
}
