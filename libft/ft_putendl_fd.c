/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugenc <hugenc@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:16:54 by hugenc            #+#    #+#             */
/*   Updated: 2023/10/20 17:16:55 by hugenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"


void ft_putendl_fd(char *s, int fd)
{
    int i;

    i = 0;
    while (s[i])
        write(fd, &s[i++], 1);
    write(fd, "\n", 1);
}


/*
int main(void)
{
    int fd;
    char s[] = "Saval.....";
    fd = open("Saval.txt", O_WRONLY);
    ft_putendl_fd(s , fd);
    close(fd);
    return 0;
}*/