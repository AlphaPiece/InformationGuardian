/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sum_intarr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 15:05:41 by zwang             #+#    #+#             */
/*   Updated: 2018/10/06 19:06:42 by zwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sum_intarr(int arr[], size_t len)
{
	size_t	i;
	int		sum;
	
	i = 0;
	sum = 0;
	while (i < len)
		sum += arr[i++];
	return (sum);
}