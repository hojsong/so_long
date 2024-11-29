/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_util2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojsong <hojsong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 21:02:55 by hojsong           #+#    #+#             */
/*   Updated: 2022/12/21 22:11:10 by hojsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head/sl_bonus.h"

char	*put_mv(t_game *game)
{
	char	*str;
	int		size;

	size = mv_size(game->move);
	str = malloc(sizeof(char) * size + 1);
	set_str(game->move, str, size);
	str[size] = '\0';
	return (str);
}

void	set_str(int i, char *str, int size)
{
	int	n;
	int	s;

	n = 0;
	if (i == 0)
		str[0] = '0';
	while (i)
	{
		s = i % 10;
		str[size - 1 - n] = s + '0';
		i /= 10;
		n++;
	}
}

int	mv_size(int i)
{
	int	n;
	int	size;

	size = 0;
	if (i == 0)
		return (1);
	n = i;
	while (n != 0)
	{
		size++;
		n /= 10;
	}
	return (size);
}

void	str_put(t_game *game)
{
	char	*str;
	char	*str2;

	str2 = malloc(sizeof(char) * 11);
	str2 = "Mv Count :";
	str = put_mv(game);
	mlx_string_put(game->mlx, game->win, 0, 0, 1, str2);
	mlx_string_put(game->mlx, game->win, 110, 0, 1, str);
	free(str);
}
