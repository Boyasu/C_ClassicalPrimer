#include<stdio.h>
struct Product
{
	char cName[10];
	char cShape[20];
	char cColor[10];
	int	iPrice;
	char cArea[20];
};
int main()
{
	struct Product product1;				//定义结构体变量
	printf("请输入产品的名称：\n");
	scanf("%s",product1.cName);
	printf("请输入产品的形状：\n");
	scanf("%s",product1.cShape);
	printf("请输入产品的颜色：\n");
	scanf("%s",product1.cColor);
	printf("请输入产品的价格：\n");
	scanf("%d",&product1.iPrice);
	printf("请输入产品的产地：\n");
	scanf("%s",product1.cArea);
	printf("名称为：%s\n",product1.cName);	
	printf("形状为：%s\n",product1.cShape);	
	printf("颜色为：%s\n",product1.cColor);	
	printf("价格为：%d\n",product1.iPrice);	
	printf("产地为：%s\n",product1.cArea);	
	return 0;
}
