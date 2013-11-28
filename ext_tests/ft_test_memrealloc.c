#include "test.h"

void	print_memory(void *start, size_t length)
{
	unsigned int	counter;
	char			elt;
	char			*n;

	counter = 0;
	n = (char *) start;
	ft_putstr("{");
	while ( counter < length )
	{
		elt = n[counter];
		if ( ft_isprint(elt) )
		ft_putchar(elt);
		else
			ft_putstr(ft_itoa((int) elt));
		ft_putstr(" | ");
		counter++;
	}
	ft_putstr("}\n");
}

int	ft_test_memrealloc(void)
{
	int		counter;
	int		res;
	int		size;
	void	*ptr;
	char	*elt;

	size = 20;
	res = counter =  0;
	ft_print_begin("ft_memrealloc");
	elt = (char *) ft_memalloc(size);
	ptr = ft_memalloc(size);
	while ( counter < size + 200 )
	{
		elt[counter] = (char) counter;
		counter++;
	}
	print_memory(elt, size + 200);
	elt = (char *) ft_memrealloc((void *) elt, size, size + 200);
	print_memory(elt, size + 20);

	return (ft_print_end(res));
}
