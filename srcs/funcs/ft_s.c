/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 09:54:28 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/11/23 12:19:19 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../../libft/libft.h"

void	ft_s(va_list av, unsigned long long *total_len)
{
	char	*c;
	int	i;

	i = 0;
	c = va_arg(av, char *);
	if (!c)
		write(1, "(null)", 6);
	while (c[i] != '\0')
	{
		write(1, &c[i], 1);
		i++;
	}
	*total_len += ft_strlen(c);
}
