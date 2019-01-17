int	ft_strcmp(char *s1, char *s2, int len)
{
	int i;

	i = 0;
	while (*s1 && *s2 && i <= len)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		*s1++;
		*s2++;
		i++;
	}
	return (*s1 - *s2);
}

