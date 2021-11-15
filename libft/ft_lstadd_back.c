void		ft_lstadd_back(t_list **alst, t_list *new)
{	
	if (!*alst)
		*alst = new;
	else if (new)
	{
		*alst = ft_lstlast(*alst);
		*alst->next = new
	}
}