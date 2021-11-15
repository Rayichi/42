void		ft_lstadd_front(t_list **alst, t_list *new)
{
	if 	(!new)
		return ;
	else if (alst)
		new->next = *alst
	else
		*alst = new;
}