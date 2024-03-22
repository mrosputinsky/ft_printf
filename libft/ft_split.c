/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosputi <mrosputi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:39:47 by mrosputi          #+#    #+#             */
/*   Updated: 2024/02/11 23:15:35 by mrosputi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	wordcount(char const *s, char d);
int		stringlen(const char *s, char c);
char	*writeword(const char *s, char c);
int		check_for_delimiter(char a, char b);

int	check_for_delimiter(char a, char b)
{
	if (a == b)
		return (1);
	else
		return (0);
}

char	*writeword(const char *s, char c)
{
	int		len;
	int		p;
	char	*word;

	p = 0;
	len = stringlen(s, c);
	word = (char *)malloc(len + 1);
	while (check_for_delimiter(s[p], c) == 0 && s[p])
	{
		word[p] = s[p];
		p++;
	}
	word[len] = '\0';
	return (word);
}

int	stringlen(const char *s, char c)
{
	int	i;

	i = 0;
	while (check_for_delimiter(s[i], c) == 0 && s[i])
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	words = (char **)malloc(sizeof(char *) * (wordcount(s, c) + 1));
	while (s[i])
	{
		if (check_for_delimiter(s[i], c) == 0 && s[i])
		{
			words[j] = writeword(&s[i], c);
			j++;
			while (check_for_delimiter(s[i], c) == 0 && s[i])
				i++;
		}
		else
			i++;
	}
	words[j] = NULL;
	return (words);
}

size_t	wordcount(char const *s, char d)
{
	size_t	wc;
	size_t	i;

	wc = 0;
	i = 0;
	if (s[i] == '\0')
		return (0);
	while (s[i] == d && s[i])
		i++;
	while (s[i] && i < ft_strlen(s))
	{
		if (s[i] == d)
		{
			wc++;
			while (s[i] == d && s[i])
			{
				i++;
			}
		}
		else
			i++;
	}
	if (s[i - 1] != d && s[i - 1])
		wc++;
	return (wc);
}

int	main(void)
{
	char const	*s;
	char		d;
	char		**str;
	char a = 'j';
	int i = 9;
	

	s = "lorem ipsum dolor sit amet,\
		consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, \
		dignissim sit amet, adipiscing nec, ultricies sed, \
		dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, \
		semper congue, euismod non, mi.";
	d = ' ';
	str = ft_split(s, d);
	printf("%s %s %s", str[0], str[1], str[2]);
	return (0);
}
