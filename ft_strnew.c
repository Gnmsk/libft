char	*ft_strnew(size_t size)
{
	char *newstr;
	int i;

	i = 0;
	if (size + 1 < size)
		return(NULL);
	if(!(newstr = (char *)malloc) * (size + 1))
		return(NULL);
	while (newstr[i]++)
		newstr = 0;
	return(newstr[0]);
}
