#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* join(char* a, char* b)
{
	size_t s = 0;
	char* r = NULL;
	unsigned int i;

	for (i = 0; i < strlen(a); ++i)
		if (islower(a[i]))
		{
			r = realloc(r, s);
			r[s++] = a[i];
		}

	for (i = 0; i < strlen(b); ++i)
		if (isupper(b[i]))
		{
			r = realloc(r, s);
			r[s++] = b[i];
		}
	r[s] = '\0';
	
	return r;
}

int main(int argc, char* argv[])
{
	printf("%s + %s = %s\n", argv[1], argv[2], join(argv[1], argv[2]));
	
	return 0;
}
