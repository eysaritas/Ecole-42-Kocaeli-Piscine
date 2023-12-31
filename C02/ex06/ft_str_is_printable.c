/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaritas <42kocaeli.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:32:30 by esaritas          #+#    #+#             */
/*   Updated: 2023/07/24 16:54:38 by esaritas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(32 <= str[i] && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
