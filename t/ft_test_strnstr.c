#include "test.h"

int	ft_test_strnstr2(char const *s1, char const *s2, int n, char big_fail)
{
	int		res;
	char	*res2;
	char	*res3;

	res = 0;
	res2 = ft_strnstr(s1, s2, n);
	res3 = (big_fail) ? res2 : strnstr(s1, s2, n);
	if (res2 != res3)
		++res;
	printf("Test : Compare \"%s\" and \"%s\" (%d) { %p - %p }", s1, s2, n, res2, res3);
	ft_print_status(res);
	return (res);
}

int	ft_test_strnstr(void)
{
	int	res;

	res = 0;
	ft_print_begin("ft_strnstr");
	res += ft_test_strnstr2("tvaaabcd", "aabc", 4, 0);
	res += ft_test_strnstr2("tvaaabcd", "aabc", 8, 0);
	res += ft_test_strnstr2("", "", 5, 0);
	res += ft_test_strnstr2("", "e", 1, 0);
	res += ft_test_strnstr2("Bonjour", "Bonjour", 7, 0);
	res += ft_test_strnstr2("Bonjour", "bonjour", 7, 0);
	res += ft_test_strnstr2("// 123test un strn", "azlijazfpozekfpozefpoezfzef j'aime bien ca!", 0, 0);
    res += ft_test_strnstr2("// salut", "lut", 5, 0);
    res += ft_test_strnstr2("salutlesgens", "les", 10, 0);
    res += ft_test_strnstr2("marvin_is_back", "", 0, 0);
    res += ft_test_strnstr2("42", "marvin_is_back", 42, 0);
    res += ft_test_strnstr2("marvin_is_back", "a", 5, 0);
    res += ft_test_strnstr2("marvin_is_back", "marvin", 6, 0);
    res += ft_test_strnstr2("marvin_is_back", "marvin_is_back", 14, 0);
    res += ft_test_strnstr2("a", "a", 1, 0);
    res += ft_test_strnstr2("a", "b", 1, 0);
    res += ft_test_strnstr2("marvin", "marvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvinmarvin", 0, 0);
	return (ft_print_end(res));
}