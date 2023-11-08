/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaritas <42kocaeli.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:47:19 by esaritas          #+#    #+#             */
/*   Updated: 2023/08/01 19:35:55 by esaritas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	unsigned int	i;
	unsigned int	number;

	i = 2;
	if (nb < 2)
		return (0);
	number = nb;
	while (i * i <= number)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
