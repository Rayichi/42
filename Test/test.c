

//Strnstr
#include <string.h>
 #include <stdio.h>
int main()
{
	char s1[] ="bonjour le monde";
	char	s2[] ="bonjour le monde";
	size_t n = 0; 
	printf("%s\n%s\n", strnstr(s1, s2, n), ft_strnstr(s1, s2, n));
} 

//strlcat 
 
int main()
{
	char buffer[32];
char s1[] = "0123456789";
char s2[] = "abcdef";
 
strcpy(buffer, s1);
ft_strlcat(buffer, s2, 10);
printf("%s\n",buffer); // devrait afficher '0123456789'
 
strcpy(buffer, s1);
ft_strlcat(buffer, s2, 13);
printf("%s\n",buffer); // devrait afficher '0123456789abc'
 
strcpy(buffer, s1);
ft_strlcat(buffer, s2, 16);
printf("%s\n",buffer); // devrait afficher '0123456789abcdef'
 
strcpy(buffer, s2);
ft_strlcat(buffer, s1, 10);
printf("%s\n",buffer); // devrait afficher 'abcdef0123'
 
strcpy(buffer, s1);
printf("%lu\n%s\n", ft_strlcat(buffer, s1, 0), buffer); // devrait afficher 'abcdef01234567'

strcpy(buffer, s1);
printf("%lu\n%s\n", strlcat(buffer, s1, 0), buffer); // devrait afficher 'abcdef01234567'
}

ft_strncmp
int main()
{
	printf("%d\n%d\n",ft_strncmp("1234", "1235", -1),strncmp("1234", "1235", -1));
}

/*
int main ()
{
	char *s = ft_itoa(0);
	printf("%s\n", s);
}
*/