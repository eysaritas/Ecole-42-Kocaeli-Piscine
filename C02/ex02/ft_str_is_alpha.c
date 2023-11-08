/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaritas <42kocaeli.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:34:40 by esaritas          #+#    #+#             */
/*   Updated: 2023/07/24 14:45:05 by esaritas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char	*str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (('A' <= str[i] && str[i] <= 'Z')
			|| ('a' <= str[i] && str[i] <= 'z'))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}