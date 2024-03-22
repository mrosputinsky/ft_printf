/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosputi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 23:13:01 by mrosputi          #+#    #+#             */
/*   Updated: 2024/02/10 23:13:03 by mrosputi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (*s)
	{
		f(i, s);
		i++;
		s++;
	}
}

/*void	ft_toupper(unsigned int c, char *s)
{
	*s = toupper(*s);
}
int	main(void)
{
	char str[] = "hello";
	ft_striteri(str, ft_toupper);
	printf("%s", str);
	return (0);
}*/
