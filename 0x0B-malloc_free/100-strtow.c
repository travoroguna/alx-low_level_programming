#include <stdlib.h>
#include <stdio.h> 


char **add_new(char** old, char *new_str, unsigned int old_size)
{
	
}

char **strtow(char *str)
{
	char **result;
	unsigned int size;
	char *new_str;
	int idx, start, end, mx, count;

	start = -1;
	end = -1;

	if (str == NULL || str == "")
	 	return (NULL);


	for (idx = 0; *(str + idx) != '\0'; idx++)
	{
		if (start == -1)
		{
			if (*(str + idx) != ' ')
				start = idx;
		}

		else
		{
			if (*(str + idx) == ' ' || *(str + idx + 1) == '\0' )
			{
				end = idx;

				if (*(str + idx + 1) == '\0')
					end += 1;

				new_str = malloc(end - start + 1);


				for (mx = start, count = 0; mx < end; mx++, count++)
				{
					new_str[count] = str[mx];
				}

				new_str[count] = 0;

				

				start = -1;
				end = -1;
			}

			

		}
	}
	

}

int main()
{
	strtow(" mama i just killed a man");

	return (0);
}