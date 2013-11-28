#include "test.h"


static char		g_is_delete;

static void	ft_test_lstdel2_del(void *content, size_t content_size)
{
	char	*str;

	str = (char *)content;
	if (str && content_size == (strlen(str) + 1))
		++g_is_delete;
}

int	ft_test_lstdel(void)
{
	int		res;
	t_list	*elem;
	t_list	*elem2;
	char	str[] = "Bonjour";
	char	str2[] = "Bonjour 2";

	res = 0;
	ft_print_begin("ft_lstdel");
	elem = ft_lstnew((void *) str, strlen(str) + 1);
	elem2 = ft_lstnew((void *) str2, strlen(str2) + 1);
	elem->next = elem2;
	elem2->next = 0;
	g_is_delete = 0;
	ft_lstdel(&elem, ft_test_lstdel2_del);
	if (elem || g_is_delete != 2)
		++res;
	if (elem)
	{
		if (elem->next)
			free(elem->next);
		free(elem);
	}
	printf("Test");
	ft_print_status(res);
	return (ft_print_end(res));
}
