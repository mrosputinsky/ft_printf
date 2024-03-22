/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosputi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 23:16:25 by mrosputi          #+#    #+#             */
/*   Updated: 2024/02/10 23:16:26 by mrosputi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		newlen;
	char	*joined;
	int		i;
	int		j;

	newlen = ft_strlen(s1) + ft_strlen(s2) + 1;
	joined = (char *)malloc(newlen * sizeof(char));
	if (joined == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		joined[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		joined[i] = s2[j];
		i++;
		j++;
	}
	joined[i] = '\0';
	return (joined);
}
/*
int	main(void)
{
	char const *q = "jeden";
	char const *w = "dva";
	char *e = ft_strjoin(q, w);
	printf("%s", e);
	return (0);
}*/
