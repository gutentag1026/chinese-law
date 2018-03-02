/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digitlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhuang <yhuang@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 14:25:49 by yhuang            #+#    #+#             */
/*   Updated: 2018/02/28 15:09:41 by yhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_digitlen(int n)
{
	int		digit;
	int		i;

	digit = 1;
	i = 1;
	while (n / i > 9)
	{
		i = i * 10;
		digit = digit + 1;
	}
	return (digit);
}
