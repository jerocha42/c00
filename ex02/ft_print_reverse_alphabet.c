/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerocha- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 15:10:59 by jerocha-          #+#    #+#             */
/*   Updated: 2026/04/07 15:11:01 by jerocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	write(1, "zyxwvutsrqponmlkjihgfedcba", 26);
}

/*
** int	main(void)
** {
** 	ft_print_reverse_alphabet();
** 	return (0);
** }
** 
*/