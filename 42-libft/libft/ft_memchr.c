/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugenc <hugenc@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:15:46 by hugenc            #+#    #+#             */
/*   Updated: 2023/10/20 18:23:47 by hugenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *str;
    size_t i;

    str = (unsigned char *)s;
    c = (unsigned char)c;

    i = 0;
    while (i <= n)
    {
        if (str[i] == c)
            return ((void *)str + i);
        i++;
    }
    return (0);
}