#include<stdio.h>
struct date
{
	int year;
	int month;
	int day;
};
struct student
{
	char name[30];
	int num;
	char sex[20];
	struct date birthday;
}student={"苏玉群",2012016,"女",{1991,12,16}};
int main()
{
	printf("***************information of student*************\n");
	printf("Name:%s\n",student.name);
	printf("Number:%d\n",student.num);
	printf("Sex:%s\n",student.sex);
	printf("birthday:%d,%d,%d\n",student.birthday.year,student.birthday.month,student.birthday.day);
	return 0;
}
