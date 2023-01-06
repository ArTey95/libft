/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateymour <ateymour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:41:28 by ateymour          #+#    #+#             */
/*   Updated: 2023/01/06 13:15:25 by ateymour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <ctype.h>
#include <stdio.h>
#include <unistd.h>
int ft_tolower (int c){
    if (c < 91 && c > 64) {
        return ( c + 32);
    }
    else {
        return (c);
    }
}
// int main(void) {
//     printf(" %c\n", (char)ft_tolower('s'));
//     return(0);
// }