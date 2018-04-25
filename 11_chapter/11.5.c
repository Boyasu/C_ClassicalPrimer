#include<stdio.h>
struct Student						//student structure
{
	char cName[20];
	int  iNumber;
	char cSex[20];
	int  iGrade;
}student[2]={
	     {"Jiasheng Wang",21,"W",3},
	     {"Longjiao Yu",22,"W",3}		
	    };
int main()
{
	int i;
	for (i=0;i<2;i++)
	{
		printf("NO%d student:\n",i+1);
		printf("Name:%s, Number:%d\n",student[i].cName,student[i].iNumber);
		printf("Sex:%s, Grade:%d\n",student[i].cSex,student[i].iGrade);
		printf("\n");	
	}
	return 0;
}
