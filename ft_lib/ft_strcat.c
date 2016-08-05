char* 	ft_strcat(char* dest, char* src )
{
	while (*dest) dest++;
	while ((*dest++ = *src++));
	return dest;
}
