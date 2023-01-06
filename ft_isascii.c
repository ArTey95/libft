/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateymour <ateymour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 10:25:34 by ateymour          #+#    #+#             */
/*   Updated: 2023/01/06 10:26:51 by ateymour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include<stdio.h>
int ft_isascii(int c) {
    if ( (0 <= c) && (c <= 127)) {
        return (1);
        }   
    else {
        return(0);
    }    

}


int main()
{
printf("%d",ft_isascii('a'));

}