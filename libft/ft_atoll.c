/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchaudry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 19:35:12 by bchaudry            #+#    #+#             */
/*   Updated: 2018/11/13 19:37:41 by bchaudry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long		ft_atoll(const char *str)
{
	long long		i;
	long long		result;
	int				neg;

	i = 0;
	neg = 1;
	result = 0;
	while (str[i] == 32 || str[i] == 10 || str[i] == 9 || str[i] == 12
		|| str[i] == 13 || str[i] == 11)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] < 48 || 57 < str[i])
			return (result * neg);
		else
			result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * neg);
}
