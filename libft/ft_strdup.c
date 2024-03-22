/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosputi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 23:14:24 by mrosputi          #+#    #+#             */
/*   Updated: 2024/02/10 23:14:25 by mrosputi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*new;
	int		index;
	int		len;

	index = 0;
	len = ft_strlen(src);
	new = (char *)malloc(len + 1);
	while (src[index])
	{
		new[index] = src[index];
		index++;
	}
	new[index] = '\0';
	return (new);
}
/*
int	main(void)
{
	printf("%s", ft_strdup("testest"));
	return (0);
}*/
