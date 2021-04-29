#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	char text[50];
	fp = fopen("ETEC1.txt","r");
	if(fp == NULL)
	{
		printf("Error!");
		exit(1);
	}
	printf("Input Text=");
	gets(text);
	fputs(text,fp);
	printf("Write to Succesfully...!");
	fclose(fp);
}
