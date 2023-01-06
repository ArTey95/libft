/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateymour <ateymour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:31:45 by ateymour          #+#    #+#             */
/*   Updated: 2023/01/06 16:24:25 by ateymour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	make_num(int i, int k, char *str, int negative)
{
	int	answer;
	int	power;
	int	j;
	int	l;

	l = 0;
	answer = 0;
	while (l < i && i - 1 - l >= k)
	{
		power = 1;
		j = 0;
		while (j < l)
		{
			power *= 10;
			j++;
		}
		answer += (str[i -1 - l] - '0') * power;
		l++;
	}
	if (negative != 0)
		answer *= -1;
	return (answer);
}

int	ft_atoi(char *str)
{
	int	k;
	int	i;
	int	positive;
	int	negative;

	i = 0;
	positive = 0;
    negative= 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r'|| str[i] == '\n' || str[i] == '\v' || str[i] == '\f')
	{	
        i++;
    }
    while( str[i] == '+' || str[i] == '-'){
		if (*(str + i) == '-')
			negative += 1;
		if (*(str + i) == '+')
			positive += 1;
        if (positive + negative > 1) {
            return (0);
        }
		i++;
	}
	k = i;
	while (*(str + i) <= '9' && *(str + i) >= '0' && *(str + i) != 0)
	{
		i++;
	}
	if (i > k) 
        return(make_num( i, k, str,  negative));
	return (0);
}
// int main(void) {
//     printf("%d\n", ft_atoi("2147483648"));
//     printf("%d\n", atoi("2147483648"));
//     return (0);
// }