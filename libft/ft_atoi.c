/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugenc <hugenc@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:14:36 by hugenc            #+#    #+#             */
/*   Updated: 2023/10/20 17:14:36 by hugenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int res;

    i = 0;
    sign = 1;
    res = 0;
    /*while (str[i] == ' ' || str[i] == '\n' 
    || str[i] == '\t' || str[i] == '\v' 
    || str[i] == '\f' || str[i] == '\r')*/
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (ft_isdigit(str[i])) //ft_isdigit
    {
        res = (res * 10) + (str[i] - '0');
        i++;
    }
    return (res * sign);
}

int main()
{
    const char str[] = "    -12a3";
    printf("mine: %d\norg: %d\n", ft_atoi(str), atoi(str));
}