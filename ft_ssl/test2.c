/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 15:07:28 by zwang             #+#    #+#             */
/*   Updated: 2018/11/02 15:15:21 by zwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
int main() 
{ 
	char	*s = "Waller";
	unsigned	*i = (unsigned *)s;	
	printf("%08x%08x\n", i[0], i[1]);
	return 0; 
} 
