/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaritas <42kocaeli.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 11:16:25 by esaritas          #+#    #+#             */
/*   Updated: 2023/07/31 12:30:20 by esaritas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	control_error(char	*str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (str[0] == '\0' || ft_strlen(str) == 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 43 || str[i] == 45 || str[i] == 127)
			return (0);
		j = i + 1;
		while (j < ft_strlen(str))
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	int		len;

	len = ft_strlen(base);
	nb = nbr;
	if (control_error(base) == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb < len)
		{
			ft_putchar(base[nb]);
		}
		if (nb >= len)
		{
			ft_putnbr_base(nb / len, base);
			ft_putnbr_base(nb % len, base);
		}
	}
}
