/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaritas <42kocaeli.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:06:07 by esaritas          #+#    #+#             */
/*   Updated: 2023/07/26 15:11:23 by esaritas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char	*s1, char	*s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] == s2[i]) && (s1[i] != '\0' || s2[i] != '\0') && (i < n))
		i++;
	if (i == n)
		i--;
	return (s1[i] - s2[i]);
}
