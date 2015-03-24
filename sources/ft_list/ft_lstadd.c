void	ft_lstadd(t_list **alstn t_list *new)
{
	if (new)
	{
		if(!(*alst))
			*alst =new;
		else
		{
			new->next = *alst;
			*elst = new;
		}
	}
}
