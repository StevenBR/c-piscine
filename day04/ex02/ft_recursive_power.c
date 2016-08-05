#include <stdio.h>
 int	ft_recursive_power(int nb, int power)
 {
 	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return 1;
	}
 	if (power != 1)
 	{
 		return (nb * ft_recursive_power(nb, power - 1));
 	}
 	else
 	{
 		return nb;
 	}	
 }

int main()
{
	int v = ft_recursive_power(3,3);
	printf("%d",v);
}