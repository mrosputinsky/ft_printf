/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosputi <mrosputi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 23:09:11 by mrosputi          #+#    #+#             */
/*   Updated: 2024/02/11 11:53:16 by mrosputi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*temp;
	size_t			i;
	size_t			x;

	i = size * nmemb;
	x = 0;
	if ((nmemb && size) && nmemb > ((size_t)-1) / size)
		return (NULL);
	temp = (void *)malloc(i);
	if (temp == NULL)
		return (NULL);
	while (x < nmemb * size)
	{
		temp[x] = 0;
		x++;
	}
	return (temp);
}
