t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*next;
	t_list	*start;

	start = NULL;
	while (lst)
	{
		next = ft_lstnew(f(lst->content));
		lst = lst->next;
		if(!next)
		{
			ft-lstclear(&start, del);
			return (NULL);
		}
		ft_lstadd_back(&lst, next);
	}
	return (start);	
}