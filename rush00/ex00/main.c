/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pblagoje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 17:37:37 by pblagoje          #+#    #+#             */
/*   Updated: 2020/08/12 16:59:30 by cjullien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

void	rush(int x, int y);

int		main(int argc, char **argv)
{
	int i;
	int j;
	if (argc > 3)
	{
		return (0);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);

	rush(i, j);
	return (0);
}
