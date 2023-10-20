/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugenc <hugenc@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:17:41 by hugenc            #+#    #+#             */
/*   Updated: 2023/10/20 17:17:44 by hugenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char    *ft_strdup(const char *s1)
{
    char    *dest;
    int     i;
    int     len;

    len = ft_strlen(s1);
    dest = ft_calloc((len + 1), sizeof(char));
    if (dest == NULL)
        return (NULL);
    i = 0;
    while (s1[i])
    {
        dest[i] = s1[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}