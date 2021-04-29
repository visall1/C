#include <stdio.h>
struct student
{
	int id;
	char name[20],sex[10];
	float score;
};
int main()
{
	FILE *file;
	struct student stu;
	int i,n;
	file=fopen("Student.txt","r");
	while(1==fread((&stu),sizeof(struct student),1,file))
	{
		printf("%d\t%s\t%s\t%.2f\n",stu.id,stu.name,stu.sex,stu.score);
	}
	fclose(file);
}
