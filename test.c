#include "shell.h"
int main()
{
	char *str;
	char *token;
	str = _strdup( "this  is\t  sara\n");
	token = strtok (str, "\t\n");
	while (token)
	{
	printf("%s\n", token);
	token = strtok(NULL, "\t\n");
	}
	printf("str = %s\n", token);
	
	return (0);

}
