/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 15:27:04 by yrabby            #+#    #+#             */
/*   Updated: 2019/04/02 14:16:02 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int res;

	res = nb;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb < 2)
		return (1);
	res = res * ft_recursive_factorial(nb - 1);
	return (res);
}
