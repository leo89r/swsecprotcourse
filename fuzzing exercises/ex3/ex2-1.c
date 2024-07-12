#include <stdio.h>
#include <string.h>

#define SIZE 32

int main(int argc, char* argv[])
{
	FILE* f;
	char line[SIZE];
	char string[SIZE];
	int i;
	int pos;
	
	f = fopen(argv[1], "r");
	
	while (fgets(line, SIZE, f) != NULL)
	{
		pos = 0;
		for (i = 0; i < strlen(line); ++i)
		{
			string[pos++] = line[i];
			if (line[i] == ' ')
			{
				string[pos++] = ' ';
				string[pos++] = ' ';
				string[pos++] = ' ';
			}
		}
		string[pos] = '\0';
		printf(string);
	}
	
	fclose(f);
	
	return 0;
}
