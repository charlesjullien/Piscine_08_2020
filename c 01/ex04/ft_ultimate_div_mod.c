/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjullien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 15:07:07 by cjullien          #+#    #+#             */
/*   Updated: 2020/08/05 15:15:36 by cjullien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	stockdiv;
	int	stockmod;

	stockdiv = *a / *b;
	stockmod = *a % *b;
	*a = stockdiv;
	*b = stockmod;
}
