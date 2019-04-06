/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 16:47:38 by yrabby            #+#    #+#             */
/*   Updated: 2019/04/02 14:24:11 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *new;
	int n;

	if (min >= max)
		return (NULL);
	n = 0;
	new = (int*)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		new[n] = min;
		min++;
		n++;
	}
	return (new);
}
