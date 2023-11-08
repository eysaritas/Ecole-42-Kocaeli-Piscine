/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaritas <42kocaeli.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 16:03:10 by esaritas          #+#    #+#             */
/*   Updated: 2023/07/30 20:40:59 by esaritas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char	*str)
{
	int	i;
	int	number;
	int	sign;

	sign = 1;
	number = 0;
	i = 0;
	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (48 <= str[i] && str[i] <= 57)
	{
		number *= 10;
		number += str[i] - 48;
		i++;
	}
	return (number * sign);
}
