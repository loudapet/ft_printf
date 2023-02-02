/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:37:56 by plouda            #+#    #+#             */
/*   Updated: 2023/02/01 12:08:56 by plouda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	ft_printf_unbr(unsigned int unb)
{
	char	*str;
	int		len;

	str = ft_uitoa(unb);
	len = ft_printf_str(str);
	free(str);
	return (len);
}