/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pblagoje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 21:32:17 by pblagoje          #+#    #+#             */
/*   Updated: 2020/08/09 21:32:22 by pblagoje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_line(int x, char letter1, char letter2, char letter3)
{
	int largeur;

	largeur = 1;
	while (largeur <= x)
	{
		if (largeur == 1)
			ft_putchar(letter1);
		else if (largeur == x)
			ft_putchar(letter2);
		else
			ft_putchar(letter3);
		largeur++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int hauteur;

	hauteur = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (hauteur <= y)
	{
		if (hauteur == 1)
			ft_print_line(x, 'A', 'C', 'B');
		else if (hauteur == y)
			ft_print_line(x, 'A', 'C', 'B');
		else
			ft_print_line(x, 'B', 'B', ' ');
		hauteur++;
	}
}
