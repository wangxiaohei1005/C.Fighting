#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "Contact.h"

void InitContact(pContact pc)//��ʼ��
{
	pc->size = 0;
}
void AddContact(pContact pc)//�����Ϣ
{
	info curInfo;
	if (pc->size == MAX)
	{
		printf("ͨѶ¼�ڴ治�㣬�޷���ӣ�����\n");
		return;
	}
	printf("������������\n");
	scanf("%s", curInfo.name);
	printf("�������Ա�\n");
	scanf("%s", curInfo.gender);
	printf("������绰��\n");
	scanf("%s", curInfo.tele);
	printf("���������䣺\n");
	scanf("%d", &curInfo.age);
	printf("��������ߣ�\n");
	scanf("%d", &curInfo.tall);
	printf("�������ַ��\n");
	scanf("%s", curInfo.addr);
	pc->data[pc->size] = curInfo;
	pc->size++;
}
void DelContact(pContact pc)//ɾ��
{
	char name[NAME];
	printf("��������Ҫɾ������Ϣ��������\n");
	scanf("%s", name);

}
void SearchContact(pContact pc)//����
{

}
void ModifyContact(pContact pc)//����
{

}
void SortContact(pContact pc)//����
{

}
void ShowContact(pContact pc)//��ӡ
{

}