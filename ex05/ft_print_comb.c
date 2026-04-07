/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerocha- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 17:24:13 by jerocha-          #+#    #+#             */
/*   Updated: 2026/04/07 17:24:16 by jerocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_print_comb(void);

char	single_digit_to_char(int n)
{
	return (n + '0');
}

void	print_comma(int d1, int d2, int d3)
{
	if (!(d1 == 7 && d2 == 8 && d3 == 9))
		write(1, ", ", 2);
}

void	print_digits(int d1, int d2, int d3)
{
	char	result_number[3];

	result_number[0] = single_digit_to_char(d1);
	result_number[1] = single_digit_to_char(d2);
	result_number[2] = single_digit_to_char(d3);
	write(1, result_number, 3);
	print_comma(d1, d2, d3);
}

void	ft_print_comb(void)
{
	int	primeiro_digito;
	int	segundo_digito;
	int	terceiro_digito;

	primeiro_digito = 0;
	while (primeiro_digito < 8)
	{
		segundo_digito = primeiro_digito + 1;
		while (segundo_digito < 9)
		{
			terceiro_digito = segundo_digito + 1;
			while (terceiro_digito < 10)
			{
				print_digits(primeiro_digito, segundo_digito, terceiro_digito);
				terceiro_digito = terceiro_digito + 1;
			}
			segundo_digito = segundo_digito + 1;
		}
		primeiro_digito = primeiro_digito + 1;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
