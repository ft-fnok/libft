/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlalleik <nlalleik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:59:29 by nlalleik          #+#    #+#             */
/*   Updated: 2021/12/19 11:15:57 by nlalleik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	char	*c;

	c = malloc(nelem * elsize);
	if (c == NULL)
		return (0);
	ft_bzero(c, nelem * elsize);
	return ((void *)c);
}
