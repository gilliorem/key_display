#include <stdio.h>

int main()
{
		char c;
		
		while (1)
		{
				c = getchar();
				if (c == 17)
						{
								break;
						}
				printf("%c\n", c);
		}
		return 0;
}

