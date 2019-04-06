/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 16:01:34 by yrabby            #+#    #+#             */
/*   Updated: 2019/04/01 16:06:04 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int n;

	n = 0;
	while (str[n])
	{
		ft_putchar(str[n]);
		n++;
	}
}

int		main(int ac, char **av)
{
	int n;

	n = ac;
	n = 1;
	while (av[n])
	{
		ft_putstr(av[n]);
		ft_putchar('\n');
		n++;
	}
	return (0);
}
