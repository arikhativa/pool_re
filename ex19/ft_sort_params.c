/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 16:08:59 by yrabby            #+#    #+#             */
/*   Updated: 2019/04/02 14:19:59 by yrabby           ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2)
{
	int n;

	n = 0;
	while (s1[n])
	{
		if (s1[n] != s2[n])
			return (s1[n] - s2[n]);
		n++;
	}
	return (s1[n] - s2[n]);
}

void	ft_swap(char **av, int a, int b)
{
	char *swap;

	swap = av[a];
	av[a] = av[b];
	av[b] = swap;
}

int		main(int ac, char **av)
{
	int a;
	int b;

	a = 1;
	b = 2;
	while (a < (ac - 1))
	{
		if (ft_strcmp(av[a], av[b]) > 0)
		{
			ft_swap(av, a, b);
			a = 1;
			b = 2;
		}
		else
			a++;
		b = a + 1;
	}
	a = 1;
	while (av[a])
	{
		ft_putstr(av[a]);
		ft_putchar('\n');
		a++;
	}
	return (0);
}
