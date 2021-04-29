#include <stdio.h>
int main()
{
	char text[100];
	FILE *fp;
	fp=fopen("C:\\Users\\ADMIN\\Desktop\\Fuckyou.txt","w");
	fflush(stdin);
	printf("Input text: "); gets(text);
	fputs(text,fp);
	fclose(fp);
}
