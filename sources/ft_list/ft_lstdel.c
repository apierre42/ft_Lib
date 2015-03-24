void	ft_lstdel(t_list **alst, void (*del)(void *, sie_t))
{
	if (*alst && del)
	{
		ft_lstdel(&(*alst)->next, del);
		ft_lstdelone(alst, del);
	}
}
