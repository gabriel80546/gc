/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpassos- <gpassos-@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 10:56:42 by gpassos-          #+#    #+#             */
/*   Updated: 2021/02/17 10:56:44 by gpassos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftgc.h"

int		ft_isalnum(int c)
{
	if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
		return (1);
	else if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
