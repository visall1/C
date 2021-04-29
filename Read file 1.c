#include <stdio.h>
int main()
{
	char text[10000];
	FILE *fp;
	fp=fopen("C:\\Users\\ADMIN\\Desktop\\Fuckyou.txt","r");
	while(fgets(text,1000,fp)!=NULL)
	{
		printf("%s",text);
		sleep(1);
	}
	fclose(fp);
}

