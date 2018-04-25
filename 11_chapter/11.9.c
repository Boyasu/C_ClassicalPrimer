#include<stdio.h>
//使用结构体变量作为函数参数
struct Student						//student structure
{
	char cName[20];
	int  iNumber;
	char cSex[20];
	int  iGrade;
}student={"Jiasheng Wang",21,"W",3};
void Display(struct Student stu)
{
	printf("***************information of student*************\n");
	printf("Name:%s\n",stu.cName);
	printf("Number:%d\n",stu.iNumber);
	printf("Sex:%s\n",stu.cSex);
	printf("Grade:%d\n",stu.iGrade);
}
int main()
{
	Display(student);
	return 0;
}
