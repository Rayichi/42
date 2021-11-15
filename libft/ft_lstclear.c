void		ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	next;
	if (lst)
	{
		next = *lst->next;
		while(next)
		{
			next = *lst->next;
			ft_lstdelone(*lst, del);
			*lst = next;
		}
	}
}