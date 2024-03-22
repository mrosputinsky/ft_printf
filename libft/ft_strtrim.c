/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosputi <mrosputi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 23:11:41 by mrosputi          #+#    #+#             */
/*   Updated: 2024/02/11 12:48:07 by mrosputi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_set(const char *set, const char c);
size_t	start_trim(const char *s1, const char *set);
size_t	end_trim(const char *s1, const char *set);

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*trimmed;
	int		filler;
	int		trimmedlen;
	size_t	trim_s;
	size_t	trim_e;

	trim_s = start_trim(s1, set);
	trim_e = end_trim(s1, set);
	if (ft_strlen(s1) == trim_e)
		return (ft_strdup(""));
	trimmed = (char *)malloc(ft_strlen(s1) - (trim_e + trim_s) + 1);
	if (trimmed == NULL)
		return (NULL);
	filler = 0;
	trimmedlen = ft_strlen(s1) - (trim_e + trim_s);
	while (filler < trimmedlen)
	{
		trimmed[filler] = s1[trim_s + filler];
		filler++;
	}
	trimmed[filler] = '\0';
	return (trimmed);
}

size_t	start_trim(const char *s1, const char *set)
{
	size_t	trim_s;
	int		s;

	trim_s = 0;
	s = 0;
	while (s1[s])
	{
		if (ft_set(set, s1[s]) == 0)
			break ;
		else
			trim_s++;
		s++;
	}
	return (trim_s);
}

size_t	end_trim(const char *s1, const char *set)
{
	size_t	trim_e;
	int		e;

	trim_e = 0;
	e = ft_strlen(s1);
	while (e > 0)
	{
		if (ft_set(set, s1[e - 1]) == 0)
			break ;
		else
			trim_e++;
		e--;
	}
	return (trim_e);
}

int	ft_set(const char *set, const char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*try;

	try = ft_strtrim("   xxx   xxx", " x");
	printf("%s", try);
	return (0);
}*/
