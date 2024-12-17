/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmpianim <vmpianim@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 14:11:25 by vmpianim          #+#    #+#             */
/*   Updated: 2024/09/14 14:56:29 by vmpianim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int check_args(int argc, char **argv)
{
    if (argc <= 4 || argc > 6)
        return (0);
    if (!ft_is_digit(argv[1]) || !ft_is_digit(argv[2])
        || !ft_is_digit(argv[3]) || !ft_is_digit(argv[4]))
        return (0);
}