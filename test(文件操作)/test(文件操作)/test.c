#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 10000;
	FILE* pf = fopen("test.txt","wb");
	fwrite(&a, 4, 1, pf);
	fclose(pf);
	pf = NULL;
	return 0;
}

int main()
{
	FILE * pFile;
	pFile = fopen("myfile.txt", "w");
	if (pFile != NULL)
	{
		fputs("fopen example", pFile);
		fclose(pFile);
	}

	return 0;
}

int main()
{
	FILE * pFile;
	pFile = fopen("example.txt", "wb");
	fputs("This is an apple.", pFile);
	fseek(pFile, 9, SEEK_SET);
	fputs(" sam ", pFile);
	fclose(pFile);
	return 0;
}

int main()
{
	FILE * pFile;
	long size;

	pFile = fopen("myfile.txt", "rb");
	if (pFile == NULL) perror("Error opening file");
	else
	{
		fseek(pFile, 0, SEEK_END);
		size = ftell(pFile);
		fclose(pFile);
		printf("Size of myfile.txt:%ld bytes.\n", size);
	}
	return 0;
}

int main()
{
	int n;
	FILE * pFile;
	char buffer[27];

	pFile = fopen("myfile.txt", "w+");
	for (n = 'A'; n <= 'Z'; n++)
	{
		fputc(n, pFile);
	}
	rewind(pFile);
	fread(buffer, 1, 26, pFile);
	fclose(pFile);
	buffer[26] = '\0';
	puts(buffer);
	return 0;
}

#include <stdlib.h>
int main(void) 
{
	int c; 
	FILE* fp = fopen("test.txt", "r");
	if (!fp) 
	{
		perror("File opening failed");
		return EXIT_FAILURE;
	}
	while ((c = fgetc(fp)) != EOF) 
	{
		putchar(c);
	}
	//判断是什么原因结束的
	if (ferror(fp))
		puts("I/O error when reading");
	else if (feof(fp))
		puts("End of file reached successfully");
	fclose(fp);
}

enum { SIZE = 5};
int main(void)
{
	double a[SIZE] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
	double b = 0.0;
	size_t ret_code = 0;
	FILE * fp = fopen("test.bin", "wb");
	fwrite(a, sizeof(*a), SIZE, fp);
	fclose(fp);

	fp = fopen("test.bin", "rb");
	while ((ret_code = fread(&b, sizeof(double), 1, fp)) >= 1)
	{
		printf("%lf\n", b);
	}
	if (feop(fp))
	{
		printf("Error reading test.bin:unexpected end of file\n");
	}
	else if (ferror(fp))
	{
		perror("Error reading test.bin");
	}
	fclose(fp);
	fp = NULL;
	return 0;
}

typedef struct st_type
{
	int i;
	int a[];//柔性数组成员可根据数组大小自行调整
}type_a;  

int main()
{
	FILE* fout = fopen("main.cpp", "r");
	FILE* fin = fopen("main.c", "w");

	int flag = 0;

	char out_ch = fgetc(fout);
	while (out_ch != EOF)
	{
		if (out_ch == '/')
		{
			char next_ch = fgetc(fout);
			if (next_ch == '/')
			{
				//fputc('/', fin);
				//fputc('*', fin);
				fputs("/*", fin);

				flag = 1;
			}
			else
			{
				fputc(out_ch, fin);
				fputc(next_ch, fin);
			}
		}
		else
		{
			if (flag == 1 && out_ch == '\n')
			{
				fputs("*/", fin);
				fputc('\n', fin);
				flag = 0;
			}
			else
			{
				fputc(out_ch, fin);
			}
		}

		out_ch = fgetc(fout);
	}

	fclose(fout);
	fclose(fin);

	return 0;
}
int main()
{
	FILE* fout = fopen("test.txt", "r");
	char out_ch;
	for (size_t i = 0; i < 5; ++i)
	{
		out_ch = fgetc(fout);
		printf("%c", out_ch);
	}
	fseek(fout, 5, SEEK_CUR);

	while (out_ch != EOF)
	{
		out_ch = fgetc(fout);
		printf("%c", out_ch);
	}

	return 0;
}
struct ContactInfo
{
	char name[20];
	char tel[20];
	int age;
};

int main()
{
	struct ContactInfo infos[2] = { { "jack", "18516283075", 18 }, { "rose", "18516283076", 17 } };

	FILE* fin = fopen("contact.bin", "wb");
	// 二进制写
	fwrite(infos, sizeof(struct ContactInfo), 2, fin);

	fclose(fin);

	FILE* fout = fopen("contact.bin", "rb");
	struct ContactInfo rd_infos[2];
	// 二进制读
	fread(rd_infos, sizeof(struct ContactInfo), 2, fout);

	fclose(fout);
};

int main()
{
	struct ContactInfo infos[2] = { { "jack", "18516283075", 18 }, { "rose", "18516283076", 17 } };

	FILE* fin = fopen("contact.txt", "w");
	// 文本写
	//fprintf(stdout, "%s\n%s\n%d", infos[0].name, infos[0].tel, infos[0].age);
	fprintf(fin, "%s\n%s\n%d", infos[0].name, infos[0].tel, infos[0].age);


	fclose(fin);

	FILE* fout = fopen("contact.txt", "r");
	struct ContactInfo rd_infos[2];
	//fscanf(stdin, "%s%s%d", rd_infos[0].name, rd_infos[0].tel, &rd_infos[0].age);
	fscanf(fout, "%s%s%d", rd_infos[0].name, rd_infos[0].tel, &rd_infos[0].age);


	fclose(fout);
};

int main()
{
	int a = 0;
	for (; a < 10; ++a)
	{
		printf("%d\n", a);
	}
	int i = 0;
	++i;

	return 0;
}