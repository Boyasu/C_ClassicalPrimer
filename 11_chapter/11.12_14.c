//创建列表，并将数据输出，还有列表的插入以及删除
/*====================================================================================================================*/

#include<stdio.h>
#include<stdlib.h>

struct Student
{
	char cName[20];
	int  iNumber;
	struct Student* pNext;
};

//定义一个全局变量iCount,表示链表的长度;

int iCount;

//定义一个Create函数创建链表

struct Student* Create()
{
	struct Student* pHead=NULL;						//初始化链表，头指针为空
	struct Student* pEnd, *pNew;	
	iCount=0;								//初始化长度
	pEnd=pNew=(struct Student*)malloc(sizeof(struct Student));		//指向第一个分配的内存,相当于第一个结构变量的地址
	printf("请先输入学生的姓名，然后输入其学号.\n");
	scanf("%s", pNew->cName);
	scanf("%d", &pNew->iNumber);
	while(pNew->iNumber!=0)
	{
		iCount++;
		if (iCount==1)
		{
			pNew->pNext=pHead;					//使第一个节点的指针为空
			pEnd=pNew;						//跟踪新加入的第一个节点
			pHead=pNew;						//头指针指向首节点
		}
		else
		{
			pNew->pNext=NULL;
			pEnd->pNext=pNew;
			pEnd=pNew;
		}
		pNew=(struct Student*)malloc(sizeof(struct Student));		//再次分配节点的内存空间
		
		scanf("%s", pNew->cName);
		scanf("%d", &pNew->iNumber);
	}
	free(pNew);
	return pHead;
}

//输出操作

void Print(struct Student* pHead)
{
	struct Student *pTemp;							//循环所用的临时指针
	int iIndex=1;
	printf("********本名单中有%d个学生：*******\n",iCount);
	printf("\n");
	pTemp=pHead;
	while(pTemp!=NULL)
	{
		printf("第%d个学生是：\n",iIndex);
		printf("姓名：%s\n", pTemp->cName);
		printf("学号：%d\n", pTemp->iNumber);
		printf("\n");
		pTemp=pTemp->pNext;
		iIndex++;
	}			
}

//链表的插入

struct Student* insert(struct Student* pHead)
{
	struct Student* pNew;
	printf("请先输入学生的姓名，然后输入其学号.\n");
	pNew=(struct Student*)malloc(sizeof(struct Student));			
	scanf("%s", pNew->cName);
	scanf("%d", &pNew->iNumber);
	pNew->pNext=pHead;
	pHead=pNew;
	iCount++;
	return pHead;
}

//链表的删除

void Delete(struct Student* pHead, int iIndex)
{
	int i;
	struct Student* pTemp;
	struct Student* pPre;
	pTemp=pHead;	
	pPre=pTemp;
	printf("********删除第%d个学生********\n",iIndex);
	for (i=1;i<iIndex;i++)
	{
		pPre=pTemp;
		pTemp=pTemp->pNext;
	}
	pPre->pNext=pTemp->pNext;
	free(pTemp);
	iCount--;
}

int main()
{
	struct Student* pHead;
	pHead=Create();
	pHead=insert(pHead);
	Delete(pHead,2);
	Print(pHead);
	
	return 0;
}







































