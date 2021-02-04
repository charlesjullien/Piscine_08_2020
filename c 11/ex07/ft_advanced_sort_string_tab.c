/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjullien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 19:17:21 by cjullien          #+#    #+#             */
/*   Updated: 2020/08/26 22:31:53 by cjullien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	char	*swap;
	int		i;
	int		j;

	j = 0;
	while (tab[j])
		j++;
	while (j > 1)
	{
		i = 0;
		while (i + 1 < j)
		{
			if ((*cmp)(tab[i + 1], tab[i]) < 0)
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
			i++;
		}
		j--;
	}
}
