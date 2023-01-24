#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int	i;
	char	re;
	len = ft_strlen(s);

	i = 0;
	re = malloc(len * sizeof(char) + 1);
	if(!re)
		return(NULL);
	while(s[i] != 0)
	{
		re[i] = (*f)(i,s[i]);
		i++;
	}
	res[i] = 0;
	return(re);
}
