/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosputi <mrosputi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 14:08:55 by mrosputi          #+#    #+#             */
/*   Updated: 2024/02/10 22:23:24 by mrosputi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int				i;
	unsigned char	*tempdest;
	const char		*tempsrc;

	i = 0;
	tempdest = (unsigned char *)dest;
	tempsrc = (const char *)src;
	while (n > 0)
	{
		tempdest[i] = tempsrc[i];
		i++;
		n--;
	}
	dest = tempdest;
	return (dest);
}
/*
int	main(void)
{
	char *src1 = "anotherdayanotherdollar";
	char dest1[30];
	char *src2 = "anotherdayanotherdollar";
	char dest2[30];
	ft_memcpy(dest1, src1, 15);
	memcpy(dest2, src2, 15);
	printf("%s", dest1);
	printf("%c", '\n');
	printf("%s", dest2);
	return (0);
}*/
