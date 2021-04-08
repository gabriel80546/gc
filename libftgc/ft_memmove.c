/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpassos- <gpassos-@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 10:58:12 by gpassos-          #+#    #+#             */
/*   Updated: 2021/02/17 10:58:14 by gpassos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftgc.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	size_t	dados[2];

	if (!dest || !src)
    {
		*((int *)dest) = 7;
		*((int *)src) = 7;
    }

	if (dest == NULL && src == NULL)
		return (NULL);

	dados[0] = ((dest - src) > 0) ? (n - 1) : 0;
	dados[1] = ((dest - src) > 0) ? (-1) : 1;
	i = dados[0];
	while (1)
	{
		if (((dest - src) > 0) && (int)i < 0)
			break ;
		else if (((dest - src) <= 0) && i >= n)
			break ;
		*((char *)dest + i) = *((char *)src + i);
		i += dados[1];
	}
	return (dest);
}
