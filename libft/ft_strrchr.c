/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosputi <mrosputi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 23:11:59 by mrosputi          #+#    #+#             */
/*   Updated: 2024/02/10 23:50:33 by mrosputi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		last;
	char	a;
	char	*ret;

	last = ft_strlen(s);
	a = c;
	ret = NULL;
	while (last >= 0)
	{
		if (s[last] == a)
			return ((char *)&s[last]);
		last--;
	}
	return (ret);
}
/*
int	main(void)
{
	char s[] = "tripouille";
	int b = 97;
	char *c = ft_strrchr(s, 'z');
	printf("Found character: %c\n", *c);
	return (0);
}*/
