#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr;
	char ch;
	int count = 0;
	fptr = fopen("D:/�{���@�~/110360233_�^�m��/P14//welcome.txt", "r");
	if (fptr != NULL)
	{
		while ((ch = getc(fptr)) != EOF)
		{
			printf("%c", ch);
			count++;
		}
		fclose(fptr);
		printf("\n�`�@��%d�Ӧr��\n", count);
	}
	else
	{
		printf("�ɮ׶}�ҥ���!!\n");
	}
	return 0;
}