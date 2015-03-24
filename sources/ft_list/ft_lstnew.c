t_list	*ft_lstnew(void)
{
	t_lst	*lst

	lst = (t_lst *)malloc(sizeof(t_lst));
	lst -> head = NULL;
	return (lst)
}
