/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaritas <42kocaeli.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:40:46 by esaritas          #+#    #+#             */
/*   Updated: 2023/07/26 16:01:22 by esaritas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	str_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	total_len;

	dest_len = str_len(dest);
	src_len = str_len(src);
	total_len = dest_len + src_len;
	i = 0;
	if (size <= dest_len)
	{
		return (src_len + size);
	}
	while (src[i] != '\0' && (dest_len + i) < (size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (total_len);
}
