#include <stdio.h>
struct rec
{
	int x;
};
int main()
{
	int counter;
	FILE *ptr_myfile;
	struct rec my_record;
	
	ptr_myfile=fopen("etec.bin","rb");
	if(!ptr_myfile)
	{
		printf("Unble to open file");
		return 1;
	}
	for(counter=1;counter<=10; counter++)
	{
		fread(&my_record.x,sizeof(struct rec),1,ptr_myfile);
		printf("%d\n",my_record);
	}
	fclose(ptr_myfile);
	return 0;
}

