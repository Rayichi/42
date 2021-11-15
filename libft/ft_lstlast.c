t_list		*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->new)
	{
		lst = lst->next
	}
	return (lst);
}