/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 09:54:28 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/11/18 11:48:20 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"
#include "../../libft/libft.h"

void	ft_s(va_list av, unsigned long long *total_len)
{
	char	*c;

	c = va_arg(av, char *);
	if (!c)
		write(1, "(null)", 6);
	while (*c)
	{
		write(1, &c, 1);
		c++;
	}
	*total_len += ft_strlen(c);
}
