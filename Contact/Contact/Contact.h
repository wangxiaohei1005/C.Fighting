#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#define NAME 20
#define GENDER 20
#define TELE 12
#define ADDR 200
#define MAX 200//�ܴ洢��
typedef struct info
{
	char name[NAME];
	char gender[GENDER];
	char tele[TELE];
	int age;
	int tall;
	char addr[ADDR];

}info;

typedef struct Contact
{
	info data[MAX];
	int size;
}Contact, *pContact;

void InitContact(pContact pc);//��ʼ��
void AddContact(pContact pc);//������Ϣ
void DelContact(pContact pc);//ɾ��
void SearchContact(pContact pc);//����
int FindContact(pContact��char* name);//Ѱ��
void ModifyContact(pContact pc);//����
void SortContact(pContact pc);//����
void ShowContact(pContact pc);//��ӡ