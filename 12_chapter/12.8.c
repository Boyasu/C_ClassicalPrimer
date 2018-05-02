#include<stdio.h>
#include<stdlib.h>
struct address_list							//structure for students' information
{
	char name[10];
	char adr[20];
	char tel[15];
}info[100];

//define a save function

void save(char *name, int n)
{
	FILE *fp;
	int i;
	if ((fp=fopen(name,"wb"))==NULL)				//以只写的方式打开文件
	{
		printf("cannot open file\n");
		exit(0);
	}
	for (i=0;i<n;i++)
	{
		if (fwrite(&info[i],sizeof(struct address_list),1,fp)!=1)
			printf("file write error\n");
	}
	fclose(fp);
}

//define a show function

void show(char *name, int n)
{
	int i;
	FILE *fp;
	if ((fp = fopen(name,"rb"))==NULL)
	{
		printf("cannot open file\n");
		exit(0);
	}
	for (i=0;i<n;i++)
	{
		fread(&info[i],sizeof(struct address_list),1,fp);
		printf("%15s%20s%20s\n", info[i].name, info[i].adr, info[i].tel);
	}
	
}

main()
{
	int i,n;
	char filename[50];
	printf("How many students?\n");
	scanf("%d",&n);
	printf("file path and name:\n");
	scanf("%s",filename);
	printf("Please input students' name, address and tel.\n");
	for (i=0;i<n;i++)
	{
		printf("NO%d\n",i+1);
		scanf("%s%s%s", info[i].name, info[i].adr, info[i].tel);
		save(filename, n);	
	}
	show(filename, n);
	return 0;
}





















