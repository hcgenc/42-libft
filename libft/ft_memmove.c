/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugenc <hugenc@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:16:06 by hugenc            #+#    #+#             */
/*   Updated: 2023/10/20 17:16:09 by hugenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{

    char    *d;
    const char  *s;
    
    d = (char *)dst;
    s = (const char *)src;
    if (d == s)
        return (dst);
    if (d < s)
        ft_memcpy(d, s, len);
    else
    {
        d += len - 1;
        s += len - 1;
        while (len--)
            *(d--) = *(s--);
    }
    return (dst);
}

int main(void)
{
    char dst[30] = "huseyin";
    const char src[30] = "merhaba selam";

    printf("%s\t%s", ft_memmove(dst, src, 3), memmove(dst, src, 3));

    return 0;
}