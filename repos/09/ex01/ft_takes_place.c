/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 18:43:36 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/02 16:20:21 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define STATE "THE FOLLOWING TAKES PLACE BETWEEN"

void	ft_takes_place(int hour)
{
	if (hour == 0)
		printf("%s %d.00 A.M. AND %d.00 A.M.\n", STATE, 12, 1);
	if (hour != 0 && hour < 9)
		printf("%s %d.00 A.M. AND %d.00 A.M.\n", STATE, hour, hour + 1);
	if (hour == 9)
		printf("%s %d.00 A.M. AND %d.00 A.M.\n", STATE, 9, 10);
	if (hour == 10)
		printf("%s %d.00 A.M. AND %d.00 A.M.\n", STATE, 10, 11);
	if (hour == 11)
		printf("%s %d.00 A.M. AND %d.00 P.M.\n", STATE, 11, 12);
	if (hour == 12)
		printf("%s %d.00 P.M. AND %d.00 P.M.\n", STATE, 12, 1);
	if (hour > 12 && hour < 21)
		printf("%s %d.00 P.M. AND %d.00 P.M.\n", STATE, hour - 12, hour - 11);
	if (hour == 21)
		printf("%s %d.00 P.M. AND %d.00 P.M.\n", STATE, 9, 10);
	if (hour == 22)
		printf("%s %d.00 P.M. AND %d.00 P.M.\n", STATE, 10, 11);
	if (hour == 23)
		printf("%s %d.00 P.M. AND %d.00 A.M.\n", STATE, 11, 12);
}
