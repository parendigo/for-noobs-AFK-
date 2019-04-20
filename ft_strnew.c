/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarraq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 06:11:46 by mlarraq           #+#    #+#             */
/*   Updated: 2019/04/12 06:32:10 by mlarraq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*src;

	if (!(src = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_memset(src, '\0', size + 1);
	return (src);
}
