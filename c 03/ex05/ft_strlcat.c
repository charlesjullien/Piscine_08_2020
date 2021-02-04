/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjullien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 21:51:18 by cjullien          #+#    #+#             */
/*   Updated: 2020/08/19 17:59:06 by cjullien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	destlen;
	unsigned int	srclen;

	i = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (size == 0)
	{
		return (srclen);
	}
	while (i + destlen < size - 1 && src[i])
	{
		dest[destlen + i] = src[i];
		i++;
	}
	if (i < size)
	{
		dest[destlen + i] = '\0';
	}
	if (size < destlen)
	{
		return (srclen + size);
	}
	return (destlen + srclen);
}
