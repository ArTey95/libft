/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateymour <ateymour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:27:44 by ateymour          #+#    #+#             */
/*   Updated: 2023/01/06 12:35:28 by ateymour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <unistd.h>


int ft_toupper (int c){
    if (c < 123 && c > 96) {
        return ( c - 32);
    }
    else {
        return (c);
    }
}
// int main(void) {
//     printf(" %c\n", (char)ft_toupper('2'));
//     return(0);
// }