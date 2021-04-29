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
	int n,i;
	file=fopen("Student.txt","a");
	printf("Input Number= ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Input ID= "); scanf("%d",&stu.id);
		fflush(stdin);
		printf("Input Name= "); gets(stu.name);
		printf("Input Sex= "); scanf("%s",&stu.sex);
		printf("Input Score= "); scanf("%f",&stu.score);
		fwrite((&stu),sizeof(struct student),1,file);
	}
	fclose(file);
}
