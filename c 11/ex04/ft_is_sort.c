/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjullien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 18:24:00 by cjullien          #+#    #+#             */
/*   Updated: 2020/08/25 18:52:03 by cjullien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	check_if_incr;
	int	check_if_decr;
	int	i;

	i = 0;
	check_if_decr = 1;
	check_if_incr = 1;
	while (i + 1 < length)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
		{
			check_if_incr = 0;
		}
		if ((*f)(tab[i], tab[i + 1]) < 0)
		{
			check_if_decr = 0;
		}
		i++;
	}
	return (check_if_incr || check_if_decr);
}
