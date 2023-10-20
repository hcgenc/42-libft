/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugenc <hugenc@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:17:11 by hugenc            #+#    #+#             */
/*   Updated: 2023/10/20 17:17:14 by hugenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t ft_countword(const char *s, char c)
{
    size_t  count;

    if (!*s)
        return (0);
    count = 0;
    while (*s)
    {
        while (*s == c)
            s++;
        if (*s)
            count++;
        while (*s != c && *s)
            s++;
    }
    return (count);
}

char    **ft_split(char const *s, char c)
{
    char    **lst;
    size_t  word_len;
    size_t     i;

    lst = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
    if (!lst)
        return (0);
    i = 0;
    while (*s != '\0')
    {
        while (*s == c && *s != '\0')
            s++;
        if (*s != '\0')
        {   if (ft_strchr(s, c) == NULL)
                word_len = ft_strlen(s);
            else
                word_len = ft_strchr(s, c) - s;
            lst[i++] = ft_substr(s, 0, word_len);
            s += word_len;
        }
    }
    lst[i] = NULL;
    return (lst);
}

/*
int main()
{
    char s[] = "huseyın ! can genc";
    char **split = ft_split(s, '!');
    int i = 0;
    while (split[i])
        printf("%s\n", split[i++]);
    free(split);
}*/