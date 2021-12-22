#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *in, *out;
	int cnt;
	char str[100];
	in = fopen("D:/程式作業/110360233_彭雋中/P18//welcome.txt", "r");
	out = fopen("D:/程式作業/110360233_彭雋中/P18//output.txt", "w");
	while (!feof(in))
	{
		cnt = fscanf(in, "%s", str);
		if (cnt > 0)
		{
			fprintf(out, "%s\n", str);
		}
	}
	fclose(in);
	fclose(out);
	return 0;
}