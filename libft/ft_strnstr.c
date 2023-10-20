/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugenc <hugenc@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:18:44 by hugenc            #+#    #+#             */
/*   Updated: 2023/10/20 17:18:46 by hugenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;
    char *h;

    i = 0;
    j = 0;
    h = (char *)haystack;
    while (i < len)
    {
        while (h[i + j] == needle[j] && h[i + j] != '\0')
            j++;
        if (needle[j] == '\0')
            return (h + i);
        i++;
        j = 0;
    }
    return (0);
}

int main()
{
    char h[] = "selam ben sevval";
    char n[] = "ben";
    printf("%s\t%s", strnstr(h, n, 15), ft_strnstr(h, n, 15));
}