/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugenc <hugenc@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:18:08 by hugenc            #+#    #+#             */
/*   Updated: 2023/10/20 17:18:11 by hugenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t  i;

    i = 0;
    while (i <= dstsize - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (ft_strlen(src));
}

/*
int main()
{
    char dst[9] = "merhaba";
    const char src[] = "selam";

    printf("%ld\n%ld\n", strlcpy(dst, src, 8), ft_strlcpy(dst, src, 8));
    return 0;
}*/