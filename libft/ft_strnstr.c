/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosputi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 23:12:07 by mrosputi          #+#    #+#             */
/*   Updated: 2024/02/10 23:12:09 by mrosputi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n;
	size_t	h;

	n = 0;
	h = 0;
	if (needle[n] == '\0')
		return ((char *)haystack);
	while (haystack[h] && len > h)
	{
		while (haystack[h + n] == needle[n] && haystack[h + n] && len > h + n)
		{
			n++;
			if (needle[n] == '\0')
				return ((char *)haystack + h);
		}
		h++;
		n = 0;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char *s1 = "aahelloaaaaa";
	const char *s2 = "hello";
	char *s3 = ft_strnstr(s1, s2, 6);
	printf("%s", s3);
	return (0);
}*/
