#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	char name[50];
	int roll_no, chars, i, n;
	float marks;
	fp = fopen("records.txt","a");
	if(fp == NULL)
	{
		printf("Error opening file\n");
		exit(1);
	}
	printf("Testing fprintf() function: \n\n");
	printf("Enter the number of records you to enter: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		printf("\nEnter the detaills of student %d \n\n",i+1);
		
		printf("Enter name of the student: ");
		gets(name);
		printf("Enter roll no: ");
		scanf("%d",&roll_no);
		printf("Enter marks: ");
		scanf("%f",&marks);
		chars = fprintf(fp,"%s	%d	%f",name,roll_no,marks);
		printf("\n%d characters successfully writen to the file \n", chars);
		fclose(fp);
		return 0;
	}
}

