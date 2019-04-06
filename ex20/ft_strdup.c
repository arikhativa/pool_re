/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 16:40:52 by yrabby            #+#    #+#             */
/*   Updated: 2019/04/02 14:23:48 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*new;
	int		n;

	n = 0;
	while (src[n])
		n++;
	new = (char*)malloc(sizeof(char) * (n + 1));
	n = 0;
	while (src[n])
	{
		new[n] = src[n];
		n++;
	}
	new[n] = '\0';
	return (new);
}
