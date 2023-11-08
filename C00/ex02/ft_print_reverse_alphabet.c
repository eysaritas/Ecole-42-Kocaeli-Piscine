/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaritas <42kocaeli.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 20:01:03 by esaritas          #+#    #+#             */
/*   Updated: 2023/07/16 00:55:35 by esaritas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	num;

	num = 122;
	while (num <= 122 && 97 <= num)
	{
		write(1, &num, 1);
		num--;
	}
}
