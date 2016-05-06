/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabougue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/24 01:04:14 by rabougue          #+#    #+#             */
/*   Updated: 2016/05/06 21:39:24 by rabougue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int		main(int argc, char **argv)
{
	t_all	all;

	if (argc != 2)
		check_arguments();
	system("sh menu.sh");
	call_fractal_1(argv, &all);
	mlx_loop(all.mlx_ptr);
	return (0);
}
