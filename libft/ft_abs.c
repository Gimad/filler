//
// Created by Gimad on 01.10.2020.
//

int		ft_abs(int n)
{
	return ((n + (n >> 31)) ^ (n >> 31));
}