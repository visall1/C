#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num;
	FILE *fptr;
	fptr = fopen("ETEC1.txt","w");
	if(fptr == NULL)
	{
		printf("Error!");
		exit(1);
	}
	printf("Enter Num: ");
	scanf("%d",&num);
	fprintf(fptr,"%d",num);
	printf("=========Write Completed=========\n");
	printf("GoodBye...!");
	fclose(fptr);
	return 0;
}
