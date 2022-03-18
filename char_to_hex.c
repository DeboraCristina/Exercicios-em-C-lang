char	*ft_chartohex(char *res, int c)
{
	char	cont;
	char	pd;
	char	sd;

	cont = 0;
	pd = '0';
	sd = '0';
	while (cont < c)
	{
		sd++ ;
		if (sd == ':')
			sd = 'a';
		if (sd > 'f')
		{
			sd = '0';
			pd++;
		}
		++ cont;
	}
	res[0] = pd;
	res[1] = sd;
	return (res);
}
