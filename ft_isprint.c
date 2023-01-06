/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateymour <ateymour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 10:25:45 by ateymour          #+#    #+#             */
/*   Updated: 2023/01/06 10:26:50 by ateymour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
int ft_isprint(int c){
    
    if ( (' '<= c) && (c <= '~')) {
        return (1);
        }   
    else {
        return(0);
    }    

}

int main(int argc, char **argv)
{

printf("%d",ft_isprint(argv[argc -1 ][0]));
// printf("%d",isprint(argv[argc -1 ][0]));

}