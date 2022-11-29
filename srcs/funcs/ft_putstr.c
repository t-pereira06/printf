/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:52:28 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/11/29 09:55:09 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../../libft/libft.h"

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		i += write(1, "(null)", 6);
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}
