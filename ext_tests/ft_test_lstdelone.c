#include "test.h"


static char		g_is_delete;

static void	ft_test_lstdelone2_del(void *content, size_t content_size)
{
	char	*str;

	str = (char *)content;
	if (str && content_size == (strlen(str) + 1))
		g_is_delete = 1;
}

int	ft_test_lstdelone(void)
{
	int		res;
	t_list	*elem;
	t_list	*elem2;
	char	str[] = "Bonjour";

	res = 0;
	ft_print_begin("ft_lstdelone");
	elem = ft_lstnew((void *) str, ft_strlen(str) + 1);
	elem2 = ft_lstnew((void *) str, ft_strlen(str) + 1);
	elem->next = elem2;
	g_is_delete = 0;
	ft_lstdelone(&elem2, ft_test_lstdelone2_del);
	printf("elem2 : %p\n", elem2);
	if (elem2 || !g_is_delete)
		++res;
	if (elem)
		free(elem);
	printf("Test");
	ft_print_status(res);
	return (ft_print_end(res));
}
