/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosputi <mrosputi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:01:53 by mrosputi          #+#    #+#             */
/*   Updated: 2024/02/09 22:24:12 by mrosputi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
int ft_isalnum(int c);

int main(void)
{
    int a = '5';
    int x = ft_isalnum(a);
    printf("%d", x);
    return (0);    
}*/
int	ft_isalnum(int c)
{
	if (((c >= 48) && (c <= 57)) || ((c >= 65 && c <= 90) \
	|| (c >= 97 && c <= 122)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
