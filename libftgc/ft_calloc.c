/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpassos- <gpassos-@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 10:56:37 by gpassos-          #+#    #+#             */
/*   Updated: 2021/02/17 10:56:39 by gpassos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftgc.h"
#include <stdlib.h>
#include "gc.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *saida;

	saida = ft_malloc(nmemb * size);
	if (saida == NULL)
		return (NULL);
	ft_memset(saida, 0, nmemb * size);
	return (saida);
}
