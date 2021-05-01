#include <stdio.h>
struct product
{
	int code,qty;
	char name[20];
	float price,total;
};
int main()
{
	int op;
	FILE *file;
	struct product pro;
	do
	{
		printf("1|>> ADD	PRODUCT\n");
		printf("2|>> SHOW	PRODUCT\n");
		printf("1|>> SEARCHH	PRODUCT\n");
		printf("1|>> UPDATE	PRODUCT\n");
		printf("1|>> DELETE	PRODUCT\n");
		printf("1|>> REPORT	PRODUCT\n");
		printf("** CHOOSE ONE OPTION ** :");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				{
					file=fopen("COFFEESHOP.bin","ab");
					printf("Enter code	:"); scanf("%d",&pro.code);
					fflush(stdin);
					printf("Enter Product	:"); gets(pro.name);
					printf("Enter Quitity	:"); scanf("%d",&pro.qty);
					printf("Enter Price 	:"); scanf("%f",&pro.price);
					pro.total=pro.qty*pro.price;
					fwrite((&pro),sizeof(struct product),1,file);
					fclose(file);
				}break;
			case 2:
				{
					file=fopen("COFFEESHOP.bin","rb");
					printf("Code\tProduct\t\tQutity\tPrice\tTotal\n");
					printf("__________________________________________________________\n");
					while(fread((&pro),sizeof(struct product),1,file))
					{
						printf("%d|\t%s\t%d\t%.2f$\t%.2f$\n",pro.code,pro.name,pro.qty,pro.price,pro.total);
					}
					fclose(file);
				}break;
			case 3:
				{
					char search[20];
					fflush(stdin);
					printf("Input To Search product= "); gets(search);
					file=fopen("COFFEESHOP.bin","rb");
					printf("Code\tProduct\t\tQutity\tPrice\tTotal\n");
					printf("__________________________________________________________\n");
					while(fread((&pro),sizeof(struct product),1,file))
					{
						if(strcmp(search,pro.name)==0)
						{
							printf("%d|\t%s\t%d\t%.2f$\t%.2f$\n",pro.code,pro.name,pro.qty,pro.price,pro.total);
						}
					}
					fclose(file);
				}break;
			case 4:
				{
					char update[20];
					fflush(stdin);
					printf("Search for Update Product= "); gets(update);
					file=fopen("COFFEESHOP.bin","rb");
					while(fread((&pro),sizeof(struct product),1,file))
					{
						if(strcmp(update,pro.name)==0)
						{
							printf("Enter New code	:"); scanf("%d",&pro.code);
							fflush(stdin);
							printf("Enter New Product	:"); gets(pro.name);
							printf("Enter Quitity	:"); scanf("%d",&pro.qty);
							printf("Enter Price 	:"); scanf("%f",&pro.price);
							pro.total=pro.qty*pro.price;
							
						}
					}
					fclose(file);
				}
				
				
				
				
		}
		
		
		
		
		
		printf("PRESS [ENTER] TO CONTINUE...!\n");
	}while(getch()==13);
}
