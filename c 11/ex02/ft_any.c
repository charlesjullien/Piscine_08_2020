/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjullien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 18:08:55 by cjullien          #+#    #+#             */
/*   Updated: 2020/08/25 13:39:51 by cjullien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) != 0)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
