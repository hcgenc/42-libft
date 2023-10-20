/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugenc <hugenc@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:17:00 by hugenc            #+#    #+#             */
/*   Updated: 2023/10/20 17:17:02 by hugenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
        write(fd, "-2147483648", 11);
    else
    {
        if (n < 0)
        {
            write(fd, "-", 1);
            n = -n;
        }
        if (n >= 10)
        {
            char *str = ft_itoa(n);
            write(fd, str, ft_strlen(str));
            free(str);
        }
        else
        {
            char c = n + '0';
            write(fd, &c, 1);
        }
    }
}

/*
int main()
{
    int fd;
    int number;
    number = 12;
    fd = open("Saval.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
    ft_putnbr_fd(number, fd);
    close(fd);

    return 0;
}
*/