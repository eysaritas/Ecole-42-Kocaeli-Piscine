/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaritas <42kocaeli.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 19:36:59 by esaritas          #+#    #+#             */
/*   Updated: 2023/08/01 22:35:12 by esaritas         ###   ########.tr       */
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

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (2);
	i = 0;
	while (!ft_is_prime(nb + i))
		i++;
	return (nb + i);
}
