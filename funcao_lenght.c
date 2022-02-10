int	len(char *str)
{
	int	cont;

	cont = 1;
	while (*(str + cont) != 0)
	{
		cont++;
	}
	return (cont);
}
