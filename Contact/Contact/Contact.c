#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "Contact.h"

void InitContact(pContact pc)//初始化
{
	pc->size = 0;
}
void AddContact(pContact pc)//添加信息
{
	info curInfo;
	if (pc->size == MAX)
	{
		printf("通讯录内存不足，无法添加！！！\n");
		return;
	}
	printf("请输入姓名：\n");
	scanf("%s", curInfo.name);
	printf("请输入性别：\n");
	scanf("%s", curInfo.gender);
	printf("请输入电话：\n");
	scanf("%s", curInfo.tele);
	printf("请输入年龄：\n");
	scanf("%d", &curInfo.age);
	printf("请输入身高：\n");
	scanf("%d", &curInfo.tall);
	printf("请输入地址：\n");
	scanf("%s", curInfo.addr);
	pc->data[pc->size] = curInfo;
	pc->size++;
}
void DelContact(pContact pc)//删除
{
	char name[NAME];
	printf("请输入你要删除的信息的姓名：\n");
	scanf("%s", name);

}
void SearchContact(pContact pc)//查找
{

}
void ModifyContact(pContact pc)//更改
{

}
void SortContact(pContact pc)//排序
{

}
void ShowContact(pContact pc)//打印
{

}