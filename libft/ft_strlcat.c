/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugenc <hugenc@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:18:00 by hugenc            #+#    #+#             */
/*   Updated: 2023/10/20 17:18:03 by hugenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst , const char *src, size_t dstsize)
{
    size_t  i;
    size_t  j;
    size_t  dlen;
    size_t  slen;

    j = 0;
    i = 0;
    dlen = ft_strlen(dst);
    slen = ft_strlen(src);
    
    if (dstsize == 0 || dstsize <= dlen)
        return (slen + dstsize);
    while(src[j] != '\0' && i < dstsize - dlen - 1)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return(slen + dlen);
}
/*
int main()
{
    char dst[30] = "merhaba";
    const char src[30] = "selam";

    printf("%ld",ft_strlcat(dst, src, 30));

    return 0;
}*/